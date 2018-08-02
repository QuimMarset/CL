
#include "antlr4-runtime.h"
#include "ExamenLexer.h"
#include "ExamenParser.h"
#include "ExamenBaseListener.h"
#include "tree/ParseTreeWalker.h"
#include "tree/ParseTreeProperty.h"

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdio>    // fopen

// using namespace std;
// using namespace antlr4;

class Listener : public ExamenBaseListener {
public:

    enum Tipus {IntType = 0, StringType};
    
    struct Atributs {
      int mida;
      Tipus tipus;
      bool esPila;
    };

    std::map <std::string, Atributs> simbols;

    antlr4::tree::ParseTreeProperty<Tipus> tipus;

    void exitAssignInst(ExamenParser::AssignInstContext *ctx) {
        Tipus t = tipus.get(ctx->expr());
        std::string ident = ctx->ID()->getText();
        if (simbols.find(ident) != simbols.end()) {
            Atributs* atr = &simbols[ident];
            assert(atr->mida == 0);
        }
        simbols[ident] = {.mida = 0, .tipus = t, .esPila = false};
    }
    void exitPushInst(ExamenParser::PushInstContext *ctx) {
        std::string ident = ctx->ID()->getText();
        Tipus t = tipus.get(ctx->expr());
        if (simbols.find(ident) != simbols.end()) {
            Atributs* atr = &simbols[ident];
            assert(atr->mida == 0 or atr->tipus == t);
            atr->tipus = t;
            atr->mida += 1;
        }
        else {
            simbols[ident] = {.mida = 1, .tipus = t, .esPila = true};
        }
    }
    void exitPopInst(ExamenParser::PopInstContext *ctx) {
        std::string ident = ctx->ID()->getText();
        assert(simbols.find(ident) != simbols.end());
        Atributs* atr = &simbols[ident];
        assert(atr->mida > 0);
        atr->mida -= 1;
    }
    
    void exitAddExpr(ExamenParser::AddExprContext *ctx) {
        Tipus t1 = tipus.get(ctx->expr(0));
        Tipus t2 = tipus.get(ctx->expr(1));
        assert(t1 == t2);
        tipus.put(ctx, t1);
    }
    void exitStackTopExpr(ExamenParser::StackTopExprContext *ctx) {
        std::string ident = ctx->ID()->getText();
        assert(simbols.find(ident) != simbols.end());
        Atributs atr = simbols[ident];
        assert(atr.mida > 0);
        tipus.put(ctx, atr.tipus);
    }
    void exitIdentExpr(ExamenParser::IdentExprContext *ctx) {
        std::string ident = ctx->ID()->getText();
        assert(simbols.find(ident) != simbols.end());
        Atributs atr = simbols[ident];
        assert(!atr.esPila);
        tipus.put(ctx, atr.tipus);
    }
    void exitStringExpr(ExamenParser::StringExprContext *ctx) {
        tipus.put(ctx, Tipus::StringType);
    }    
    void exitIntExpr(ExamenParser::IntExprContext *ctx) {
        tipus.put(ctx, Tipus::IntType);
    }
};


int main(int argc, const char* argv[]) {
  // check the correct use of the program
  if (argc != 2) {
    std::cout << "Usage: ./main <file>" << std::endl;
    return EXIT_FAILURE;
  }
  if (not std::fopen(argv[1], "r")) {
    std::cout << "No such file: " << argv[1] << std::endl;
    return EXIT_FAILURE;
  }

  // open input file and create a character stream
  std::ifstream stream;
  stream.open(argv[1]);
  antlr4::ANTLRInputStream input(stream);

  // create a lexer that consumes the character stream and produce a token stream
  ExamenLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  // create a parser that consumes the token stream, and parses it.
  ExamenParser parser(&tokens);

  // call the parser and get the parse tree
  antlr4::tree::ParseTree *tree = parser.program();

  // print the parse tree (for debugging purposes)
  std::cout << tree->toStringTree(&parser) << std::endl;

  antlr4::tree::ParseTreeWalker walker;

  Listener listener;
  walker.walk(&listener, tree);

  return EXIT_SUCCESS;
}
