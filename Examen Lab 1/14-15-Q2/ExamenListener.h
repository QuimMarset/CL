
// Generated from Examen.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExamenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExamenParser.
 */
class  ExamenListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ExamenParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ExamenParser::ProgramContext *ctx) = 0;

  virtual void enterAssignInst(ExamenParser::AssignInstContext *ctx) = 0;
  virtual void exitAssignInst(ExamenParser::AssignInstContext *ctx) = 0;

  virtual void enterPushInst(ExamenParser::PushInstContext *ctx) = 0;
  virtual void exitPushInst(ExamenParser::PushInstContext *ctx) = 0;

  virtual void enterPopInst(ExamenParser::PopInstContext *ctx) = 0;
  virtual void exitPopInst(ExamenParser::PopInstContext *ctx) = 0;

  virtual void enterIdentExpr(ExamenParser::IdentExprContext *ctx) = 0;
  virtual void exitIdentExpr(ExamenParser::IdentExprContext *ctx) = 0;

  virtual void enterStringExpr(ExamenParser::StringExprContext *ctx) = 0;
  virtual void exitStringExpr(ExamenParser::StringExprContext *ctx) = 0;

  virtual void enterIntExpr(ExamenParser::IntExprContext *ctx) = 0;
  virtual void exitIntExpr(ExamenParser::IntExprContext *ctx) = 0;

  virtual void enterStackTopExpr(ExamenParser::StackTopExprContext *ctx) = 0;
  virtual void exitStackTopExpr(ExamenParser::StackTopExprContext *ctx) = 0;

  virtual void enterAddExpr(ExamenParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(ExamenParser::AddExprContext *ctx) = 0;


};

