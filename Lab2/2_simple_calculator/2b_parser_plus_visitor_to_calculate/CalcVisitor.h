
// Generated from Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcParser.
 */
class  CalcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcParser.
   */
    virtual antlrcpp::Any visitProg(CalcParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitAssign(CalcParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitProd(CalcParser::ProdContext *context) = 0;

    virtual antlrcpp::Any visitId(CalcParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitInt(CalcParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitPlus(CalcParser::PlusContext *context) = 0;


};

