
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    MULT = 1, ADD = 2, SUB = 3, DIV = 4, LPAR = 5, RPAR = 6, EQ = 7, NEQ = 8, 
    GT = 9, LT = 10, GET = 11, LET = 12, AND = 13, OR = 14, NOT = 15, INT = 16, 
    WS = 17
  };

  enum {
    RuleS = 0, RuleE = 1, RuleExprBool = 2
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SContext;
  class EContext;
  class ExprBoolContext; 

  class  SContext : public antlr4::ParserRuleContext {
  public:
    SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EContext *e();
    ExprBoolContext *exprBool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SContext* s();

  class  EContext : public antlr4::ParserRuleContext {
  public:
    EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EContext() : antlr4::ParserRuleContext() { }
    void copyFrom(EContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NegateContext : public EContext {
  public:
    NegateContext(EContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    EContext *e();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PlusOrSubContext : public EContext {
  public:
    PlusOrSubContext(EContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ProdOrDivContext : public EContext {
  public:
    ProdOrDivContext(EContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubExprContext : public EContext {
  public:
    SubExprContext(EContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    EContext *e();
    antlr4::tree::TerminalNode *RPAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ValueContext : public EContext {
  public:
    ValueContext(EContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  EContext* e();
  EContext* e(int precedence);
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OrContext : public ExprBoolContext {
  public:
    OrContext(ExprBoolContext *ctx);

    std::vector<ExprBoolContext *> exprBool();
    ExprBoolContext* exprBool(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AndContext : public ExprBoolContext {
  public:
    AndContext(ExprBoolContext *ctx);

    std::vector<ExprBoolContext *> exprBool();
    ExprBoolContext* exprBool(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TermeBoolContext : public ExprBoolContext {
  public:
    TermeBoolContext(ExprBoolContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<EContext *> e();
    EContext* e(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *LET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprBoolContext* exprBool();
  ExprBoolContext* exprBool(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool eSempred(EContext *_localctx, size_t predicateIndex);
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

