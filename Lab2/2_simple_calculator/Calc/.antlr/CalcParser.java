// Generated from /home/quim/CL/Lab2/2_simple_calculator/Calc/Calc.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CalcParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, MUL=2, ADD=3, SUB=4, DIV=5, LPAR=6, RPAR=7, QMARK=8, DOUBLE=9, 
		IF=10, ENDIF=11, THEN=12, ELSE=13, WHILE=14, LKEY=15, RKEY=16, MAXFUN=17, 
		COMMA=18, AND=19, OR=20, NOT=21, GT=22, LT=23, EQ=24, NEQ=25, GET=26, 
		LET=27, ID=28, INT=29, NEWLINE=30, WS=31;
	public static final int
		RULE_prog = 0, RULE_stat = 1, RULE_expr = 2, RULE_exprBool = 3;
	public static final String[] ruleNames = {
		"prog", "stat", "expr", "exprBool"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'='", "'*'", "'+'", "'-'", "'/'", "'('", "')'", "'?'", "':'", "'if'", 
		"'endif'", "'then'", "'else'", "'while'", "'{'", "'}'", "'max'", "','", 
		"'and'", "'or'", "'not'", "'>'", "'<'", "'=='", "'!='", "'>='", "'<='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, "MUL", "ADD", "SUB", "DIV", "LPAR", "RPAR", "QMARK", "DOUBLE", 
		"IF", "ENDIF", "THEN", "ELSE", "WHILE", "LKEY", "RKEY", "MAXFUN", "COMMA", 
		"AND", "OR", "NOT", "GT", "LT", "EQ", "NEQ", "GET", "LET", "ID", "INT", 
		"NEWLINE", "WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Calc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CalcParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(9); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(8);
				stat();
				}
				}
				setState(11); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SUB) | (1L << LPAR) | (1L << IF) | (1L << WHILE) | (1L << MAXFUN) | (1L << NOT) | (1L << ID) | (1L << INT) | (1L << NEWLINE))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	 
		public StatContext() { }
		public void copyFrom(StatContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PrintExprBoolContext extends StatContext {
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public TerminalNode NEWLINE() { return getToken(CalcParser.NEWLINE, 0); }
		public PrintExprBoolContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class BlankContext extends StatContext {
		public TerminalNode NEWLINE() { return getToken(CalcParser.NEWLINE, 0); }
		public BlankContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class WhileContext extends StatContext {
		public TerminalNode WHILE() { return getToken(CalcParser.WHILE, 0); }
		public TerminalNode LPAR() { return getToken(CalcParser.LPAR, 0); }
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(CalcParser.RPAR, 0); }
		public TerminalNode LKEY() { return getToken(CalcParser.LKEY, 0); }
		public TerminalNode RKEY() { return getToken(CalcParser.RKEY, 0); }
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public WhileContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class TernaryContext extends StatContext {
		public TerminalNode LPAR() { return getToken(CalcParser.LPAR, 0); }
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public TerminalNode QMARK() { return getToken(CalcParser.QMARK, 0); }
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public TerminalNode DOUBLE() { return getToken(CalcParser.DOUBLE, 0); }
		public TerminalNode RPAR() { return getToken(CalcParser.RPAR, 0); }
		public TernaryContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class IfContext extends StatContext {
		public TerminalNode IF() { return getToken(CalcParser.IF, 0); }
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public TerminalNode THEN() { return getToken(CalcParser.THEN, 0); }
		public TerminalNode ENDIF() { return getToken(CalcParser.ENDIF, 0); }
		public TerminalNode ELSE() { return getToken(CalcParser.ELSE, 0); }
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public IfContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class PrintExprContext extends StatContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NEWLINE() { return getToken(CalcParser.NEWLINE, 0); }
		public PrintExprContext(StatContext ctx) { copyFrom(ctx); }
	}
	public static class AssignContext extends StatContext {
		public TerminalNode ID() { return getToken(CalcParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NEWLINE() { return getToken(CalcParser.NEWLINE, 0); }
		public AssignContext(StatContext ctx) { copyFrom(ctx); }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_stat);
		int _la;
		try {
			setState(67);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new PrintExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(13);
				expr(0);
				setState(14);
				match(NEWLINE);
				}
				break;
			case 2:
				_localctx = new AssignContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(16);
				match(ID);
				setState(17);
				match(T__0);
				setState(18);
				expr(0);
				setState(19);
				match(NEWLINE);
				}
				break;
			case 3:
				_localctx = new PrintExprBoolContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(21);
				exprBool(0);
				setState(22);
				match(NEWLINE);
				}
				break;
			case 4:
				_localctx = new TernaryContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(24);
				match(LPAR);
				setState(25);
				exprBool(0);
				setState(26);
				match(QMARK);
				setState(27);
				stat();
				setState(28);
				match(DOUBLE);
				setState(29);
				stat();
				setState(30);
				match(RPAR);
				}
				break;
			case 5:
				_localctx = new WhileContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(32);
				match(WHILE);
				setState(33);
				match(LPAR);
				setState(34);
				exprBool(0);
				setState(35);
				match(RPAR);
				setState(36);
				match(LKEY);
				setState(40);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SUB) | (1L << LPAR) | (1L << IF) | (1L << WHILE) | (1L << MAXFUN) | (1L << NOT) | (1L << ID) | (1L << INT) | (1L << NEWLINE))) != 0)) {
					{
					{
					setState(37);
					stat();
					}
					}
					setState(42);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(43);
				match(RKEY);
				}
				break;
			case 6:
				_localctx = new IfContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(45);
				match(IF);
				setState(46);
				exprBool(0);
				setState(47);
				match(THEN);
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SUB) | (1L << LPAR) | (1L << IF) | (1L << WHILE) | (1L << MAXFUN) | (1L << NOT) | (1L << ID) | (1L << INT) | (1L << NEWLINE))) != 0)) {
					{
					{
					setState(48);
					stat();
					}
					}
					setState(53);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(62);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ELSE:
					{
					setState(54);
					match(ELSE);
					setState(58);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SUB) | (1L << LPAR) | (1L << IF) | (1L << WHILE) | (1L << MAXFUN) | (1L << NOT) | (1L << ID) | (1L << INT) | (1L << NEWLINE))) != 0)) {
						{
						{
						setState(55);
						stat();
						}
						}
						setState(60);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case ENDIF:
					{
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(64);
				match(ENDIF);
				}
				break;
			case 7:
				_localctx = new BlankContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(66);
				match(NEWLINE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NegateExprContext extends ExprContext {
		public TerminalNode SUB() { return getToken(CalcParser.SUB, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NegateExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PlusOrSubContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode ADD() { return getToken(CalcParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(CalcParser.SUB, 0); }
		public PlusOrSubContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class IdContext extends ExprContext {
		public TerminalNode ID() { return getToken(CalcParser.ID, 0); }
		public IdContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ProdOrDivContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MUL() { return getToken(CalcParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CalcParser.DIV, 0); }
		public ProdOrDivContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class SubExprContext extends ExprContext {
		public TerminalNode LPAR() { return getToken(CalcParser.LPAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(CalcParser.RPAR, 0); }
		public SubExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MaxFunctionContext extends ExprContext {
		public TerminalNode MAXFUN() { return getToken(CalcParser.MAXFUN, 0); }
		public TerminalNode LPAR() { return getToken(CalcParser.LPAR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode RPAR() { return getToken(CalcParser.RPAR, 0); }
		public List<TerminalNode> COMMA() { return getTokens(CalcParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CalcParser.COMMA, i);
		}
		public MaxFunctionContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class IntContext extends ExprContext {
		public TerminalNode INT() { return getToken(CalcParser.INT, 0); }
		public IntContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 4;
		enterRecursionRule(_localctx, 4, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SUB:
				{
				_localctx = new NegateExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(70);
				match(SUB);
				setState(71);
				expr(7);
				}
				break;
			case MAXFUN:
				{
				_localctx = new MaxFunctionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(72);
				match(MAXFUN);
				setState(73);
				match(LPAR);
				setState(74);
				expr(0);
				setState(77); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(75);
					match(COMMA);
					setState(76);
					expr(0);
					}
					}
					setState(79); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==COMMA );
				setState(81);
				match(RPAR);
				}
				break;
			case LPAR:
				{
				_localctx = new SubExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(83);
				match(LPAR);
				setState(84);
				expr(0);
				setState(85);
				match(RPAR);
				}
				break;
			case INT:
				{
				_localctx = new IntContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(87);
				match(INT);
				}
				break;
			case ID:
				{
				_localctx = new IdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(88);
				match(ID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(99);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(97);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
					case 1:
						{
						_localctx = new ProdOrDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(91);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(92);
						((ProdOrDivContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
							((ProdOrDivContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(93);
						expr(7);
						}
						break;
					case 2:
						{
						_localctx = new PlusOrSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(94);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(95);
						((PlusOrSubContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
							((PlusOrSubContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(96);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExprBoolContext extends ParserRuleContext {
		public ExprBoolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprBool; }
	 
		public ExprBoolContext() { }
		public void copyFrom(ExprBoolContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NotContext extends ExprBoolContext {
		public TerminalNode NOT() { return getToken(CalcParser.NOT, 0); }
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public NotContext(ExprBoolContext ctx) { copyFrom(ctx); }
	}
	public static class TermBoolContext extends ExprBoolContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(CalcParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(CalcParser.NEQ, 0); }
		public TerminalNode GT() { return getToken(CalcParser.GT, 0); }
		public TerminalNode LT() { return getToken(CalcParser.LT, 0); }
		public TerminalNode GET() { return getToken(CalcParser.GET, 0); }
		public TerminalNode LET() { return getToken(CalcParser.LET, 0); }
		public TermBoolContext(ExprBoolContext ctx) { copyFrom(ctx); }
	}
	public static class OrContext extends ExprBoolContext {
		public List<ExprBoolContext> exprBool() {
			return getRuleContexts(ExprBoolContext.class);
		}
		public ExprBoolContext exprBool(int i) {
			return getRuleContext(ExprBoolContext.class,i);
		}
		public TerminalNode OR() { return getToken(CalcParser.OR, 0); }
		public OrContext(ExprBoolContext ctx) { copyFrom(ctx); }
	}
	public static class AndContext extends ExprBoolContext {
		public List<ExprBoolContext> exprBool() {
			return getRuleContexts(ExprBoolContext.class);
		}
		public ExprBoolContext exprBool(int i) {
			return getRuleContext(ExprBoolContext.class,i);
		}
		public TerminalNode AND() { return getToken(CalcParser.AND, 0); }
		public AndContext(ExprBoolContext ctx) { copyFrom(ctx); }
	}
	public static class SubExprBoolContext extends ExprBoolContext {
		public TerminalNode LPAR() { return getToken(CalcParser.LPAR, 0); }
		public ExprBoolContext exprBool() {
			return getRuleContext(ExprBoolContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(CalcParser.RPAR, 0); }
		public SubExprBoolContext(ExprBoolContext ctx) { copyFrom(ctx); }
	}

	public final ExprBoolContext exprBool() throws RecognitionException {
		return exprBool(0);
	}

	private ExprBoolContext exprBool(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprBoolContext _localctx = new ExprBoolContext(_ctx, _parentState);
		ExprBoolContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_exprBool, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				_localctx = new NotContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(103);
				match(NOT);
				setState(104);
				exprBool(3);
				}
				break;
			case 2:
				{
				_localctx = new SubExprBoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(105);
				match(LPAR);
				setState(106);
				exprBool(0);
				setState(107);
				match(RPAR);
				}
				break;
			case 3:
				{
				_localctx = new TermBoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(109);
				expr(0);
				setState(110);
				((TermBoolContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << GT) | (1L << LT) | (1L << EQ) | (1L << NEQ) | (1L << GET) | (1L << LET))) != 0)) ) {
					((TermBoolContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(111);
				expr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(123);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(121);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new AndContext(new ExprBoolContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_exprBool);
						setState(115);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(116);
						match(AND);
						setState(117);
						exprBool(6);
						}
						break;
					case 2:
						{
						_localctx = new OrContext(new ExprBoolContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_exprBool);
						setState(118);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(119);
						match(OR);
						setState(120);
						exprBool(5);
						}
						break;
					}
					} 
				}
				setState(125);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 2:
			return expr_sempred((ExprContext)_localctx, predIndex);
		case 3:
			return exprBool_sempred((ExprBoolContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 6);
		case 1:
			return precpred(_ctx, 5);
		}
		return true;
	}
	private boolean exprBool_sempred(ExprBoolContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3!\u0081\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\3\2\6\2\f\n\2\r\2\16\2\r\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\7\3)\n\3\f\3\16\3,\13\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3\64\n\3\f"+
		"\3\16\3\67\13\3\3\3\3\3\7\3;\n\3\f\3\16\3>\13\3\3\3\5\3A\n\3\3\3\3\3\3"+
		"\3\5\3F\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\6\4P\n\4\r\4\16\4Q\3\4\3\4"+
		"\3\4\3\4\3\4\3\4\3\4\3\4\5\4\\\n\4\3\4\3\4\3\4\3\4\3\4\3\4\7\4d\n\4\f"+
		"\4\16\4g\13\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5t\n\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\7\5|\n\5\f\5\16\5\177\13\5\3\5\2\4\6\b\6\2\4\6\b"+
		"\2\5\4\2\4\4\7\7\3\2\5\6\3\2\30\35\2\u0092\2\13\3\2\2\2\4E\3\2\2\2\6["+
		"\3\2\2\2\bs\3\2\2\2\n\f\5\4\3\2\13\n\3\2\2\2\f\r\3\2\2\2\r\13\3\2\2\2"+
		"\r\16\3\2\2\2\16\3\3\2\2\2\17\20\5\6\4\2\20\21\7 \2\2\21F\3\2\2\2\22\23"+
		"\7\36\2\2\23\24\7\3\2\2\24\25\5\6\4\2\25\26\7 \2\2\26F\3\2\2\2\27\30\5"+
		"\b\5\2\30\31\7 \2\2\31F\3\2\2\2\32\33\7\b\2\2\33\34\5\b\5\2\34\35\7\n"+
		"\2\2\35\36\5\4\3\2\36\37\7\13\2\2\37 \5\4\3\2 !\7\t\2\2!F\3\2\2\2\"#\7"+
		"\20\2\2#$\7\b\2\2$%\5\b\5\2%&\7\t\2\2&*\7\21\2\2\')\5\4\3\2(\'\3\2\2\2"+
		"),\3\2\2\2*(\3\2\2\2*+\3\2\2\2+-\3\2\2\2,*\3\2\2\2-.\7\22\2\2.F\3\2\2"+
		"\2/\60\7\f\2\2\60\61\5\b\5\2\61\65\7\16\2\2\62\64\5\4\3\2\63\62\3\2\2"+
		"\2\64\67\3\2\2\2\65\63\3\2\2\2\65\66\3\2\2\2\66@\3\2\2\2\67\65\3\2\2\2"+
		"8<\7\17\2\29;\5\4\3\2:9\3\2\2\2;>\3\2\2\2<:\3\2\2\2<=\3\2\2\2=A\3\2\2"+
		"\2><\3\2\2\2?A\3\2\2\2@8\3\2\2\2@?\3\2\2\2AB\3\2\2\2BC\7\r\2\2CF\3\2\2"+
		"\2DF\7 \2\2E\17\3\2\2\2E\22\3\2\2\2E\27\3\2\2\2E\32\3\2\2\2E\"\3\2\2\2"+
		"E/\3\2\2\2ED\3\2\2\2F\5\3\2\2\2GH\b\4\1\2HI\7\6\2\2I\\\5\6\4\tJK\7\23"+
		"\2\2KL\7\b\2\2LO\5\6\4\2MN\7\24\2\2NP\5\6\4\2OM\3\2\2\2PQ\3\2\2\2QO\3"+
		"\2\2\2QR\3\2\2\2RS\3\2\2\2ST\7\t\2\2T\\\3\2\2\2UV\7\b\2\2VW\5\6\4\2WX"+
		"\7\t\2\2X\\\3\2\2\2Y\\\7\37\2\2Z\\\7\36\2\2[G\3\2\2\2[J\3\2\2\2[U\3\2"+
		"\2\2[Y\3\2\2\2[Z\3\2\2\2\\e\3\2\2\2]^\f\b\2\2^_\t\2\2\2_d\5\6\4\t`a\f"+
		"\7\2\2ab\t\3\2\2bd\5\6\4\bc]\3\2\2\2c`\3\2\2\2dg\3\2\2\2ec\3\2\2\2ef\3"+
		"\2\2\2f\7\3\2\2\2ge\3\2\2\2hi\b\5\1\2ij\7\27\2\2jt\5\b\5\5kl\7\b\2\2l"+
		"m\5\b\5\2mn\7\t\2\2nt\3\2\2\2op\5\6\4\2pq\t\4\2\2qr\5\6\4\2rt\3\2\2\2"+
		"sh\3\2\2\2sk\3\2\2\2so\3\2\2\2t}\3\2\2\2uv\f\7\2\2vw\7\25\2\2w|\5\b\5"+
		"\bxy\f\6\2\2yz\7\26\2\2z|\5\b\5\7{u\3\2\2\2{x\3\2\2\2|\177\3\2\2\2}{\3"+
		"\2\2\2}~\3\2\2\2~\t\3\2\2\2\177}\3\2\2\2\17\r*\65<@EQ[ces{}";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}