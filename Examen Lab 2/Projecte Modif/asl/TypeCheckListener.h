//////////////////////////////////////////////////////////////////////
//
//    TypeCheckListener - Walk the parser tree to do the semantic
//                        typecheck for the Asl programming language
//
//    Copyright (C) 2018  Universitat Politecnica de Catalunya
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU General Public License
//    as published by the Free Software Foundation; either version 3
//    of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//    contact: José Miguel Rivero (rivero@cs.upc.edu)
//             Computer Science Department
//             Universitat Politecnica de Catalunya
//             despatx Omega.110 - Campus Nord UPC
//             08034 Barcelona.  SPAIN
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include "antlr4-runtime.h"
#include "AslBaseListener.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

// using namespace std;


//////////////////////////////////////////////////////////////////////
// Class TypeCheckListener: derived from AslBaseListener.
// The tree walker go through the parser tree and call the methods of
// this listener to do the semantic typecheck of the program. This is
// done once the SymbolsListener has finish and all the symbols of the
// program has been added to their respective scope. If an enter/exit
// method does not have an associated task, it does not have to be
// redefined.

class TypeCheckListener final : public AslBaseListener {

public:

  // Constructor
  TypeCheckListener(TypesMgr       & Types,
		    SymTable       & Symbols,
		    TreeDecoration & Decorations,
		    SemErrors      & Errors);

  void enterProgram(AslParser::ProgramContext *ctx);
  void exitProgram(AslParser::ProgramContext *ctx);

  void enterFunction(AslParser::FunctionContext *ctx);
  void exitFunction(AslParser::FunctionContext *ctx);

  void enterParams(AslParser::ParamsContext *ctx);
  void exitParams(AslParser::ParamsContext *ctx);

  void enterReturnInst(AslParser::ReturnInstContext *ctx);
  void exitReturnInst(AslParser::ReturnInstContext *ctx);

  void enterDeclarations(AslParser::DeclarationsContext *ctx);
  void exitDeclarations(AslParser::DeclarationsContext *ctx);

  void enterVariable_decl(AslParser::Variable_declContext *ctx);
  void exitVariable_decl(AslParser::Variable_declContext *ctx);

  void enterType(AslParser::TypeContext *ctx);
  void exitType(AslParser::TypeContext *ctx);

  void enterStatements(AslParser::StatementsContext *ctx);
  void exitStatements(AslParser::StatementsContext *ctx);

  void enterAssignStmt(AslParser::AssignStmtContext *ctx);
  void exitAssignStmt(AslParser::AssignStmtContext *ctx);

  void enterIfStmt(AslParser::IfStmtContext *ctx);
  void exitIfStmt(AslParser::IfStmtContext *ctx);

  void enterWhileStmt(AslParser::WhileStmtContext *ctx);
  void exitWhileStmt(AslParser::WhileStmtContext *ctx);

  void enterFunctionCall(AslParser::FunctionCallContext *ctx);
  void exitFunctionCall(AslParser::FunctionCallContext *ctx);

  void enterReadStmt(AslParser::ReadStmtContext *ctx);
  void exitReadStmt(AslParser::ReadStmtContext *ctx);

  void enterWriteExpr(AslParser::WriteExprContext *ctx);
  void exitWriteExpr(AslParser::WriteExprContext *ctx);

  void enterWriteString(AslParser::WriteStringContext *ctx);
  void exitWriteString(AslParser::WriteStringContext *ctx);

  void enterLeft_expr(AslParser::Left_exprContext *ctx);
  void exitLeft_expr(AslParser::Left_exprContext *ctx);

  void enterIdent_refer(AslParser::Ident_referContext *ctx);
  void exitIdent_refer(AslParser::Ident_referContext *ctx);

  void enterArithmeticExpr(AslParser::ArithmeticExprContext *ctx);
  void exitArithmeticExpr(AslParser::ArithmeticExprContext *ctx);

  void enterRelationalExpr(AslParser::RelationalExprContext *ctx);
  void exitRelationalExpr(AslParser::RelationalExprContext *ctx);

  void enterUnaryExpr(AslParser::UnaryExprContext *ctx);
  void exitUnaryExpr(AslParser::UnaryExprContext *ctx);

  void enterBooleanExpr(AslParser::BooleanExprContext *ctx);
  void exitBooleanExpr(AslParser::BooleanExprContext *ctx);

  void enterValueExpr(AslParser::ValueExprContext *ctx);
  void exitValueExpr(AslParser::ValueExprContext *ctx);

  void enterSubExpr(AslParser::SubExprContext *ctx);
  void exitSubExpr(AslParser::SubExprContext *ctx);

  void enterFunctionCallExpr(AslParser::FunctionCallExprContext *ctx);
  void exitFunctionCallExpr(AslParser::FunctionCallExprContext *ctx);

  void enterIdentExpr(AslParser::IdentExprContext *ctx);
  void exitIdentExpr(AslParser::IdentExprContext *ctx);

  void enterValue(AslParser::ValueContext *ctx);
  void exitValue(AslParser::ValueContext *ctx);

  void enterIdent(AslParser::IdentContext *ctx);
  void exitIdent(AslParser::IdentContext *ctx);

  void enterArray(AslParser::ArrayContext *ctx);
  void exitArray(AslParser::ArrayContext *ctx);




  void enterRepeatStmt(AslParser::RepeatStmtContext *ctx);
  void exitRepeatStmt(AslParser::RepeatStmtContext *ctx);

  void enterMultiAssignStmt(AslParser::MultiAssignStmtContext *ctx);
  void exitMultiAssignStmt(AslParser::MultiAssignStmtContext *ctx);

  void enterPowerExpr(AslParser::PowerExprContext *ctx);
  void exitPowerExpr(AslParser::PowerExprContext *ctx);

  void enterSwitchStmt(AslParser::SwitchStmtContext *ctx);
  void exitSwitchStmt(AslParser::SwitchStmtContext *ctx);

  // void enterEveryRule(antlr4::ParserRuleContext *ctx);
  // void exitEveryRule(antlr4::ParserRuleContext *ctx);
  // void visitTerminal(antlr4::tree::TerminalNode *node);
  // void visitErrorNode(antlr4::tree::ErrorNode *node);

private:

  // Attributes
  TypesMgr       & Types;
  SymTable       & Symbols;
  TreeDecoration & Decorations;
  SemErrors      & Errors;

  // Getters for the necessary tree node atributes:
  //   Scope, Type ans IsLValue
  SymTable::ScopeId getScopeDecor    (antlr4::ParserRuleContext *ctx);
  TypesMgr::TypeId  getTypeDecor     (antlr4::ParserRuleContext *ctx);
  bool              getIsLValueDecor (antlr4::ParserRuleContext *ctx);

  // Setters for the necessary tree node attributes:
  //   Scope, Type ans IsLValue
  void putScopeDecor    (antlr4::ParserRuleContext *ctx, SymTable::ScopeId s);
  void putTypeDecor     (antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t);
  void putIsLValueDecor (antlr4::ParserRuleContext *ctx, bool b);

};  // class TypeCheckListener
