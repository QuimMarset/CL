
// Generated from Asl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "AslParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AslParser.
 */
class  AslListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(AslParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(AslParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(AslParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(AslParser::FunctionContext *ctx) = 0;

  virtual void enterParams(AslParser::ParamsContext *ctx) = 0;
  virtual void exitParams(AslParser::ParamsContext *ctx) = 0;

  virtual void enterDeclarations(AslParser::DeclarationsContext *ctx) = 0;
  virtual void exitDeclarations(AslParser::DeclarationsContext *ctx) = 0;

  virtual void enterVariable_decl(AslParser::Variable_declContext *ctx) = 0;
  virtual void exitVariable_decl(AslParser::Variable_declContext *ctx) = 0;

  virtual void enterType(AslParser::TypeContext *ctx) = 0;
  virtual void exitType(AslParser::TypeContext *ctx) = 0;

  virtual void enterFunctionCall(AslParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(AslParser::FunctionCallContext *ctx) = 0;

  virtual void enterStatements(AslParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(AslParser::StatementsContext *ctx) = 0;

  virtual void enterAssignStmt(AslParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(AslParser::AssignStmtContext *ctx) = 0;

  virtual void enterIfStmt(AslParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(AslParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(AslParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(AslParser::WhileStmtContext *ctx) = 0;

  virtual void enterProcCall(AslParser::ProcCallContext *ctx) = 0;
  virtual void exitProcCall(AslParser::ProcCallContext *ctx) = 0;

  virtual void enterReadStmt(AslParser::ReadStmtContext *ctx) = 0;
  virtual void exitReadStmt(AslParser::ReadStmtContext *ctx) = 0;

  virtual void enterWriteExpr(AslParser::WriteExprContext *ctx) = 0;
  virtual void exitWriteExpr(AslParser::WriteExprContext *ctx) = 0;

  virtual void enterWriteString(AslParser::WriteStringContext *ctx) = 0;
  virtual void exitWriteString(AslParser::WriteStringContext *ctx) = 0;

  virtual void enterReturnStmt(AslParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(AslParser::ReturnStmtContext *ctx) = 0;

  virtual void enterIdentExpr(AslParser::IdentExprContext *ctx) = 0;
  virtual void exitIdentExpr(AslParser::IdentExprContext *ctx) = 0;

  virtual void enterUnaryArithmeticExpr(AslParser::UnaryArithmeticExprContext *ctx) = 0;
  virtual void exitUnaryArithmeticExpr(AslParser::UnaryArithmeticExprContext *ctx) = 0;

  virtual void enterUnaryBooleanExpr(AslParser::UnaryBooleanExprContext *ctx) = 0;
  virtual void exitUnaryBooleanExpr(AslParser::UnaryBooleanExprContext *ctx) = 0;

  virtual void enterProcCallExpr(AslParser::ProcCallExprContext *ctx) = 0;
  virtual void exitProcCallExpr(AslParser::ProcCallExprContext *ctx) = 0;

  virtual void enterValueExpr(AslParser::ValueExprContext *ctx) = 0;
  virtual void exitValueExpr(AslParser::ValueExprContext *ctx) = 0;

  virtual void enterBooleanExpr(AslParser::BooleanExprContext *ctx) = 0;
  virtual void exitBooleanExpr(AslParser::BooleanExprContext *ctx) = 0;

  virtual void enterArithmeticExpr(AslParser::ArithmeticExprContext *ctx) = 0;
  virtual void exitArithmeticExpr(AslParser::ArithmeticExprContext *ctx) = 0;

  virtual void enterSubExpr(AslParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(AslParser::SubExprContext *ctx) = 0;

  virtual void enterRelationalExpr(AslParser::RelationalExprContext *ctx) = 0;
  virtual void exitRelationalExpr(AslParser::RelationalExprContext *ctx) = 0;

  virtual void enterValue(AslParser::ValueContext *ctx) = 0;
  virtual void exitValue(AslParser::ValueContext *ctx) = 0;

  virtual void enterLeft_expr(AslParser::Left_exprContext *ctx) = 0;
  virtual void exitLeft_expr(AslParser::Left_exprContext *ctx) = 0;

  virtual void enterIdent(AslParser::IdentContext *ctx) = 0;
  virtual void exitIdent(AslParser::IdentContext *ctx) = 0;

  virtual void enterArray(AslParser::ArrayContext *ctx) = 0;
  virtual void exitArray(AslParser::ArrayContext *ctx) = 0;


};

