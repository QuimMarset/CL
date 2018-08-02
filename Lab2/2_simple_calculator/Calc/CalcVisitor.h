
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

    virtual antlrcpp::Any visitPrintExprBool(CalcParser::PrintExprBoolContext *context) = 0;

    virtual antlrcpp::Any visitTernary(CalcParser::TernaryContext *context) = 0;

    virtual antlrcpp::Any visitWhile(CalcParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitIf(CalcParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitNegateExpr(CalcParser::NegateExprContext *context) = 0;

    virtual antlrcpp::Any visitPlusOrSub(CalcParser::PlusOrSubContext *context) = 0;

    virtual antlrcpp::Any visitId(CalcParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitProdOrDiv(CalcParser::ProdOrDivContext *context) = 0;

    virtual antlrcpp::Any visitSubExpr(CalcParser::SubExprContext *context) = 0;

    virtual antlrcpp::Any visitMaxFunction(CalcParser::MaxFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInt(CalcParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitNot(CalcParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitTermBool(CalcParser::TermBoolContext *context) = 0;

    virtual antlrcpp::Any visitOr(CalcParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitAnd(CalcParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitSubExprBool(CalcParser::SubExprBoolContext *context) = 0;


};

