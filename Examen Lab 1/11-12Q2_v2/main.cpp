
#include "antlr4-runtime.h"
#include "ExamenLexer.h"
#include "ExamenParser.h"
#include "ExamenBaseListener.h"
#include "tree/ParseTreeWalker.h"
#include "tree/ParseTreeProperty.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <map>
#include <cstdio>    // fopen

// using namespace std;
// using namespace antlr4;

class Listener : public ExamenBaseListener {
public:

    double p = 10.0;
    struct Atributs {
        double height;
        double depth;
        double width;

        Atributs() {
            height = 0;
            depth = 0;
            width = 0;
        }
    };
    Atributs getAttrib(char s) {
        Atributs aux;
        aux.depth = 0.0;
        if (s == 'q' or s == 'j' or s == 'g' or s == 'y') {
            aux.depth = 2.0;
        }
        aux.height = p;
        aux.width = p;
        return aux;
    }

    antlr4::tree::ParseTreeProperty<Atributs> atributsDecor;

    void exitIdentificador(ExamenParser::IdentificadorContext *ctx) {
        Atributs atr = atributsDecor.get(ctx->ident());
        for (auto subIndex : ctx->index()) {
            Atributs atrSubIndex = atributsDecor.get(subIndex);
            atr.width = atr.width + atrSubIndex.width*0.7;
            atr.height = std::max(atr.height, 0.7*atrSubIndex.height - 0.25*p);
            //std::cout << atr.depth << " " << atrSubIndex.depth << std::endl;
            atr.depth = std::max(atr.depth, 0.7*atrSubIndex.depth + 0.25*p);
        }
        atributsDecor.put(ctx, atr);
    }
    void exitIntIndex(ExamenParser::IntIndexContext *ctx) {
        std::string num = ctx->INT()->getText();
        Atributs atrib = getAttrib(num[0]);
        atributsDecor.put(ctx, atrib);
    }
    void exitIdentIndex(ExamenParser::IdentIndexContext *ctx) {
        Atributs atrib = atributsDecor.get(ctx->identificador());
        atributsDecor.put(ctx, atrib);
    }
    void exitIdent(ExamenParser::IdentContext *ctx) {
        std::string ident = ctx->ID()->getText();
        Atributs atrib;
        Atributs aux;
        for (auto s : ident) {
            aux = getAttrib(s);
            atrib.height = std::max(atrib.height, aux.height);
            atrib.depth = std::max(atrib.depth, aux.depth);
            atrib.width += aux.width;
        }
        atributsDecor.put(ctx, atrib);
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
  antlr4::tree::ParseTree *tree = parser.identificador();

  // print the parse tree (for debugging purposes)
  std::cout << tree->toStringTree(&parser) << std::endl;

  antlr4::tree::ParseTreeWalker walker;

  Listener listener;
  walker.walk(&listener, tree);
  
  Listener::Atributs result = listener.atributsDecor.get(tree);
  std::cout << result.height << " " << result.depth << " " <<
    result.width << std::endl;

  return EXIT_SUCCESS;
}
