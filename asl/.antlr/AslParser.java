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
		RULE_variable_decl = 4, RULE_type = 5, RULE_basicType = 6, RULE_functionCall = 7, 
		RULE_statements = 8, RULE_statement = 9, RULE_expr = 10, RULE_value = 11, 
		RULE_left_expr = 12, RULE_ident = 13, RULE_array = 14;
	public static final String[] ruleNames = {
		"program", "function", "params", "declarations", "variable_decl", "type", 
		"basicType", "functionCall", "statements", "statement", "expr", "value", 
		"left_expr", "ident", "array"
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
			setState(31); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(30);
				function();
				}
				}
				setState(33); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FUNC );
			setState(35);
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
		public BasicTypeContext basicType() {
			return getRuleContext(BasicTypeContext.class,0);
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
			setState(37);
			match(FUNC);
			setState(38);
			match(ID);
			setState(39);
			match(T__0);
			setState(41);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(40);
				params();
				}
			}

			setState(43);
			match(T__1);
			setState(46);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__2) {
				{
				setState(44);
				match(T__2);
				setState(45);
				basicType();
				}
			}

			setState(48);
			declarations();
			setState(49);
			statements();
			setState(50);
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
			setState(52);
			match(ID);
			setState(53);
			match(T__2);
			setState(54);
			type();
			setState(61);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(55);
				match(T__3);
				setState(56);
				match(ID);
				setState(57);
				match(T__2);
				setState(58);
				type();
				}
				}
				setState(63);
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
			setState(67);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VAR) {
				{
				{
				setState(64);
				variable_decl();
				}
				}
				setState(69);
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
			setState(70);
			match(VAR);
			setState(71);
			match(ID);
			setState(76);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(72);
				match(T__3);
				setState(73);
				match(ID);
				}
				}
				setState(78);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(79);
			match(T__2);
			setState(80);
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
		public BasicTypeContext basicType() {
			return getRuleContext(BasicTypeContext.class,0);
		}
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
			setState(84);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case FLOAT:
			case CHAR:
			case BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(82);
				basicType();
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(83);
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

	public static class BasicTypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(AslParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(AslParser.FLOAT, 0); }
		public TerminalNode CHAR() { return getToken(AslParser.CHAR, 0); }
		public TerminalNode BOOL() { return getToken(AslParser.BOOL, 0); }
		public BasicTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_basicType; }
	}

	public final BasicTypeContext basicType() throws RecognitionException {
		BasicTypeContext _localctx = new BasicTypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_basicType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << FLOAT) | (1L << CHAR) | (1L << BOOL))) != 0)) ) {
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
		enterRule(_localctx, 14, RULE_functionCall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			ident();
			setState(89);
			match(T__0);
			setState(98);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(90);
				expr(0);
				setState(95);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(91);
					match(T__3);
					setState(92);
					expr(0);
					}
					}
					setState(97);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(100);
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
		enterRule(_localctx, 16, RULE_statements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << READ) | (1L << WRITE) | (1L << RETURN) | (1L << ID))) != 0)) {
				{
				{
				setState(102);
				statement();
				}
				}
				setState(107);
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
		enterRule(_localctx, 18, RULE_statement);
		int _la;
		try {
			setState(148);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				_localctx = new AssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(108);
				left_expr();
				setState(109);
				match(ASSIGN);
				setState(110);
				expr(0);
				setState(111);
				match(T__4);
				}
				break;
			case 2:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(113);
				match(IF);
				setState(114);
				expr(0);
				setState(115);
				match(THEN);
				setState(116);
				statements();
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(117);
					match(ELSE);
					setState(118);
					statements();
					}
				}

				setState(121);
				match(ENDIF);
				}
				break;
			case 3:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(123);
				match(WHILE);
				setState(124);
				expr(0);
				setState(125);
				match(DO);
				setState(126);
				statements();
				setState(127);
				match(ENDWHILE);
				}
				break;
			case 4:
				_localctx = new ProcCallContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(129);
				functionCall();
				setState(130);
				match(T__4);
				}
				break;
			case 5:
				_localctx = new ReadStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(132);
				match(READ);
				setState(133);
				left_expr();
				setState(134);
				match(T__4);
				}
				break;
			case 6:
				_localctx = new WriteExprContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(136);
				match(WRITE);
				setState(137);
				expr(0);
				setState(138);
				match(T__4);
				}
				break;
			case 7:
				_localctx = new WriteStringContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(140);
				match(WRITE);
				setState(141);
				match(STRING);
				setState(142);
				match(T__4);
				}
				break;
			case 8:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(143);
				match(RETURN);
				setState(145);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
					{
					setState(144);
					expr(0);
					}
				}

				setState(147);
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
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IdentExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class UnaryArithmeticExprContext extends ExprContext {
		public Token op;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(AslParser.MINUS, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public UnaryArithmeticExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class UnaryBooleanExprContext extends ExprContext {
		public Token op;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NOT() { return getToken(AslParser.NOT, 0); }
		public UnaryBooleanExprContext(ExprContext ctx) { copyFrom(ctx); }
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
		public Token op;
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
		public TerminalNode MUL() { return getToken(AslParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(AslParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(AslParser.MOD, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(AslParser.MINUS, 0); }
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
		int _startState = 20;
		enterRecursionRule(_localctx, 20, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				{
				_localctx = new UnaryArithmeticExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(151);
				((UnaryArithmeticExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((UnaryArithmeticExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(152);
				expr(11);
				}
				break;
			case 2:
				{
				_localctx = new UnaryBooleanExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(153);
				((UnaryBooleanExprContext)_localctx).op = match(NOT);
				setState(154);
				expr(7);
				}
				break;
			case 3:
				{
				_localctx = new SubExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(155);
				match(T__0);
				setState(156);
				expr(0);
				setState(157);
				match(T__1);
				}
				break;
			case 4:
				{
				_localctx = new ValueExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(159);
				value();
				}
				break;
			case 5:
				{
				_localctx = new ProcCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(160);
				functionCall();
				}
				break;
			case 6:
				{
				_localctx = new IdentExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(161);
				ident();
				setState(166);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(162);
					match(T__5);
					setState(163);
					expr(0);
					setState(164);
					match(T__6);
					}
					break;
				}
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(187);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(185);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(170);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(171);
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
						setState(172);
						expr(11);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(173);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(174);
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
						setState(175);
						expr(10);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(176);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(177);
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
						setState(178);
						expr(9);
						}
						break;
					case 4:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(179);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(180);
						((BooleanExprContext)_localctx).op = match(AND);
						setState(181);
						expr(7);
						}
						break;
					case 5:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(182);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(183);
						((BooleanExprContext)_localctx).op = match(OR);
						setState(184);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(189);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
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
		enterRule(_localctx, 22, RULE_value);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
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
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Left_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_left_expr; }
	}

	public final Left_exprContext left_expr() throws RecognitionException {
		Left_exprContext _localctx = new Left_exprContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_left_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			ident();
			setState(197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__5) {
				{
				setState(193);
				match(T__5);
				setState(194);
				expr(0);
				setState(195);
				match(T__6);
				}
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

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			match(ID);
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
		public BasicTypeContext basicType() {
			return getRuleContext(BasicTypeContext.class,0);
		}
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(ARRAY);
			setState(202);
			match(T__5);
			setState(203);
			match(INTVAL);
			setState(204);
			match(T__6);
			setState(205);
			match(OF);
			setState(206);
			basicType();
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
		case 10:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\63\u00d3\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\6\2\"\n\2\r\2"+
		"\16\2#\3\2\3\2\3\3\3\3\3\3\3\3\5\3,\n\3\3\3\3\3\3\3\5\3\61\n\3\3\3\3\3"+
		"\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\7\4>\n\4\f\4\16\4A\13\4\3\5\7\5D"+
		"\n\5\f\5\16\5G\13\5\3\6\3\6\3\6\3\6\7\6M\n\6\f\6\16\6P\13\6\3\6\3\6\3"+
		"\6\3\7\3\7\5\7W\n\7\3\b\3\b\3\t\3\t\3\t\3\t\3\t\7\t`\n\t\f\t\16\tc\13"+
		"\t\5\te\n\t\3\t\3\t\3\n\7\nj\n\n\f\n\16\nm\13\n\3\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13z\n\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\5\13\u0094\n\13\3\13\5\13\u0097\n\13\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u00a9\n\f"+
		"\5\f\u00ab\n\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\7\f\u00bc\n\f\f\f\16\f\u00bf\13\f\3\r\3\r\3\16\3\16\3\16\3\16\3\16"+
		"\5\16\u00c8\n\16\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\2\3"+
		"\26\21\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36\2\7\3\2\32\35\4\2\24\24"+
		"\27\27\4\2\25\26\30\30\3\2\13\20\3\2,/\2\u00e2\2!\3\2\2\2\4\'\3\2\2\2"+
		"\6\66\3\2\2\2\bE\3\2\2\2\nH\3\2\2\2\fV\3\2\2\2\16X\3\2\2\2\20Z\3\2\2\2"+
		"\22k\3\2\2\2\24\u0096\3\2\2\2\26\u00aa\3\2\2\2\30\u00c0\3\2\2\2\32\u00c2"+
		"\3\2\2\2\34\u00c9\3\2\2\2\36\u00cb\3\2\2\2 \"\5\4\3\2! \3\2\2\2\"#\3\2"+
		"\2\2#!\3\2\2\2#$\3\2\2\2$%\3\2\2\2%&\7\2\2\3&\3\3\2\2\2\'(\7\'\2\2()\7"+
		"\60\2\2)+\7\3\2\2*,\5\6\4\2+*\3\2\2\2+,\3\2\2\2,-\3\2\2\2-\60\7\4\2\2"+
		"./\7\5\2\2/\61\5\16\b\2\60.\3\2\2\2\60\61\3\2\2\2\61\62\3\2\2\2\62\63"+
		"\5\b\5\2\63\64\5\22\n\2\64\65\7(\2\2\65\5\3\2\2\2\66\67\7\60\2\2\678\7"+
		"\5\2\28?\5\f\7\29:\7\6\2\2:;\7\60\2\2;<\7\5\2\2<>\5\f\7\2=9\3\2\2\2>A"+
		"\3\2\2\2?=\3\2\2\2?@\3\2\2\2@\7\3\2\2\2A?\3\2\2\2BD\5\n\6\2CB\3\2\2\2"+
		"DG\3\2\2\2EC\3\2\2\2EF\3\2\2\2F\t\3\2\2\2GE\3\2\2\2HI\7\31\2\2IN\7\60"+
		"\2\2JK\7\6\2\2KM\7\60\2\2LJ\3\2\2\2MP\3\2\2\2NL\3\2\2\2NO\3\2\2\2OQ\3"+
		"\2\2\2PN\3\2\2\2QR\7\5\2\2RS\5\f\7\2S\13\3\2\2\2TW\5\16\b\2UW\5\36\20"+
		"\2VT\3\2\2\2VU\3\2\2\2W\r\3\2\2\2XY\t\2\2\2Y\17\3\2\2\2Z[\5\34\17\2[d"+
		"\7\3\2\2\\a\5\26\f\2]^\7\6\2\2^`\5\26\f\2_]\3\2\2\2`c\3\2\2\2a_\3\2\2"+
		"\2ab\3\2\2\2be\3\2\2\2ca\3\2\2\2d\\\3\2\2\2de\3\2\2\2ef\3\2\2\2fg\7\4"+
		"\2\2g\21\3\2\2\2hj\5\24\13\2ih\3\2\2\2jm\3\2\2\2ki\3\2\2\2kl\3\2\2\2l"+
		"\23\3\2\2\2mk\3\2\2\2no\5\32\16\2op\7\n\2\2pq\5\26\f\2qr\7\7\2\2r\u0097"+
		"\3\2\2\2st\7 \2\2tu\5\26\f\2uv\7!\2\2vy\5\22\n\2wx\7\"\2\2xz\5\22\n\2"+
		"yw\3\2\2\2yz\3\2\2\2z{\3\2\2\2{|\7#\2\2|\u0097\3\2\2\2}~\7$\2\2~\177\5"+
		"\26\f\2\177\u0080\7%\2\2\u0080\u0081\5\22\n\2\u0081\u0082\7&\2\2\u0082"+
		"\u0097\3\2\2\2\u0083\u0084\5\20\t\2\u0084\u0085\7\7\2\2\u0085\u0097\3"+
		"\2\2\2\u0086\u0087\7)\2\2\u0087\u0088\5\32\16\2\u0088\u0089\7\7\2\2\u0089"+
		"\u0097\3\2\2\2\u008a\u008b\7*\2\2\u008b\u008c\5\26\f\2\u008c\u008d\7\7"+
		"\2\2\u008d\u0097\3\2\2\2\u008e\u008f\7*\2\2\u008f\u0090\7\61\2\2\u0090"+
		"\u0097\7\7\2\2\u0091\u0093\7+\2\2\u0092\u0094\5\26\f\2\u0093\u0092\3\2"+
		"\2\2\u0093\u0094\3\2\2\2\u0094\u0095\3\2\2\2\u0095\u0097\7\7\2\2\u0096"+
		"n\3\2\2\2\u0096s\3\2\2\2\u0096}\3\2\2\2\u0096\u0083\3\2\2\2\u0096\u0086"+
		"\3\2\2\2\u0096\u008a\3\2\2\2\u0096\u008e\3\2\2\2\u0096\u0091\3\2\2\2\u0097"+
		"\25\3\2\2\2\u0098\u0099\b\f\1\2\u0099\u009a\t\3\2\2\u009a\u00ab\5\26\f"+
		"\r\u009b\u009c\7\23\2\2\u009c\u00ab\5\26\f\t\u009d\u009e\7\3\2\2\u009e"+
		"\u009f\5\26\f\2\u009f\u00a0\7\4\2\2\u00a0\u00ab\3\2\2\2\u00a1\u00ab\5"+
		"\30\r\2\u00a2\u00ab\5\20\t\2\u00a3\u00a8\5\34\17\2\u00a4\u00a5\7\b\2\2"+
		"\u00a5\u00a6\5\26\f\2\u00a6\u00a7\7\t\2\2\u00a7\u00a9\3\2\2\2\u00a8\u00a4"+
		"\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\u00ab\3\2\2\2\u00aa\u0098\3\2\2\2\u00aa"+
		"\u009b\3\2\2\2\u00aa\u009d\3\2\2\2\u00aa\u00a1\3\2\2\2\u00aa\u00a2\3\2"+
		"\2\2\u00aa\u00a3\3\2\2\2\u00ab\u00bd\3\2\2\2\u00ac\u00ad\f\f\2\2\u00ad"+
		"\u00ae\t\4\2\2\u00ae\u00bc\5\26\f\r\u00af\u00b0\f\13\2\2\u00b0\u00b1\t"+
		"\3\2\2\u00b1\u00bc\5\26\f\f\u00b2\u00b3\f\n\2\2\u00b3\u00b4\t\5\2\2\u00b4"+
		"\u00bc\5\26\f\13\u00b5\u00b6\f\b\2\2\u00b6\u00b7\7\21\2\2\u00b7\u00bc"+
		"\5\26\f\t\u00b8\u00b9\f\7\2\2\u00b9\u00ba\7\22\2\2\u00ba\u00bc\5\26\f"+
		"\b\u00bb\u00ac\3\2\2\2\u00bb\u00af\3\2\2\2\u00bb\u00b2\3\2\2\2\u00bb\u00b5"+
		"\3\2\2\2\u00bb\u00b8\3\2\2\2\u00bc\u00bf\3\2\2\2\u00bd\u00bb\3\2\2\2\u00bd"+
		"\u00be\3\2\2\2\u00be\27\3\2\2\2\u00bf\u00bd\3\2\2\2\u00c0\u00c1\t\6\2"+
		"\2\u00c1\31\3\2\2\2\u00c2\u00c7\5\34\17\2\u00c3\u00c4\7\b\2\2\u00c4\u00c5"+
		"\5\26\f\2\u00c5\u00c6\7\t\2\2\u00c6\u00c8\3\2\2\2\u00c7\u00c3\3\2\2\2"+
		"\u00c7\u00c8\3\2\2\2\u00c8\33\3\2\2\2\u00c9\u00ca\7\60\2\2\u00ca\35\3"+
		"\2\2\2\u00cb\u00cc\7\36\2\2\u00cc\u00cd\7\b\2\2\u00cd\u00ce\7,\2\2\u00ce"+
		"\u00cf\7\t\2\2\u00cf\u00d0\7\37\2\2\u00d0\u00d1\5\16\b\2\u00d1\37\3\2"+
		"\2\2\24#+\60?ENVadky\u0093\u0096\u00a8\u00aa\u00bb\u00bd\u00c7";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}