
// Generated from Asl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "AslListener.h"


/**
 * This class provides an empty implementation of AslListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AslBaseListener : public AslListener {
public:

  virtual void enterProgram(AslParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(AslParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunction(AslParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(AslParser::FunctionContext * /*ctx*/) override { }

  virtual void enterParams(AslParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(AslParser::ParamsContext * /*ctx*/) override { }

  virtual void enterDeclarations(AslParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(AslParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterVariable_decl(AslParser::Variable_declContext * /*ctx*/) override { }
  virtual void exitVariable_decl(AslParser::Variable_declContext * /*ctx*/) override { }

  virtual void enterType(AslParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(AslParser::TypeContext * /*ctx*/) override { }

  virtual void enterBasicType(AslParser::BasicTypeContext * /*ctx*/) override { }
  virtual void exitBasicType(AslParser::BasicTypeContext * /*ctx*/) override { }

  virtual void enterArray(AslParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(AslParser::ArrayContext * /*ctx*/) override { }

  virtual void enterFunctionCall(AslParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(AslParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterStatements(AslParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(AslParser::StatementsContext * /*ctx*/) override { }

  virtual void enterReturnInst(AslParser::ReturnInstContext * /*ctx*/) override { }
  virtual void exitReturnInst(AslParser::ReturnInstContext * /*ctx*/) override { }

  virtual void enterAssignStmt(AslParser::AssignStmtContext * /*ctx*/) override { }
  virtual void exitAssignStmt(AslParser::AssignStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(AslParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(AslParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(AslParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(AslParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterRepeatStmt(AslParser::RepeatStmtContext * /*ctx*/) override { }
  virtual void exitRepeatStmt(AslParser::RepeatStmtContext * /*ctx*/) override { }

  virtual void enterFunctionCallStmt(AslParser::FunctionCallStmtContext * /*ctx*/) override { }
  virtual void exitFunctionCallStmt(AslParser::FunctionCallStmtContext * /*ctx*/) override { }

  virtual void enterReadStmt(AslParser::ReadStmtContext * /*ctx*/) override { }
  virtual void exitReadStmt(AslParser::ReadStmtContext * /*ctx*/) override { }

  virtual void enterWriteExpr(AslParser::WriteExprContext * /*ctx*/) override { }
  virtual void exitWriteExpr(AslParser::WriteExprContext * /*ctx*/) override { }

  virtual void enterWriteString(AslParser::WriteStringContext * /*ctx*/) override { }
  virtual void exitWriteString(AslParser::WriteStringContext * /*ctx*/) override { }

  virtual void enterReturnStmt(AslParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(AslParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterMultiAssignStmt(AslParser::MultiAssignStmtContext * /*ctx*/) override { }
  virtual void exitMultiAssignStmt(AslParser::MultiAssignStmtContext * /*ctx*/) override { }

  virtual void enterSwitchStmt(AslParser::SwitchStmtContext * /*ctx*/) override { }
  virtual void exitSwitchStmt(AslParser::SwitchStmtContext * /*ctx*/) override { }

  virtual void enterElseCond(AslParser::ElseCondContext * /*ctx*/) override { }
  virtual void exitElseCond(AslParser::ElseCondContext * /*ctx*/) override { }

  virtual void enterMulti_id(AslParser::Multi_idContext * /*ctx*/) override { }
  virtual void exitMulti_id(AslParser::Multi_idContext * /*ctx*/) override { }

  virtual void enterMulti_expr(AslParser::Multi_exprContext * /*ctx*/) override { }
  virtual void exitMulti_expr(AslParser::Multi_exprContext * /*ctx*/) override { }

  virtual void enterCaseVal(AslParser::CaseValContext * /*ctx*/) override { }
  virtual void exitCaseVal(AslParser::CaseValContext * /*ctx*/) override { }

  virtual void enterDefaultCase(AslParser::DefaultCaseContext * /*ctx*/) override { }
  virtual void exitDefaultCase(AslParser::DefaultCaseContext * /*ctx*/) override { }

  virtual void enterIdentExpr(AslParser::IdentExprContext * /*ctx*/) override { }
  virtual void exitIdentExpr(AslParser::IdentExprContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(AslParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(AslParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterValueExpr(AslParser::ValueExprContext * /*ctx*/) override { }
  virtual void exitValueExpr(AslParser::ValueExprContext * /*ctx*/) override { }

  virtual void enterPowerExpr(AslParser::PowerExprContext * /*ctx*/) override { }
  virtual void exitPowerExpr(AslParser::PowerExprContext * /*ctx*/) override { }

  virtual void enterBooleanExpr(AslParser::BooleanExprContext * /*ctx*/) override { }
  virtual void exitBooleanExpr(AslParser::BooleanExprContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpr(AslParser::FunctionCallExprContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpr(AslParser::FunctionCallExprContext * /*ctx*/) override { }

  virtual void enterArithmeticExpr(AslParser::ArithmeticExprContext * /*ctx*/) override { }
  virtual void exitArithmeticExpr(AslParser::ArithmeticExprContext * /*ctx*/) override { }

  virtual void enterSubExpr(AslParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(AslParser::SubExprContext * /*ctx*/) override { }

  virtual void enterRelationalExpr(AslParser::RelationalExprContext * /*ctx*/) override { }
  virtual void exitRelationalExpr(AslParser::RelationalExprContext * /*ctx*/) override { }

  virtual void enterValue(AslParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(AslParser::ValueContext * /*ctx*/) override { }

  virtual void enterLeft_expr(AslParser::Left_exprContext * /*ctx*/) override { }
  virtual void exitLeft_expr(AslParser::Left_exprContext * /*ctx*/) override { }

  virtual void enterIdent_refer(AslParser::Ident_referContext * /*ctx*/) override { }
  virtual void exitIdent_refer(AslParser::Ident_referContext * /*ctx*/) override { }

  virtual void enterIdent(AslParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(AslParser::IdentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

