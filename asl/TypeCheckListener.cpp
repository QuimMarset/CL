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

#include "TypeCheckListener.h"

#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

#include <iostream>
#include <algorithm>
#include <string>

// uncomment the following line to enable debugging messages with DEBUG*
// #define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
TypeCheckListener::TypeCheckListener(TypesMgr       & Types,
				     SymTable       & Symbols,
				     TreeDecoration & Decorations,
				     SemErrors      & Errors) :
  Types{Types},
  Symbols {Symbols},
  Decorations{Decorations},
  Errors{Errors} {
}

void TypeCheckListener::enterProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
}
void TypeCheckListener::exitProgram(AslParser::ProgramContext *ctx) {
    if (Symbols.noMainProperlyDeclared())
        Errors.noMainProperlyDeclared(ctx);
    Symbols.popScope();
    Errors.print();
    DEBUG_EXIT();
}

void TypeCheckListener::enterFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  // Symbols.print();
}
void TypeCheckListener::exitFunction(AslParser::FunctionContext *ctx) {
    Symbols.popScope();
    DEBUG_EXIT();
}

void TypeCheckListener::enterAssignStmt(AslParser::AssignStmtContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitAssignStmt(AslParser::AssignStmtContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr());
    if (not Types.isErrorTy(t1) and not Types.isErrorTy(t2) and
        not Types.copyableTypes(t1, t2)) {
        Errors.incompatibleAssignment(ctx->ASSIGN());
    }
    if (not Types.isErrorTy(t1) and not getIsLValueDecor(ctx->left_expr())) {
        Errors.nonReferenceableLeftExpr(ctx->left_expr());
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitIfStmt(AslParser::IfStmtContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    if (not Types.isErrorTy(t1) and not Types.isBooleanTy(t1)) {
        Errors.booleanRequired(ctx);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterWhileStmt(AslParser::WhileStmtContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitWhileStmt(AslParser::WhileStmtContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    if (not Types.isErrorTy(t1) and not Types.isBooleanTy(t1)) {
        Errors.booleanRequired(ctx);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterFunctionCall(AslParser::FunctionCallContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitFunctionCall(AslParser::FunctionCallContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
    if (not Types.isErrorTy(t1)) {
        if (not Types.isFunctionTy(t1)) {
            Errors.isNotCallable(ctx->ident());
        }
        else {
            unsigned int numParamsCall = ctx->expr().size();
            unsigned int numParams = Types.getNumOfParameters(t1);
            if (numParams != numParamsCall) {
                Errors.numberOfParameters(ctx);
            }
            TypesMgr::TypeId paramCallType;
            TypesMgr::TypeId paramRealType;
            unsigned int minSize = std::min(numParamsCall, numParams);
            for (unsigned int i = 0;i < minSize; ++i) {
                paramCallType = getTypeDecor(ctx->expr(i));
                paramRealType = Types.getParameterType(t1, i);
                if (not Types.isErrorTy(paramCallType) and not Types.copyableTypes(paramRealType, paramCallType)) {
                    Errors.incompatibleParameter(ctx->expr(i), i + 1, ctx);
                }
            }
        }
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterReturnInst(AslParser::ReturnInstContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitReturnInst(AslParser::ReturnInstContext *ctx) {
    TypesMgr::TypeId tFunc = Symbols.getCurrentFunctionTy();
    TypesMgr::TypeId tFuncRet = Types.getFuncReturnType(tFunc);
    bool expression = ctx->expr();
    TypesMgr::TypeId tRet = (expression)? getTypeDecor(ctx->expr()) :
        Types.createVoidTy();
    if (not Types.copyableTypes(tFuncRet, tRet)) {
        if (expression)
            Errors.incompatibleReturn(ctx->expr());
        else
            Errors.incompatibleReturn(ctx);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterReadStmt(AslParser::ReadStmtContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitReadStmt(AslParser::ReadStmtContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
    if ((not Types.isErrorTy(t1)) and (not Types.isPrimitiveTy(t1)) and
        (not Types.isFunctionTy(t1))) {
        Errors.readWriteRequireBasic(ctx);
    }
    if ((not Types.isErrorTy(t1)) and (not getIsLValueDecor(ctx->left_expr()))) {
        Errors.nonReferenceableExpression(ctx);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitWriteExpr(AslParser::WriteExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    if (not Types.isErrorTy(t1) and not Types.isPrimitiveTy(t1)) {
        Errors.readWriteRequireBasic(ctx);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitLeft_expr(AslParser::Left_exprContext *ctx) {
    putTypeDecor(ctx, getTypeDecor(ctx->ident_refer()));
    putIsLValueDecor(ctx, getIsLValueDecor(ctx->ident_refer()));
    DEBUG_EXIT();
}

void TypeCheckListener::enterUnaryExpr(AslParser::UnaryExprContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitUnaryExpr(AslParser::UnaryExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    bool opBool = (ctx->op->getType() == AslParser::NOT);
    if (not Types.isErrorTy(t1) and ( (opBool and not Types.isBooleanTy(t1))
        or (not opBool and not Types.isNumericTy(t1)) ) ) {
        Errors.incompatibleOperator(ctx->op);
    } 
    TypesMgr::TypeId t = (opBool)? Types.createBooleanTy() :
        Types.isFloatTy(t1)? Types.createFloatTy() : Types.createIntegerTy();
    putTypeDecor(ctx, t);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    if ((not Types.isErrorTy(t1) and not Types.isNumericTy(t1)) or
        (not Types.isErrorTy(t2) and not Types.isNumericTy(t2))) {
            Errors.incompatibleOperator(ctx->op);
    }
    TypesMgr::TypeId t = Types.createIntegerTy();
    if (Types.isFloatTy(t1) or Types.isFloatTy(t2)) {
        if (ctx->op->getType() == AslParser::MOD) {
            Errors.incompatibleOperator(ctx->op);
        }
        else {
            t = Types.createFloatTy();
        }
    }
    putTypeDecor(ctx, t);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterRelationalExpr(AslParser::RelationalExprContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitRelationalExpr(AslParser::RelationalExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    std::string oper = ctx->op->getText();
    if (not Types.isErrorTy(t1) and not Types.isErrorTy(t2) and
        not Types.comparableTypes(t1, t2, oper))
        Errors.incompatibleOperator(ctx->op);
    TypesMgr::TypeId t = Types.createBooleanTy();
    putTypeDecor(ctx, t);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterBooleanExpr(AslParser::BooleanExprContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitBooleanExpr(AslParser::BooleanExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    if ((not Types.isErrorTy(t1) and not Types.isBooleanTy(t1)) or
        (not Types.isErrorTy(t2) and not Types.isBooleanTy(t2))) {
        Errors.incompatibleOperator(ctx->op);
    }
    TypesMgr::TypeId t = Types.createBooleanTy();
    putTypeDecor(ctx, t);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterSubExpr(AslParser::SubExprContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitSubExpr(AslParser::SubExprContext *ctx) {
    putTypeDecor(ctx, getTypeDecor(ctx->expr()));
    putIsLValueDecor(ctx, getIsLValueDecor(ctx->expr()));
    DEBUG_EXIT();
}

void TypeCheckListener::enterValueExpr(AslParser::ValueExprContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitValueExpr(AslParser::ValueExprContext *ctx) {
    putTypeDecor(ctx, getTypeDecor(ctx->value()));
    putIsLValueDecor(ctx, getIsLValueDecor(ctx->value()));
    DEBUG_EXIT();
}

void TypeCheckListener::enterFunctionCallExpr(AslParser::FunctionCallExprContext *ctx) {
  DEBUG_ENTER();
}
void TypeCheckListener::exitFunctionCallExpr(AslParser::FunctionCallExprContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->functionCall()->ident());
    TypesMgr::TypeId t2 = Types.createErrorTy();
    bool isFunction = not Types.isErrorTy(t1) and Types.isFunctionTy(t1);
    if (isFunction and Types.isVoidFunction(t1)) {
        Errors.isNotFunction(ctx);
    }
    else if (isFunction) {
        t2 = Types.getFuncReturnType(t1);
    }
    putTypeDecor(ctx, t2);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterIdentExpr(AslParser::IdentExprContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitIdentExpr(AslParser::IdentExprContext *ctx) {
    putTypeDecor(ctx, getTypeDecor(ctx->ident_refer()));
    putIsLValueDecor(ctx, getIsLValueDecor(ctx->ident_refer()));
    DEBUG_EXIT();
}

void TypeCheckListener::enterIdent_refer(AslParser::Ident_referContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitIdent_refer(AslParser::Ident_referContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
    if (ctx->expr()) {
        if (not Types.isErrorTy(t1) and not Types.isArrayTy(t1)) {
            Errors.nonArrayInArrayAccess(ctx);
            t1 = Types.createErrorTy();
        }
        else if (not Types.isErrorTy(t1)) {
            t1 = Types.getArrayElemType(t1);
        }
        TypesMgr::TypeId tIndex = getTypeDecor(ctx->expr());
        if (not Types.isIntegerTy(tIndex)) {
            Errors.nonIntegerIndexInArrayAccess(ctx->expr());
        }
    }
    putTypeDecor(ctx, t1);
    bool b = getIsLValueDecor(ctx->ident());
    putIsLValueDecor(ctx, b);
    DEBUG_EXIT();
}

void TypeCheckListener::enterValue(AslParser::ValueContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitValue(AslParser::ValueContext *ctx) {
    TypesMgr::TypeId t;
    if (ctx->INTVAL()) {
        t = Types.createIntegerTy();
    }
    else if (ctx->FLOATVAL()) {
        t = Types.createFloatTy();
    }
    else if (ctx->CHARVAL()) {
        t = Types.createCharacterTy();
    }
    else { // boolean value
    t = Types.createBooleanTy();
    }
    putTypeDecor(ctx, t);
    putIsLValueDecor(ctx, false);
    DEBUG_EXIT();
}

void TypeCheckListener::enterIdent(AslParser::IdentContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitIdent(AslParser::IdentContext *ctx) {
    std::string ident = ctx->getText();
    if (Symbols.findInStack(ident) == -1) {
        Errors.undeclaredIdent(ctx->ID());
        TypesMgr::TypeId te = Types.createErrorTy();
        putTypeDecor(ctx, te);
        putIsLValueDecor(ctx, true);
    }
    else {
        TypesMgr::TypeId t1 = Symbols.getType(ident);
        putTypeDecor(ctx, t1);
        if (Symbols.isFunctionClass(ident))
            putIsLValueDecor(ctx, false);
        else
            putIsLValueDecor(ctx, true);
    }
    DEBUG_EXIT();
}

void TypeCheckListener::enterParams(AslParser::ParamsContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitParams(AslParser::ParamsContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterDeclarations(AslParser::DeclarationsContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitDeclarations(AslParser::DeclarationsContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterVariable_decl(AslParser::Variable_declContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitVariable_decl(AslParser::Variable_declContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterType(AslParser::TypeContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitType(AslParser::TypeContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterStatements(AslParser::StatementsContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitStatements(AslParser::StatementsContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterWriteString(AslParser::WriteStringContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitWriteString(AslParser::WriteStringContext *ctx) {
    DEBUG_EXIT();
}

void TypeCheckListener::enterArray(AslParser::ArrayContext *ctx) {
    DEBUG_ENTER();
}
void TypeCheckListener::exitArray(AslParser::ArrayContext *ctx) {
    DEBUG_EXIT();
}



// void TypeCheckListener::enterEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_ENTER();
// }
// void TypeCheckListener::exitEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_EXIT();
// }
// void TypeCheckListener::visitTerminal(antlr4::tree::TerminalNode *node) {
//   DEBUG("visitTerminal");
// }
// void TypeCheckListener::visitErrorNode(antlr4::tree::ErrorNode *node) {
// }


// Getters for the necessary tree node atributes:
//   Scope, Type ans IsLValue
SymTable::ScopeId TypeCheckListener::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId TypeCheckListener::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}
bool TypeCheckListener::getIsLValueDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getIsLValue(ctx);
}

// Setters for the necessary tree node attributes:
//   Scope, Type ans IsLValue
void TypeCheckListener::putScopeDecor(antlr4::ParserRuleContext *ctx, SymTable::ScopeId s) {
  Decorations.putScope(ctx, s);
}
void TypeCheckListener::putTypeDecor(antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t) {
  Decorations.putType(ctx, t);
}
void TypeCheckListener::putIsLValueDecor(antlr4::ParserRuleContext *ctx, bool b) {
  Decorations.putIsLValue(ctx, b);
}
