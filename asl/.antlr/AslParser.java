// Generated from /home/quim/CL/CL-Projecte/asl/Asl.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AslParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, ASSIGN=8, EQ=9, 
		NEQ=10, GT=11, LT=12, GET=13, LET=14, AND=15, OR=16, NOT=17, PLUS=18, 
		MUL=19, DIV=20, MINUS=21, MOD=22, VAR=23, INT=24, FLOAT=25, CHAR=26, BOOL=27, 
		ARRAY=28, OF=29, IF=30, THEN=31, ELSE=32, ENDIF=33, WHILE=34, DO=35, ENDWHILE=36, 
		FUNC=37, ENDFUNC=38, READ=39, WRITE=40, RETURN=41, INTVAL=42, FLOATVAL=43, 
		BOOLVAL=44, CHARVAL=45, ID=46, STRING=47, COMMENT=48, WS=49;
	public static final int
		RULE_program = 0, RULE_function = 1, RULE_params = 2, RULE_declarations = 3, 
		RULE_variable_decl = 4, RULE_type = 5, RULE_functionCall = 6, RULE_statements = 7, 
		RULE_statement = 8, RULE_expr = 9, RULE_value = 10, RULE_left_expr = 11, 
		RULE_ident = 12, RULE_array = 13;
	public static final String[] ruleNames = {
		"program", "function", "params", "declarations", "variable_decl", "type", 
		"functionCall", "statements", "statement", "expr", "value", "left_expr", 
		"ident", "array"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "':'", "','", "';'", "'['", "']'", "'='", "'=='", 
		"'!='", "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", "'not'", "'+'", 
		"'*'", "'/'", "'-'", "'%'", "'var'", "'int'", "'float'", "'char'", "'bool'", 
		"'array'", "'of'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", 
		"'endwhile'", "'func'", "'endfunc'", "'read'", "'write'", "'return'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, "ASSIGN", "EQ", "NEQ", 
		"GT", "LT", "GET", "LET", "AND", "OR", "NOT", "PLUS", "MUL", "DIV", "MINUS", 
		"MOD", "VAR", "INT", "FLOAT", "CHAR", "BOOL", "ARRAY", "OF", "IF", "THEN", 
		"ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FUNC", "ENDFUNC", "READ", 
		"WRITE", "RETURN", "INTVAL", "FLOATVAL", "BOOLVAL", "CHARVAL", "ID", "STRING", 
		"COMMENT", "WS"
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
	public String getGrammarFileName() { return "Asl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public AslParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(AslParser.EOF, 0); }
		public List<FunctionContext> function() {
			return getRuleContexts(FunctionContext.class);
		}
		public FunctionContext function(int i) {
			return getRuleContext(FunctionContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(28);
				function();
				}
				}
				setState(31); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FUNC );
			setState(33);
			match(EOF);
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

	public static class FunctionContext extends ParserRuleContext {
		public TerminalNode FUNC() { return getToken(AslParser.FUNC, 0); }
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode ENDFUNC() { return getToken(AslParser.ENDFUNC, 0); }
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_function);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			match(FUNC);
			setState(36);
			match(ID);
			setState(37);
			match(T__0);
			setState(39);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(38);
				params();
				}
			}

			setState(41);
			match(T__1);
			setState(44);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__2) {
				{
				setState(42);
				match(T__2);
				setState(43);
				type();
				}
			}

			setState(46);
			declarations();
			setState(47);
			statements();
			setState(48);
			match(ENDFUNC);
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

	public static class ParamsContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(AslParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(AslParser.ID, i);
		}
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public ParamsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_params; }
	}

	public final ParamsContext params() throws RecognitionException {
		ParamsContext _localctx = new ParamsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			match(ID);
			setState(51);
			match(T__2);
			setState(52);
			type();
			setState(59);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(53);
				match(T__3);
				setState(54);
				match(ID);
				setState(55);
				match(T__2);
				setState(56);
				type();
				}
				}
				setState(61);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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

	public static class DeclarationsContext extends ParserRuleContext {
		public List<Variable_declContext> variable_decl() {
			return getRuleContexts(Variable_declContext.class);
		}
		public Variable_declContext variable_decl(int i) {
			return getRuleContext(Variable_declContext.class,i);
		}
		public DeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarations; }
	}

	public final DeclarationsContext declarations() throws RecognitionException {
		DeclarationsContext _localctx = new DeclarationsContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_declarations);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VAR) {
				{
				{
				setState(62);
				variable_decl();
				}
				}
				setState(67);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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

	public static class Variable_declContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(AslParser.VAR, 0); }
		public List<TerminalNode> ID() { return getTokens(AslParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(AslParser.ID, i);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Variable_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_decl; }
	}

	public final Variable_declContext variable_decl() throws RecognitionException {
		Variable_declContext _localctx = new Variable_declContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variable_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68);
			match(VAR);
			setState(69);
			match(ID);
			setState(74);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(70);
				match(T__3);
				setState(71);
				match(ID);
				}
				}
				setState(76);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(77);
			match(T__2);
			setState(78);
			type();
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

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(AslParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(AslParser.FLOAT, 0); }
		public TerminalNode CHAR() { return getToken(AslParser.CHAR, 0); }
		public TerminalNode BOOL() { return getToken(AslParser.BOOL, 0); }
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type);
		try {
			setState(85);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(80);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(81);
				match(FLOAT);
				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(82);
				match(CHAR);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 4);
				{
				setState(83);
				match(BOOL);
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 5);
				{
				setState(84);
				array();
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class FunctionCallContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_functionCall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			ident();
			setState(88);
			match(T__0);
			setState(97);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(89);
				expr(0);
				setState(94);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(90);
					match(T__3);
					setState(91);
					expr(0);
					}
					}
					setState(96);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(99);
			match(T__1);
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

	public static class StatementsContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_statements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << READ) | (1L << WRITE) | (1L << RETURN) | (1L << ID))) != 0)) {
				{
				{
				setState(101);
				statement();
				}
				}
				setState(106);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProcCallContext extends StatementContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ProcCallContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WriteExprContext extends StatementContext {
		public TerminalNode WRITE() { return getToken(AslParser.WRITE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public WriteExprContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WhileStmtContext extends StatementContext {
		public TerminalNode WHILE() { return getToken(AslParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode DO() { return getToken(AslParser.DO, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode ENDWHILE() { return getToken(AslParser.ENDWHILE, 0); }
		public WhileStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class IfStmtContext extends StatementContext {
		public TerminalNode IF() { return getToken(AslParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode THEN() { return getToken(AslParser.THEN, 0); }
		public List<StatementsContext> statements() {
			return getRuleContexts(StatementsContext.class);
		}
		public StatementsContext statements(int i) {
			return getRuleContext(StatementsContext.class,i);
		}
		public TerminalNode ENDIF() { return getToken(AslParser.ENDIF, 0); }
		public TerminalNode ELSE() { return getToken(AslParser.ELSE, 0); }
		public IfStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReadStmtContext extends StatementContext {
		public TerminalNode READ() { return getToken(AslParser.READ, 0); }
		public Left_exprContext left_expr() {
			return getRuleContext(Left_exprContext.class,0);
		}
		public ReadStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class AssignStmtContext extends StatementContext {
		public Left_exprContext left_expr() {
			return getRuleContext(Left_exprContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(AslParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReturnStmtContext extends StatementContext {
		public TerminalNode RETURN() { return getToken(AslParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WriteStringContext extends StatementContext {
		public TerminalNode WRITE() { return getToken(AslParser.WRITE, 0); }
		public TerminalNode STRING() { return getToken(AslParser.STRING, 0); }
		public WriteStringContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_statement);
		int _la;
		try {
			setState(146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				_localctx = new AssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				left_expr();
				setState(108);
				match(ASSIGN);
				setState(109);
				expr(0);
				setState(110);
				match(T__4);
				}
				break;
			case 2:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(112);
				match(IF);
				setState(113);
				expr(0);
				setState(114);
				match(THEN);
				setState(115);
				statements();
				setState(118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(116);
					match(ELSE);
					setState(117);
					statements();
					}
				}

				setState(120);
				match(ENDIF);
				}
				break;
			case 3:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(122);
				match(WHILE);
				setState(123);
				expr(0);
				setState(124);
				match(DO);
				setState(125);
				statements();
				setState(126);
				match(ENDWHILE);
				}
				break;
			case 4:
				_localctx = new ProcCallContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(128);
				functionCall();
				setState(129);
				match(T__4);
				}
				break;
			case 5:
				_localctx = new ReadStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(131);
				match(READ);
				setState(132);
				left_expr();
				setState(133);
				match(T__4);
				}
				break;
			case 6:
				_localctx = new WriteExprContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(135);
				match(WRITE);
				setState(136);
				expr(0);
				setState(137);
				match(T__4);
				}
				break;
			case 7:
				_localctx = new WriteStringContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(139);
				match(WRITE);
				setState(140);
				match(STRING);
				setState(141);
				match(T__4);
				}
				break;
			case 8:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(142);
				match(RETURN);
				setState(143);
				expr(0);
				setState(144);
				match(T__4);
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
	public static class IdentExprContext extends ExprContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public IdentExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ProcCallExprContext extends ExprContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ProcCallExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ValueExprContext extends ExprContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BooleanExprContext extends ExprContext {
		public TerminalNode NOT() { return getToken(AslParser.NOT, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode AND() { return getToken(AslParser.AND, 0); }
		public TerminalNode OR() { return getToken(AslParser.OR, 0); }
		public BooleanExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MINUS() { return getToken(AslParser.MINUS, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public TerminalNode MUL() { return getToken(AslParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(AslParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(AslParser.MOD, 0); }
		public ArithmeticExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class SubExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public SubExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelationalExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(AslParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(AslParser.NEQ, 0); }
		public TerminalNode GT() { return getToken(AslParser.GT, 0); }
		public TerminalNode LT() { return getToken(AslParser.LT, 0); }
		public TerminalNode LET() { return getToken(AslParser.LET, 0); }
		public TerminalNode GET() { return getToken(AslParser.GET, 0); }
		public RelationalExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				_localctx = new ArithmeticExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(149);
				((ArithmeticExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((ArithmeticExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(150);
				expr(11);
				}
				break;
			case 2:
				{
				_localctx = new BooleanExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(151);
				match(NOT);
				setState(152);
				expr(7);
				}
				break;
			case 3:
				{
				_localctx = new SubExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(153);
				match(T__0);
				setState(154);
				expr(0);
				setState(155);
				match(T__1);
				}
				break;
			case 4:
				{
				_localctx = new ValueExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(157);
				value();
				}
				break;
			case 5:
				{
				_localctx = new ProcCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(158);
				functionCall();
				}
				break;
			case 6:
				{
				_localctx = new IdentExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(159);
				ident();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(179);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(177);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(162);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(163);
						((ArithmeticExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((ArithmeticExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(164);
						expr(11);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(165);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(166);
						((ArithmeticExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((ArithmeticExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(167);
						expr(10);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(168);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(169);
						((RelationalExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ) | (1L << NEQ) | (1L << GT) | (1L << LT) | (1L << GET) | (1L << LET))) != 0)) ) {
							((RelationalExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(170);
						expr(9);
						}
						break;
					case 4:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(171);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(172);
						match(AND);
						setState(173);
						expr(7);
						}
						break;
					case 5:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(174);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(175);
						match(OR);
						setState(176);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(181);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
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

	public static class ValueContext extends ParserRuleContext {
		public TerminalNode BOOLVAL() { return getToken(AslParser.BOOLVAL, 0); }
		public TerminalNode INTVAL() { return getToken(AslParser.INTVAL, 0); }
		public TerminalNode CHARVAL() { return getToken(AslParser.CHARVAL, 0); }
		public TerminalNode FLOATVAL() { return getToken(AslParser.FLOATVAL, 0); }
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_value);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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

	public static class Left_exprContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Left_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_left_expr; }
	}

	public final Left_exprContext left_expr() throws RecognitionException {
		Left_exprContext _localctx = new Left_exprContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_left_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			ident();
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

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
			match(ID);
			setState(191);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				setState(187);
				match(T__5);
				setState(188);
				expr(0);
				setState(189);
				match(T__6);
				}
				break;
			}
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

	public static class ArrayContext extends ParserRuleContext {
		public TerminalNode ARRAY() { return getToken(AslParser.ARRAY, 0); }
		public TerminalNode INTVAL() { return getToken(AslParser.INTVAL, 0); }
		public TerminalNode OF() { return getToken(AslParser.OF, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			match(ARRAY);
			setState(194);
			match(T__5);
			setState(195);
			match(INTVAL);
			setState(196);
			match(T__6);
			setState(197);
			match(OF);
			setState(198);
			type();
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 9:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 10);
		case 1:
			return precpred(_ctx, 9);
		case 2:
			return precpred(_ctx, 8);
		case 3:
			return precpred(_ctx, 6);
		case 4:
			return precpred(_ctx, 5);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\63\u00cb\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\3\2\6\2 \n\2\r\2\16\2!\3\2\3"+
		"\2\3\3\3\3\3\3\3\3\5\3*\n\3\3\3\3\3\3\3\5\3/\n\3\3\3\3\3\3\3\3\3\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\7\4<\n\4\f\4\16\4?\13\4\3\5\7\5B\n\5\f\5\16\5E"+
		"\13\5\3\6\3\6\3\6\3\6\7\6K\n\6\f\6\16\6N\13\6\3\6\3\6\3\6\3\7\3\7\3\7"+
		"\3\7\3\7\5\7X\n\7\3\b\3\b\3\b\3\b\3\b\7\b_\n\b\f\b\16\bb\13\b\5\bd\n\b"+
		"\3\b\3\b\3\t\7\ti\n\t\f\t\16\tl\13\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\5\ny\n\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u0095\n\n\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00a3"+
		"\n\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\7\13\u00b4\n\13\f\13\16\13\u00b7\13\13\3\f\3\f\3\r\3\r\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u00c2\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\2\3\24\20\2\4\6\b\n\f\16\20\22\24\26\30\32\34\2\6\4\2\24\24\27\27"+
		"\4\2\25\26\30\30\3\2\13\20\3\2,/\2\u00dc\2\37\3\2\2\2\4%\3\2\2\2\6\64"+
		"\3\2\2\2\bC\3\2\2\2\nF\3\2\2\2\fW\3\2\2\2\16Y\3\2\2\2\20j\3\2\2\2\22\u0094"+
		"\3\2\2\2\24\u00a2\3\2\2\2\26\u00b8\3\2\2\2\30\u00ba\3\2\2\2\32\u00bc\3"+
		"\2\2\2\34\u00c3\3\2\2\2\36 \5\4\3\2\37\36\3\2\2\2 !\3\2\2\2!\37\3\2\2"+
		"\2!\"\3\2\2\2\"#\3\2\2\2#$\7\2\2\3$\3\3\2\2\2%&\7\'\2\2&\'\7\60\2\2\'"+
		")\7\3\2\2(*\5\6\4\2)(\3\2\2\2)*\3\2\2\2*+\3\2\2\2+.\7\4\2\2,-\7\5\2\2"+
		"-/\5\f\7\2.,\3\2\2\2./\3\2\2\2/\60\3\2\2\2\60\61\5\b\5\2\61\62\5\20\t"+
		"\2\62\63\7(\2\2\63\5\3\2\2\2\64\65\7\60\2\2\65\66\7\5\2\2\66=\5\f\7\2"+
		"\678\7\6\2\289\7\60\2\29:\7\5\2\2:<\5\f\7\2;\67\3\2\2\2<?\3\2\2\2=;\3"+
		"\2\2\2=>\3\2\2\2>\7\3\2\2\2?=\3\2\2\2@B\5\n\6\2A@\3\2\2\2BE\3\2\2\2CA"+
		"\3\2\2\2CD\3\2\2\2D\t\3\2\2\2EC\3\2\2\2FG\7\31\2\2GL\7\60\2\2HI\7\6\2"+
		"\2IK\7\60\2\2JH\3\2\2\2KN\3\2\2\2LJ\3\2\2\2LM\3\2\2\2MO\3\2\2\2NL\3\2"+
		"\2\2OP\7\5\2\2PQ\5\f\7\2Q\13\3\2\2\2RX\7\32\2\2SX\7\33\2\2TX\7\34\2\2"+
		"UX\7\35\2\2VX\5\34\17\2WR\3\2\2\2WS\3\2\2\2WT\3\2\2\2WU\3\2\2\2WV\3\2"+
		"\2\2X\r\3\2\2\2YZ\5\32\16\2Zc\7\3\2\2[`\5\24\13\2\\]\7\6\2\2]_\5\24\13"+
		"\2^\\\3\2\2\2_b\3\2\2\2`^\3\2\2\2`a\3\2\2\2ad\3\2\2\2b`\3\2\2\2c[\3\2"+
		"\2\2cd\3\2\2\2de\3\2\2\2ef\7\4\2\2f\17\3\2\2\2gi\5\22\n\2hg\3\2\2\2il"+
		"\3\2\2\2jh\3\2\2\2jk\3\2\2\2k\21\3\2\2\2lj\3\2\2\2mn\5\30\r\2no\7\n\2"+
		"\2op\5\24\13\2pq\7\7\2\2q\u0095\3\2\2\2rs\7 \2\2st\5\24\13\2tu\7!\2\2"+
		"ux\5\20\t\2vw\7\"\2\2wy\5\20\t\2xv\3\2\2\2xy\3\2\2\2yz\3\2\2\2z{\7#\2"+
		"\2{\u0095\3\2\2\2|}\7$\2\2}~\5\24\13\2~\177\7%\2\2\177\u0080\5\20\t\2"+
		"\u0080\u0081\7&\2\2\u0081\u0095\3\2\2\2\u0082\u0083\5\16\b\2\u0083\u0084"+
		"\7\7\2\2\u0084\u0095\3\2\2\2\u0085\u0086\7)\2\2\u0086\u0087\5\30\r\2\u0087"+
		"\u0088\7\7\2\2\u0088\u0095\3\2\2\2\u0089\u008a\7*\2\2\u008a\u008b\5\24"+
		"\13\2\u008b\u008c\7\7\2\2\u008c\u0095\3\2\2\2\u008d\u008e\7*\2\2\u008e"+
		"\u008f\7\61\2\2\u008f\u0095\7\7\2\2\u0090\u0091\7+\2\2\u0091\u0092\5\24"+
		"\13\2\u0092\u0093\7\7\2\2\u0093\u0095\3\2\2\2\u0094m\3\2\2\2\u0094r\3"+
		"\2\2\2\u0094|\3\2\2\2\u0094\u0082\3\2\2\2\u0094\u0085\3\2\2\2\u0094\u0089"+
		"\3\2\2\2\u0094\u008d\3\2\2\2\u0094\u0090\3\2\2\2\u0095\23\3\2\2\2\u0096"+
		"\u0097\b\13\1\2\u0097\u0098\t\2\2\2\u0098\u00a3\5\24\13\r\u0099\u009a"+
		"\7\23\2\2\u009a\u00a3\5\24\13\t\u009b\u009c\7\3\2\2\u009c\u009d\5\24\13"+
		"\2\u009d\u009e\7\4\2\2\u009e\u00a3\3\2\2\2\u009f\u00a3\5\26\f\2\u00a0"+
		"\u00a3\5\16\b\2\u00a1\u00a3\5\32\16\2\u00a2\u0096\3\2\2\2\u00a2\u0099"+
		"\3\2\2\2\u00a2\u009b\3\2\2\2\u00a2\u009f\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2"+
		"\u00a1\3\2\2\2\u00a3\u00b5\3\2\2\2\u00a4\u00a5\f\f\2\2\u00a5\u00a6\t\3"+
		"\2\2\u00a6\u00b4\5\24\13\r\u00a7\u00a8\f\13\2\2\u00a8\u00a9\t\2\2\2\u00a9"+
		"\u00b4\5\24\13\f\u00aa\u00ab\f\n\2\2\u00ab\u00ac\t\4\2\2\u00ac\u00b4\5"+
		"\24\13\13\u00ad\u00ae\f\b\2\2\u00ae\u00af\7\21\2\2\u00af\u00b4\5\24\13"+
		"\t\u00b0\u00b1\f\7\2\2\u00b1\u00b2\7\22\2\2\u00b2\u00b4\5\24\13\b\u00b3"+
		"\u00a4\3\2\2\2\u00b3\u00a7\3\2\2\2\u00b3\u00aa\3\2\2\2\u00b3\u00ad\3\2"+
		"\2\2\u00b3\u00b0\3\2\2\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b5"+
		"\u00b6\3\2\2\2\u00b6\25\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8\u00b9\t\5\2"+
		"\2\u00b9\27\3\2\2\2\u00ba\u00bb\5\32\16\2\u00bb\31\3\2\2\2\u00bc\u00c1"+
		"\7\60\2\2\u00bd\u00be\7\b\2\2\u00be\u00bf\5\24\13\2\u00bf\u00c0\7\t\2"+
		"\2\u00c0\u00c2\3\2\2\2\u00c1\u00bd\3\2\2\2\u00c1\u00c2\3\2\2\2\u00c2\33"+
		"\3\2\2\2\u00c3\u00c4\7\36\2\2\u00c4\u00c5\7\b\2\2\u00c5\u00c6\7,\2\2\u00c6"+
		"\u00c7\7\t\2\2\u00c7\u00c8\7\37\2\2\u00c8\u00c9\5\f\7\2\u00c9\35\3\2\2"+
		"\2\22!).=CLW`cjx\u0094\u00a2\u00b3\u00b5\u00c1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}