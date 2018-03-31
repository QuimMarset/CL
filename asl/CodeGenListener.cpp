//////////////////////////////////////////////////////////////////////
//
//    CodeGenListener - Walk the parser tree to do
//                             the generation of code
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

#include "CodeGenListener.h"

#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/code.h"

#include <cstddef>    // std::size_t

// uncomment the following line to enable debugging messages with DEBUG*
// #define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
CodeGenListener::CodeGenListener(TypesMgr       & Types,
				 SymTable       & Symbols,
				 TreeDecoration & Decorations,
				 code           & Code) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations},
  Code{Code} {
}

void CodeGenListener::enterProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
}
void CodeGenListener::exitProgram(AslParser::ProgramContext *ctx) {
  Symbols.popScope();
  DEBUG_EXIT();
}

void CodeGenListener::enterFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  subroutine subr(ctx->ID()->getText());
  Code.add_subroutine(subr);
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  codeCounters.reset();
}
void CodeGenListener::exitFunction(AslParser::FunctionContext *ctx) {
  subroutine & subrRef = Code.get_last_subroutine();
  instructionList code = getCodeDecor(ctx->statements());
  code = code || instruction::RETURN();
  subrRef.set_instructions(code);
  Symbols.popScope();
  DEBUG_EXIT();
}

