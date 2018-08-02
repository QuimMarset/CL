
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

    struct Atributs {
        double h;
        double w;
        double d;
        Atributs() {
            h = 0;
            w = 0;
            d = 0;
        }
        Atributs(double h, double w, double d) {
            this->h = h;
            this->w = w;
            this->d = d;
        }
    };

    Atributs getMides(char s, double p) {
        Atributs atr (p, p, 0);
        if (s == 'q' or s == 'p' or s == 'y' or s == 'g' or s == 'j') {
            atr.d = 2.0;
        }
        return atr;
    }

    antlr4::tree::ParseTreeProperty<double> midaLletra;
    antlr4::tree::ParseTreeProperty<Atributs> atributs;

    void enterIdentificador(ExamenParser::IdentificadorContext *ctx) {
        double p = midaLletra.get(ctx);
        midaLletra.put(ctx->ident(), p);
        for (auto index : ctx->index()) {
            midaLletra.put(index, 0.7*p);
        }
    }
    void exitIdentificador(ExamenParser::IdentificadorContext *ctx) {
        Atributs atr = atributs.get(ctx->ident());
        double p = midaLletra.get(ctx);
        for (auto index : ctx->index()) {
            Atributs atr2 = atributs.get(index);
            atr.w = atr.w + atr2.w;
            atr.h = std::max(atr.h, atr2.h - 0.25*p);
            atr.d = std::max(atr.d, atr2.d + 0.25*p);
        }
        atributs.put(ctx, atr);
    }
    void exitIntIndex(ExamenParser::IntIndexContext *ctx) {
        double p = midaLletra.get(ctx);
        std::string num = ctx->INT()->getText();
        Atributs atr = getMides(num[0], p);
        atributs.put(ctx, atr);
    }
    void enterIdentIndex(ExamenParser::IdentIndexContext *ctx) {
        midaLletra.put(ctx->identificador(), midaLletra.get(ctx));
    }
    void exitIdentIndex(ExamenParser::IdentIndexContext *ctx) {
        Atributs atr = atributs.get(ctx->identificador());
        atributs.put(ctx, atr);
    }
    void exitIdent(ExamenParser::IdentContext *ctx) {
        double p = midaLletra.get(ctx);
        std::string ident = ctx->ID()->getText();
        Atributs atr, atr2;
        for (auto s : ident) {
            atr2 = getMides(s, p);
            atr.w += atr2.w;
            atr.h = std::max(atr.h, atr2.h);
            atr.d = std::max(atr.d, atr2.d);
        }
        atributs.put(ctx, atr);
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
    listener.midaLletra.put(tree, 10.0);
    walker.walk(&listener, tree);

    Listener::Atributs result = listener.atributs.get(tree);
    std::cout << result.h << " " << result.d << " " <<
    result.w << std::endl;

    return EXIT_SUCCESS;
}
