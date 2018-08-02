
// Generated from Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, MUL = 2, ADD = 3, SUB = 4, DIV = 5, LPAR = 6, RPAR = 7, QMARK = 8, 
    DOUBLE = 9, IF = 10, ENDIF = 11, THEN = 12, ELSE = 13, WHILE = 14, LKEY = 15, 
    RKEY = 16, MAXFUN = 17, COMMA = 18, AND = 19, OR = 20, NOT = 21, GT = 22, 
    LT = 23, EQ = 24, NEQ = 25, GET = 26, LET = 27, ID = 28, INT = 29, NEWLINE = 30, 
    WS = 31
  };

  enum {
    RuleProg = 0, RuleStat = 1, RuleExpr = 2, RuleExprBool = 3
  };

  CalcParser(antlr4::TokenStream *input);
  ~CalcParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class StatContext;
  class ExprContext;
  class ExprBoolContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintExprBoolContext : public StatContext {
  public:
    PrintExprBoolContext(StatContext *ctx);

    ExprBoolContext *exprBool();
    antlr4::tree::TerminalNode *NEWLINE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlankContext : public StatContext {
  public:
    BlankContext(StatContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileContext : public StatContext {
  public:
    WhileContext(StatContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAR();
    ExprBoolContext *exprBool();
    antlr4::tree::TerminalNode *RPAR();
    antlr4::tree::TerminalNode *LKEY();
    antlr4::tree::TerminalNode *RKEY();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryContext : public StatContext {
  public:
    TernaryContext(StatContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    ExprBoolContext *exprBool();
    antlr4::tree::TerminalNode *QMARK();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *RPAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfContext : public StatContext {
  public:
    IfContext(StatContext *ctx);

    antlr4::tree::TerminalNode *IF();
    ExprBoolContext *exprBool();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExprContext : public StatContext {
  public:
    PrintExprContext(StatContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StatContext {
  public:
    AssignContext(StatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatContext* stat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NegateExprContext : public ExprContext {
  public:
    NegateExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusOrSubContext : public ExprContext {
  public:
    PlusOrSubContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExprContext {
  public:
    IdContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ProdOrDivContext : public ExprContext {
  public:
    ProdOrDivContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubExprContext : public ExprContext {
  public:
    SubExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MaxFunctionContext : public ExprContext {
  public:
    MaxFunctionContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *MAXFUN();
    antlr4::tree::TerminalNode *LPAR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RPAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public ExprContext {
  public:
    IntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ExprBoolContext : public antlr4::ParserRuleContext {
  public:
    ExprBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprBoolContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprBoolContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NotContext : public ExprBoolContext {
  public:
    NotContext(ExprBoolContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ExprBoolContext *exprBool();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermBoolContext : public ExprBoolContext {
  public:
    TermBoolContext(ExprBoolContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *LET();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public ExprBoolContext {
  public:
    OrContext(ExprBoolContext *ctx);

    std::vector<ExprBoolContext *> exprBool();
    ExprBoolContext* exprBool(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExprBoolContext {
  public:
    AndContext(ExprBoolContext *ctx);

    std::vector<ExprBoolContext *> exprBool();
    ExprBoolContext* exprBool(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubExprBoolContext : public ExprBoolContext {
  public:
    SubExprBoolContext(ExprBoolContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    ExprBoolContext *exprBool();
    antlr4::tree::TerminalNode *RPAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprBoolContext* exprBool();
  ExprBoolContext* exprBool(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool exprBoolSempred(ExprBoolContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

