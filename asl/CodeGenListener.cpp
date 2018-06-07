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
    TypesMgr::TypeId t1 = Symbols.getCurrentFunctionTy();

    if (Types.isVoidFunction(t1) and code.back().oper != instruction::Operation::_RETURN)  {
        code = code || instruction::RETURN();
    }
    else if (not Types.isVoidFunction(t1)) {
        code = code || getCodeDecor(ctx->returnInst());
    }
    subrRef.set_instructions(code);
    Symbols.popScope();
    DEBUG_EXIT();
}

void CodeGenListener::enterParams(AslParser::ParamsContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitParams(AslParser::ParamsContext *ctx) {
    subroutine & subr = Code.get_last_subroutine();
    TypesMgr::TypeId t1 = Symbols.getCurrentFunctionTy();
    if (not Types.isVoidFunction(t1)) {
        subr.add_param("_result");
    }
    for (auto paramID : ctx->ID()) {
        subr.add_param(paramID->getText());
    }
    DEBUG_EXIT();
}

void CodeGenListener::enterVariable_decl(AslParser::Variable_declContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitVariable_decl(AslParser::Variable_declContext *ctx) {
    subroutine & subrRef = Code.get_last_subroutine();
    TypesMgr::TypeId t1 = getTypeDecor(ctx->type());
    std::size_t size = Types.getSizeOfType(t1);
    for (auto var : ctx->ID()) {
        subrRef.add_var(var->getText(), size);
    }
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

void CodeGenListener::enterReturnInst(AslParser::ReturnInstContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitReturnInst(AslParser::ReturnInstContext *ctx) {
    instructionList code;
    if (ctx->expr()) {
        code = getCodeDecor(ctx->expr());
        std::string addr = getAddrDecor(ctx->expr());
        code = code || instruction::LOAD("_result", addr);
    }
    code = code || instruction::RETURN();
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterReturnStmt(AslParser::ReturnStmtContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitReturnStmt(AslParser::ReturnStmtContext *ctx) {
    putCodeDecor(ctx, getCodeDecor(ctx->returnInst()));
    DEBUG_EXIT();
}

void CodeGenListener::enterAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitAssignStmt(AslParser::AssignStmtContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->left_expr());
    std::string     offs1 = getOffsetDecor(ctx->left_expr());
    instructionList code1 = getCodeDecor(ctx->left_expr());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr()->ident_refer()->ident());

    std::string     addr2 = getAddrDecor(ctx->expr());
    std::string     offs2 = getOffsetDecor(ctx->expr());
    instructionList code2 = getCodeDecor(ctx->expr());

    instructionList  code = code2 || code1;
    if (Types.isArrayTy(t1)) {
        code = code || instruction::XLOAD(addr1, offs1, addr2);
    }
    else {
        code = code || instruction::LOAD(addr1, addr2);
    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIfStmt(AslParser::IfStmtContext *ctx) {
    instructionList code;
    std::string      addrBoolCond = getAddrDecor(ctx->expr());
    instructionList  codeBoolCond = getCodeDecor(ctx->expr());
    instructionList  codeIf = getCodeDecor(ctx->statements());
    std::string      label = codeCounters.newLabelIF();
    std::string labelEndIf = "endif" + label;
    if (ctx->elseCond()) {
        std::string labelElse = "else" + label;
        instructionList codeElse = getCodeDecor(ctx->elseCond());
        code = codeBoolCond || instruction::FJUMP(addrBoolCond, labelElse) 
            || codeIf || instruction::UJUMP(labelEndIf) ||
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

void CodeGenListener::enterElseCond(AslParser::ElseCondContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitElseCond(AslParser::ElseCondContext *ctx) {
    putCodeDecor(ctx, getCodeDecor(ctx->statements()));
    DEBUG_EXIT();
}

void CodeGenListener::enterWhileStmt(AslParser::WhileStmtContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitWhileStmt(AslParser::WhileStmtContext *ctx) {
    instructionList   code;
    std::string      addrBoolCond = getAddrDecor(ctx->expr());
    instructionList  codeBoolCond = getCodeDecor(ctx->expr());
    instructionList  codeWhile = getCodeDecor(ctx->statements());
    std::string baseLabel = codeCounters.newLabelWHILE();
    std::string labelEndWhile = "endwhile" + baseLabel;
    std::string labelWhile = "while" + baseLabel;
    code = instruction::LABEL(labelWhile) || codeBoolCond || 
            instruction::FJUMP(addrBoolCond, labelEndWhile) ||
            codeWhile || instruction::UJUMP(labelWhile) || 
            instruction::LABEL(labelEndWhile);
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterFunctionCall(AslParser::FunctionCallContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitFunctionCall(AslParser::FunctionCallContext *ctx) {
    instructionList code;
    std::string name = ctx->ident()->getText();
    std::string addr;
    TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
    if (not Types.isVoidFunction(t1)) {
        code = code || instruction::PUSH();
    }
    TypesMgr::TypeId t2;
    std::string addr2;
    for (unsigned int i = 0;i < ctx->expr().size(); ++i) {
        auto expr = ctx->expr(i);
        code = code || getCodeDecor(expr);
        addr = getAddrDecor(expr);
        t2 = getTypeDecor(expr);
        if (Types.isArrayTy(t2) or (Types.isIntegerTy(t2) and Types.isFloatTy(Types.getParameterType(t1, i)))) {
            addr2 = addr;
            addr = "%" + codeCounters.newTEMP();
            if (Types.isArrayTy(t2))    code = code || instruction::ALOAD(addr, addr2);
            else    code = code || instruction::FLOAT(addr, addr2);
        }
        code = code || instruction::PUSH(addr);
    }
    code = code || instruction::CALL(name);
    for (unsigned int i = 0; i < ctx->expr().size();++i) {
        code = code || instruction::POP();
    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterFunctionCallStmt(AslParser::FunctionCallStmtContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitFunctionCallStmt(AslParser::FunctionCallStmtContext *ctx) {
    TypesMgr::TypeId t1 = getTypeDecor(ctx->functionCall()->ident());
    instructionList code = getCodeDecor(ctx->functionCall());
    if (not Types.isVoidFunction(t1)) {
        code = code || instruction::POP();
    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitReadStmt(AslParser::ReadStmtContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->left_expr());
    std::string     offs1 = getOffsetDecor(ctx->left_expr());
    instructionList code1 = getCodeDecor(ctx->left_expr());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
    TypesMgr::TypeId t2 = getTypeDecor(ctx->left_expr()->ident_refer()->ident());
    instructionList  code = code1;
    std::string addr2 = addr1;
    bool isArray = false;
    if (Types.isArrayTy(t2)) {
        isArray = true;
        addr2 = "%" + codeCounters.newTEMP();
    }
    if (Types.isIntegerTy(t1) or Types.isBooleanTy(t1)) {
        code = code || instruction::READI(addr2);
    }
    else if (Types.isFloatTy(t1)) {
        code = code || instruction::READF(addr2);
    }
    else if (Types.isCharacterTy(t1)) {
        code = code || instruction::READC(addr2);
    }
    if (isArray) {
        code = code || instruction::XLOAD(addr1, offs1, addr2);
    }
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterWriteExpr(AslParser::WriteExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitWriteExpr(AslParser::WriteExprContext *ctx) {
    std::string addr1 = getAddrDecor(ctx->expr());
    instructionList code1 = getCodeDecor(ctx->expr());
    std::string offs1 = getOffsetDecor(ctx->expr());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    instructionList  code = code1;
    if (Types.isIntegerTy(t1) or Types.isBooleanTy(t1)) {
        code = code || instruction::WRITEI(addr1);
    }
    else if (Types.isFloatTy(t1)) {
        code = code || instruction::WRITEF(addr1);
    }
    else if (Types.isCharacterTy(t1)) {
        if (ctx->expr()->getText() == "\'\\n\'") {
            code = code || instruction::WRITELN();
        }
        else {
            code = code || instruction::WRITEC(addr1);
        }
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

void CodeGenListener::enterUnaryExpr(AslParser::UnaryExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitUnaryExpr(AslParser::UnaryExprContext *ctx) {
    std::string addr1 = getAddrDecor(ctx->expr());
    instructionList code = getCodeDecor(ctx->expr());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
    std::string temp = addr1;
    if (ctx->MINUS() or ctx->NOT()) {
        temp = '%' + codeCounters.newTEMP();
        instruction instr = instruction::NOOP();
        if (ctx->MINUS()) {
            instr = (Types.isFloatTy(t1))? instruction::FNEG(temp, addr1) :
                instruction::NEG(temp, addr1);
        }
        else {
            instr = instruction::NOT(temp, addr1);
        }
        code = code || instr;
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitArithmeticExpr(AslParser::ArithmeticExprContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->expr(0));
    instructionList code1 = getCodeDecor(ctx->expr(0));
    std::string     addr2 = getAddrDecor(ctx->expr(1));
    instructionList code2 = getCodeDecor(ctx->expr(1));
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    instructionList code  = code1 || code2;
    std::string temp = "%" + codeCounters.newTEMP();
    instructionList linstr;
    std::string addr3 = addr1;
    std::string addr4 = addr2;
    bool floatNeeded = Types.isFloatTy(t1) or Types.isFloatTy(t2);

    if (floatNeeded and not Types.isFloatTy(t1)) {
        addr3 = "%" + codeCounters.newTEMP();
        code = code || instruction::FLOAT(addr3, addr1);
    }
    else if (floatNeeded and not Types.isFloatTy(t2)) {
        addr4 = "%" + codeCounters.newTEMP();
        code = code || instruction::FLOAT(addr4, addr2);
    }

    if (ctx->PLUS()) {
        linstr = (floatNeeded)? instruction::FADD(temp, addr3, addr4) :
            instruction::ADD(temp, addr3, addr4);
    }
    else if (ctx->MINUS()) {
        linstr = (floatNeeded)? instruction::FSUB(temp, addr3, addr4) :
            instruction::SUB(temp, addr3, addr4);
    }
    else if (ctx->MUL()) {
        linstr = (floatNeeded)? instruction::FMUL(temp, addr3, addr4) :
            instruction::MUL(temp, addr3, addr4);
    }
    else if (ctx->DIV()) {
        linstr = (floatNeeded)? instruction::FDIV(temp, addr3, addr4) :
            instruction::DIV(temp, addr3, addr4);
    }
    else { // ctx->MOD()
        std::string temp2 = "%" + codeCounters.newTEMP();
        linstr = instruction::DIV(temp2, addr3, addr4) ||
            instruction::MUL(temp2, addr4, temp2) ||
            instruction::SUB(temp, addr3, temp2);
    }
    code = code || linstr;
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
    TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
    instructionList code  = code1 || code2;
    std::string temp = "%" + codeCounters.newTEMP();
    std::string addr3 = addr1;
    std::string addr4 = addr2;
    bool floatNeeded = Types.isFloatTy(t1) or Types.isFloatTy(t2);
    instructionList linstr;
    if (floatNeeded and not Types.isFloatTy(t1)) {
        addr3 = "%" + codeCounters.newTEMP();
        code = code || instruction::FLOAT(addr3, addr1);
    }
    else if (floatNeeded and not Types.isFloatTy(t2)) {
        addr4 = "%" + codeCounters.newTEMP();
        code = code || instruction::FLOAT(addr4, addr2);
    }
    if (ctx->EQ()) {
        linstr = (floatNeeded)? instruction::FEQ(temp, addr3, addr4) : 
            instruction::EQ(temp, addr3, addr4);
    }
    else if (ctx->NEQ()) {
        std::string temp3 ="%" + codeCounters.newTEMP();
        linstr = (floatNeeded)? instruction::FEQ(temp3, addr3, addr4) : 
            instruction::EQ(temp3, addr3, addr4);
        linstr = linstr || instruction::NOT(temp, temp3);
    }
    else if (ctx->GT()) {
        linstr = (floatNeeded)? instruction::FLT(temp, addr4, addr3) : 
            instruction::LT(temp, addr4, addr3);
    }
    else if (ctx->LT()) {
        linstr = (floatNeeded)? instruction::FLT(temp, addr3, addr4) : 
            instruction::LT(temp, addr3, addr4);
    }
    else if (ctx->GET()) {
        linstr = (floatNeeded)? instruction::FLE(temp, addr4, addr3) : 
            instruction::LE(temp, addr4, addr3);
    }
    else { //(ctx->LET())
        linstr = (floatNeeded)? instruction::FLE(temp, addr3, addr4) : 
            instruction::LE(temp, addr3, addr4);
    }

    code = code || linstr;
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
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

void CodeGenListener::enterSubExpr(AslParser::SubExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitSubExpr(AslParser::SubExprContext *ctx) {
    putAddrDecor(ctx, getAddrDecor(ctx->expr()));
    putOffsetDecor(ctx, getOffsetDecor(ctx->expr()));
    putCodeDecor(ctx, getCodeDecor(ctx->expr()));
    DEBUG_EXIT();
}

void CodeGenListener::enterValueExpr(AslParser::ValueExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitValueExpr(AslParser::ValueExprContext *ctx) {
    putAddrDecor(ctx, getAddrDecor(ctx->value()));
    putOffsetDecor(ctx, getOffsetDecor(ctx->value()));
    putCodeDecor(ctx, getCodeDecor(ctx->value()));
    DEBUG_EXIT();
}


void CodeGenListener::enterValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitValue(AslParser::ValueContext *ctx) {
    instructionList code;
    std::string temp = "%" + codeCounters.newTEMP();
    if (ctx->INTVAL()) {
        code = instruction::ILOAD(temp, ctx->getText());
    }
    else if (ctx->FLOATVAL()) {
        code = instruction::FLOAD(temp, ctx->getText());
    }
    else if (ctx->BOOLVAL()) {
        std::string value = ctx->getText();
        value = (value == "true")? "1" : "0";
        code = instruction::ILOAD(temp, value); 
    }
    else { //(ctx->CHARVAL())
        code = instruction::CHLOAD(temp, ctx->getText());
    }
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, "");
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterFunctionCallExpr(AslParser::FunctionCallExprContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitFunctionCallExpr(AslParser::FunctionCallExprContext *ctx) {
    instructionList code = getCodeDecor(ctx->functionCall());
    std::string temp = "%" + codeCounters.newTEMP();
    std::string offset = getOffsetDecor(ctx->functionCall());
    code = code || instruction::POP(temp);
    putAddrDecor(ctx, temp);
    putCodeDecor(ctx, code);
    putOffsetDecor(ctx, offset);
    DEBUG_EXIT();
}

void CodeGenListener::enterIdentExpr(AslParser::IdentExprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIdentExpr(AslParser::IdentExprContext *ctx) {
    std::string addr = getAddrDecor(ctx->ident_refer());
    std::string offset = getOffsetDecor(ctx->ident_refer());
    instructionList code = getCodeDecor(ctx->ident_refer());
    std::string addr2 = addr;
    if (ctx->ident_refer()->expr()) {
        addr2 = "%" + codeCounters.newTEMP();
        code = code || instruction::LOADX(addr2, addr, offset);
    }
    putCodeDecor(ctx, code);
    putOffsetDecor(ctx, offset);
    putAddrDecor(ctx, addr2);
    DEBUG_EXIT();
}

void CodeGenListener::enterIdent_refer(AslParser::Ident_referContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitIdent_refer(AslParser::Ident_referContext *ctx) {
    std::string addr = getAddrDecor(ctx->ident());
    instructionList code = getCodeDecor(ctx->ident());
    std::string offset = getOffsetDecor(ctx->ident());
    TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
    if (Types.isArrayTy(t1)) {
        if (Symbols.isParameterClass(addr)) {
            std::string addr2 = addr;
            addr = "%" + codeCounters.newTEMP();
            code = code || instruction::LOAD(addr, addr2);
        }
        if (ctx->expr()) {
            code = code || getCodeDecor(ctx->expr());
            offset = getAddrDecor(ctx->expr()); 
        }
    }
    putAddrDecor(ctx, addr);
    putCodeDecor(ctx, code);
    putOffsetDecor(ctx, offset);
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

void CodeGenListener::enterDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterType(AslParser::TypeContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitType(AslParser::TypeContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterArray(AslParser::ArrayContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitArray(AslParser::ArrayContext *ctx) {
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