void CodeGenListener::enterParams(AslParser::ParamsContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitParams(AslParser::ParamsContext *ctx) {
    subroutine & subr = Code.get_last_subroutine();
    for (unsigned int i = 0; i < ctx->ID().size(); ++i) {
        subr.add_param(ctx->ID(i).getText());
    }
    DEBUG_EXIT();
}

void CodeGenListener::enterDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterVariable_decl(AslParser::Variable_declContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitVariable_decl(AslParser::Variable_declContext *ctx) {
    subroutine & subrRef = Code.get_last_subroutine();
    TypesMgr::TypeId t1 = getTypeDecor(ctx->type());
    std::size_t size = Types.getSizeOfType(t1);
    for (unsigned int i = 0;i < ctx->ID().size(); ++i) {
        subrRef.add_var(ctx-ID(i)->getText(), size);
    }
    DEBUG_EXIT();
}

void CodeGenListener::enterType(AslParser::TypeContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitType(AslParser::TypeContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterStatements(AslParser::StatementsContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitStatements(AslParser::StatementsContext *ctx) {
  instructionList code;
  for (auto stCtx : ctx->statement()) {
    code = code || getCodeDecor(stCtx);
  }
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

//TODO: return vs return a la de la funció
void CodeGenListener::enterReturnInst(AslParser::ReturnInstContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitReturnInst(AslParser::ReturnInstContext *ctx) {
    DEBUG_EXIT();
}

void CodeGenListener::enterAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitAssignStmt(AslParser::AssignStmtContext *ctx) {
  instructionList  code;
  std::string     addr1 = getAddrDecor(ctx->left_expr());
  // std::string     offs1 = getOffsetDecor(ctx->left_expr());
  instructionList code1 = getCodeDecor(ctx->left_expr());
  // TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());
  std::string     addr2 = getAddrDecor(ctx->expr());
  // std::string     offs2 = getOffsetDecor(ctx->expr());
  instructionList code2 = getCodeDecor(ctx->expr());
  // TypesMgr::TypeId tid2 = getTypeDecor(ctx->expr());
  code = code1 || code2 || instruction::LOAD(addr1, addr2);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIfStmt(AslParser::IfStmtContext *ctx) {
    instructionList   code;
    std::string      addrBoolCond = getAddrDecor(ctx->expr());
    instructionList  codeBoolCond = getCodeDecor(ctx->expr());
    instructionList  codeIf = getCodeDecor(ctx->statements());
    std::string      label = codeCounters.newLabelIF();
    std::string labelEndIf = "endif" + label;
    if (ctx->elseCond()) {
        std::string labelElse = "else" + label;
        instructionList codeElse = getCodeDecor(ctx->elseCond());
        code = codeBoolCond || instruction::FJUMP(addrBoolCond, labelElse) 
            || codeIF || instruction::UJUMP(labelEndIf) ||
            instruction::LABEL(labelElse) || codeElse ||
            instruction::LABEL(labelEndIf); 
    }
    else {
        code = codeBoolCond || instruction::FJUMP(addrBoolCond, labelEndIf)
        || codeIf || instruction::LABEL(labelEndIf);
    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterWhileStmt(AslParser::WhileStmtContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitWhileStmt(AslParser::WhileStmtContext *ctx) {
    instructionList   code;
    std::string      addr1 = getAddrDecor(ctx->expr());
    instructionList  code1 = getCodeDecor(ctx->expr());
    instructionList  code2 = getCodeDecor(ctx->statements());
    std::string label = codeCounters.newLabelWHILE();
    std::string labelEndWhile = "endwhile" + label;
    code = instruction::LABEL(labelWhle) || code1 || 
            instruction::FJUMP(addr1, labelEndWhile) ||
            || code2 || instruction::UJUMP(labelWhile) || 
            instruction::LABEL(labelEndWhile);
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterFunctonCall(AslParser::FunctionCallContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitFunctionCall(AslParser::FunctionCallContext *ctx) {
  instructionList code;
  // std::string name = ctx->ident()->ID()->getSymbol()->getText();
  std::string name = ctx->ident()->getText();
  code = instruction::CALL(name);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterProcCall(AslParser::ProcCallContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitProcCall(AslParser::ProcCallContext *ctx) {
    putCodeDecor(ctx, getCodeDecor(ctx->functionCall()));
    DEBUG_EXIT();
}

void CodeGenListener::enterReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitReadStmt(AslParser::ReadStmtContext *ctx) {
  instructionList  code;
  std::string     addr1 = getAddrDecor(ctx->left_expr());
  // std::string     offs1 = getOffsetDecor(ctx->left_expr());
  instructionList code1 = getCodeDecor(ctx->left_expr());
  // TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
  if (Types.isIntegerTy(t1)) {
      code = code1 || instruction::READI(addr1);
  }
  else if (Types.isFloatTy(t1)) {
      code = code1 || instruction::READF(addr1);
  }
  else if (Types.isCharacterTy(t1)) {
      code = code1 || instruction::READC(addr1);
  }
  else { //boolean type //TODO: Boolean

  }
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}
//TODO: char \n \t ...
void CodeGenListener::enterWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitWriteExpr(AslParser::WriteExprContext *ctx) {
    instructionList code;
    std::string     addr1 = getAddrDecor(ctx->expr());
    // std::string     offs1 = getOffsetDecor(ctx->expr());
    instructionList code1 = getCodeDecor(ctx->expr());
    // TypesMgr::TypeId tid1 = getTypeDecor(ctx->expr());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    if (Types.isIntegerTy(t1)) {
        code = code1 || instruction::WRITEI(addr1);
    }
    else if (Types.isFloatTy(t1)) {
        code = code1 || instruction::WRITEF(addr1);
    }
    else if (Types.isCharacterTy(t1)) {
        if (ctx->expr()->getText() == '\n') {
            code = code1 || instruction::WRITELN();
        }
        else {
            code = code1 || instruction::WRITEC(addr1);
        }
    }
    else { //boolean type //TODO: Boolean

    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterWriteString(AslParser::WriteStringContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitWriteString(AslParser::WriteStringContext *ctx) {
  instructionList code;
  std::string s = ctx->STRING()->getText();
  std::string temp = "%"+codeCounters.newTEMP();
  int i = 1;
  while (i < int(s.size())-1) {
    if (s[i] != '\\') {
      code = code ||
	     instruction::CHLOAD(temp, s.substr(i,1)) ||
	     instruction::WRITEC(temp);
      i += 1;
    }
    else {
      assert(i < int(s.size())-2);
      if (s[i+1] == 'n') {
        code = code || instruction::WRITELN();
        i += 2;
      }
      else if (s[i+1] == 't' or s[i+1] == '"' or s[i+1] == '\\') {
        code = code ||
               instruction::CHLOAD(temp, s.substr(i,2)) ||
	       instruction::WRITEC(temp);
        i += 2;
      }
      else {
        code = code ||
               instruction::CHLOAD(temp, s.substr(i,1)) ||
	       instruction::WRITEC(temp);
        i += 1;
      }
    }
  }
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitLeft_expr(AslParser::Left_exprContext *ctx) {
  putAddrDecor(ctx, getAddrDecor(ctx->ident_refer()));
  putOffsetDecor(ctx, getOffsetDecor(ctx->ident_refer()));
  putCodeDecor(ctx, getCodeDecor(ctx->ident_refer()));
  DEBUG_EXIT();
}
//TODO: float
void CodeGenListener::enterUnaryArithmeticExpr(AslParser::UnaryArithmeticExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::enterUnaryArithmeticExpr(AslParser::UnaryArithmeticExprContext *ctx) {
    std::String adddr1 = getAddrDecor(ctx->expr());
    instructionList code = getCodeDecor(ctx->expr());
    if (ctx->MINUS()) {
        code = code || instruction::NEG(addr1, addr1);
    }
    putAddrDecor(ctx, addr1);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
  DEBUG_ENTER();
}
//TODO: float
void CodeGenListener::exitArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->expr(0));
    instructionList code1 = getCodeDecor(ctx->expr(0));
    std::string     addr2 = getAddrDecor(ctx->expr(1));
    instructionList code2 = getCodeDecor(ctx->expr(1));
    instructionList code  = code1 || code2;
    // TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    // TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    // TypesMgr::TypeId t  = getTypeDecor(ctx);
    std::string temp = "%"+codeCounters.newTEMP();
    if (ctx->MUL()) {
        code = code || instruction::MUL(temp, addr1, addr2);
    }
    else if (ctx->DIV()) {
        code = code || instruction::DIV(temp, addr1, addr2);
    }
    else if (ctx->PLUS()) {
        code = code || instruction::ADD(temp, addr1, addr2);
    }
    else { // (ctx->MINUS()) 
        code = code || instruction::SUB(temp, addr1, addr2);
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterRelationalExpr(AslParser::RelationalExprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitRelationalExpr(AslParser::RelationalExprContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->expr(0));
    instructionList code1 = getCodeDecor(ctx->expr(0));
    std::string     addr2 = getAddrDecor(ctx->expr(1));
    instructionList code2 = getCodeDecor(ctx->expr(1));
    instructionList code  = code1 || code2;
    // TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    // TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    // TypesMgr::TypeId t  = getTypeDecor(ctx);
    std::string temp = "%"+codeCounters.newTEMP();
    if (ctx->EQ()) {
        code = code || instruction::EQ(temp, addr1, addr2);
    }
    else if (ctx->NEQ()) {
        std::string temp2 ="%" + codeCounters.newTEMP();
        code = code || instruction::EQ(temp2, addr1, addr2) ||
               instruction::NOT(temp, temp2);
    }
    else if (ctx->GT()) {
        code = code || instruction::EQ(temp, addr2, addr1);
    }
    else if (ctx->LT()) {
        code = code || instruction::LT(temp, addr1, addr2);
    }
    else if (ctx->GET()) {
        code = code || instruction::EQ(temp, addr2, addr1);
    }
    else { //(ctx->LET())
        code = code || instruction::LE(temp, addr1, addr2);
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterUnaryBooleanExpr(AslParser::UnaryBooleanExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitUnaryBooleanExpr(AslParser::UnaryBooleanExprContext *ctx) {
    std::string addr1 = getAddrDecor(ctx->expr());
    instructionList code1 = getCodeDecor(ctx->expr());
    std::string temp = "%" + codeCounters.newTEMP();
    code1 = code1 || instruction::NOT(temp, addr1);
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code1);
    DEBUG_EXIT();
}

void CodeGenListener::enterBooleanExpr(AslParser::BooleanExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitBooleanExpr(AslParser::BooleanExprContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->expr(0));
    instructionList code1 = getCodeDecor(ctx->expr(0));
    std::string     addr2 = getAddrDecor(ctx->expr(1));
    instructionList code2 = getCodeDecor(ctx->expr(1));
    instructionList code  = code1 || code2;
    std::string temp = "%"+codeCounters.newTEMP();
    if (ctx->AND()) {
        code = code || instruction::AND(temp, addr1, addr2);
    }
    else { //(ctx->OR())
        code = code || instruction::OR(temp, addr1, addr2);
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterSubExpr() {
    DEBUG_ENTER();
}
void CodeGenListener::exitSubExpr() {
    putAddrDecor(ctx, getAddrDecor(ctx->expr()));
    putOffsetDecor(ctx, getOffsetDecor(ctx->expr()));
    putCodeDecor(ctx, getCodeDecor(ctx->expr()));
    DEBUG_EXIT();
}
//TODO: boolean
void CodeGenListener::enterValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitValue(AslParser::ValueContext *ctx) {
    instructionList code;
    std::string temp = "%"+codeCounters.newTEMP();
    if (ctx->INTVAL()) {
        code = instruction::ILOAD(temp, ctx->getText());
    }
    else if (ctx->FLOATVAL()) {
        code = instruction::FLOAD(temp, ctx->getText());
    }
    else if (ctx->BOOLVAL()) {
        std::string val = (ctx->getText == "true")? "1" : "0";
        code = instruction::ILOAD(temp, val); 
    }
    else { //(ctx->CHARVAL())
        code = instruction::CHLOAD(temp, ctx->getText());
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterProcCallExpr() {
    DEBUG_ENTER();
}
void CodeGenListener::exitProcCallExpr() {
    putCodeDecor(ctx, getCodeDecor(ctx->functionCall()));
    DEBUG_EXIT();
}

void CodeGenListener::enterIdentExpr(AslParser::IdentExprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIdentExpr(AslParser::IdentExprContext *ctx) {
  putAddrDecor(ctx, getAddrDecor(ctx->ident_refer()));
  putOffsetDecor(ctx, getOffsetDecor(ctx->ident_refer()));
  putCodeDecor(ctx, getCodeDecor(ctx->ident_refer()));
  DEBUG_EXIT();
}
void CodeGenListener::enterIdent_refer(AslParser::Ident_referContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitIdent_refer(AslParser::Ident_referContext *ctx) {
    std::string addr = getAddrDecor(ctx->ident());
    instructionList code = instructionList();
    if (ctx->expr()) {
        std::string addrIndex = getAddrDecor(ctx->expr());
        instructionList codeIndex = getCodeDecor(ctx->expr());
        code = code || codeIndex || 
                instruction::XLOAD(addr, addr, addrIndex);
    }
    putAddrDecor(ctx, addr);
    putCodeDecor(ctx, code);
    putOffsetDecor(ctx, "");
    DEBUG_EXIT();
}

void CodeGenListener::enterIdent(AslParser::IdentContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIdent(AslParser::IdentContext *ctx) {
  putAddrDecor(ctx, ctx->ID()->getText());
  putOffsetDecor(ctx, "");
  putCodeDecor(ctx, instructionList());
  DEBUG_EXIT();
}

// void CodeGenListener::enterEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_ENTER();
// }
// void CodeGenListener::exitEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_EXIT();
// }
// void CodeGenListener::visitTerminal(antlr4::tree::TerminalNode *node) {
//   DEBUG(">>> visit " << node->getSymbol()->getLine() << ":" << node->getSymbol()->getCharPositionInLine() << " CodeGen TerminalNode");
// }
// void CodeGenListener::visitErrorNode(antlr4::tree::ErrorNode *node) {
// }


// Getters for the necessary tree node atributes:
//   Scope, Type, Addr, Offset and Code
SymTable::ScopeId CodeGenListener::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId CodeGenListener::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}
std::string CodeGenListener::getAddrDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getAddr(ctx);
}
std::string  CodeGenListener::getOffsetDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getOffset(ctx);
}
instructionList CodeGenListener::getCodeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getCode(ctx);
}

// Setters for the necessary tree node attributes:
//   Addr, Offset and Code
void CodeGenListener::putAddrDecor(antlr4::ParserRuleContext *ctx, const std::string & a) {
  Decorations.putAddr(ctx, a);
}
void CodeGenListener::putOffsetDecor(antlr4::ParserRuleContext *ctx, const std::string & o) {
  Decorations.putOffset(ctx, o);
}
void CodeGenListener::putCodeDecor(antlr4::ParserRuleContext *ctx, const instructionList & c) {
  Decorations.putCode(ctx, c);
}
