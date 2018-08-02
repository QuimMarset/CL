
// Generated from Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual antlrcpp::Any visitProg(CalcParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(CalcParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExprBool(CalcParser::PrintExprBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernary(CalcParser::TernaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile(CalcParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(CalcParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegateExpr(CalcParser::NegateExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusOrSub(CalcParser::PlusOrSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(CalcParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProdOrDiv(CalcParser::ProdOrDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubExpr(CalcParser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMaxFunction(CalcParser::MaxFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(CalcParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(CalcParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTermBool(CalcParser::TermBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(CalcParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(CalcParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubExprBool(CalcParser::SubExprBoolContext *ctx) override {
    return visitChildren(ctx);
  }


};

