
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

class SizeListener : public ExamenBaseListener {
public:

    antlr4::tree::ParseTreeProperty<int> sizes;
    std::map <std::string, int> variableSizes;

    void exitProgram(ExamenParser::ProgramContext *ctx) {
        for (auto entry : variableSizes) {
            std::cout << entry.first << ": " << entry.second << " bytes" << std::endl;
        }
    }
    void exitDeclaration(ExamenParser::DeclarationContext *ctx) {
        int size = sizes.get(ctx->type());
        for (auto ident: ctx->ID()) {
            variableSizes[ident->getText()] = size;
        }
    }
    void exitUnionType(ExamenParser::UnionTypeContext *ctx) {
        int size = 0;
        int aux;
        for (auto decl : ctx->declaration()) {
            aux = sizes.get(decl->type());
            if (aux > size) size = aux;
        }
        sizes.put(ctx, size);
    }
    void exitStructType(ExamenParser::StructTypeContext *ctx) {
        int size = 0;
        for (auto decl : ctx->declaration()) {
            size = size + sizes.get(decl->type()) * int(decl->ID().size());
        }
        sizes.put(ctx, size);
    }
    void exitBasicType(ExamenParser::BasicTypeContext *ctx) {
        int size = 0;
        if (ctx->POINTER() or ctx->typeDecl->getType() == ExamenParser::INT) {
            size = 4;
        }
        else if (ctx->typeDecl->getType() == ExamenParser::DOUBLE) {
                size = 8;       
        }     
        else size = 1;        
        sizes.put(ctx, size);
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

  SizeListener listener;
  walker.walk(&listener, tree);

  return EXIT_SUCCESS;
}
