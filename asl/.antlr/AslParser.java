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
		RULE_variable_decl = 4, RULE_type = 5, RULE_basicType = 6, RULE_array = 7, 
		RULE_functionCall = 8, RULE_statements = 9, RULE_returnInst = 10, RULE_statement = 11, 
		RULE_elseCond = 12, RULE_expr = 13, RULE_value = 14, RULE_left_expr = 15, 
		RULE_ident_refer = 16, RULE_ident = 17;
	public static final String[] ruleNames = {
		"program", "function", "params", "declarations", "variable_decl", "type", 
		"basicType", "array", "functionCall", "statements", "returnInst", "statement", 
		"elseCond", "expr", "value", "left_expr", "ident_refer", "ident"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "':'", "','", "'['", "']'", "';'", "'='", "'=='", 
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
			setState(37); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(36);
				function();
				}
				}
				setState(39); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FUNC );
			setState(41);
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
		public TerminalNode ENDFUNC() { return getToken(AslParser.ENDFUNC, 0); }
		public BasicTypeContext basicType() {
			return getRuleContext(BasicTypeContext.class,0);
		}
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public ReturnInstContext returnInst() {
			return getRuleContext(ReturnInstContext.class,0);
		}
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
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
			setState(43);
			match(FUNC);
			setState(44);
			match(ID);
			setState(45);
			match(T__0);
			setState(47);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(46);
				params();
				}
			}

			setState(49);
			match(T__1);
			setState(59);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				{
				setState(50);
				match(T__2);
				setState(51);
				basicType();
				setState(52);
				declarations();
				setState(53);
				statements();
				setState(54);
				returnInst();
				}
				break;
			case VAR:
			case IF:
			case WHILE:
			case ENDFUNC:
			case READ:
			case WRITE:
			case RETURN:
			case ID:
				{
				setState(56);
				declarations();
				setState(57);
				statements();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(61);
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
			setState(63);
			match(ID);
			setState(64);
			match(T__2);
			setState(65);
			type();
			setState(72);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(66);
				match(T__3);
				setState(67);
				match(ID);
				setState(68);
				match(T__2);
				setState(69);
				type();
				}
				}
				setState(74);
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
			setState(78);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VAR) {
				{
				{
				setState(75);
				variable_decl();
				}
				}
				setState(80);
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
			setState(81);
			match(VAR);
			setState(82);
			match(ID);
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(83);
				match(T__3);
				setState(84);
				match(ID);
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(90);
			match(T__2);
			setState(91);
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
			setState(95);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case FLOAT:
			case CHAR:
			case BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(93);
				basicType();
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(94);
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
			setState(97);
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
		enterRule(_localctx, 14, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			match(ARRAY);
			setState(100);
			match(T__4);
			setState(101);
			match(INTVAL);
			setState(102);
			match(T__5);
			setState(103);
			match(OF);
			setState(104);
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
		enterRule(_localctx, 16, RULE_functionCall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			ident();
			setState(107);
			match(T__0);
			setState(116);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(108);
				expr(0);
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(109);
					match(T__3);
					setState(110);
					expr(0);
					}
					}
					setState(115);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(118);
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
		enterRule(_localctx, 18, RULE_statements);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(120);
					statement();
					}
					} 
				}
				setState(125);
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
			exitRule();
		}
		return _localctx;
	}

	public static class ReturnInstContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(AslParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnInstContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnInst; }
	}

	public final ReturnInstContext returnInst() throws RecognitionException {
		ReturnInstContext _localctx = new ReturnInstContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_returnInst);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(RETURN);
			setState(128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(127);
				expr(0);
				}
			}

			setState(130);
			match(T__6);
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
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode ENDIF() { return getToken(AslParser.ENDIF, 0); }
		public ElseCondContext elseCond() {
			return getRuleContext(ElseCondContext.class,0);
		}
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
		public ReturnInstContext returnInst() {
			return getRuleContext(ReturnInstContext.class,0);
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
		enterRule(_localctx, 22, RULE_statement);
		int _la;
		try {
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				_localctx = new AssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(132);
				left_expr();
				setState(133);
				match(ASSIGN);
				setState(134);
				expr(0);
				setState(135);
				match(T__6);
				}
				break;
			case 2:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				match(IF);
				setState(138);
				expr(0);
				setState(139);
				match(THEN);
				setState(140);
				statements();
				setState(142);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(141);
					elseCond();
					}
				}

				setState(144);
				match(ENDIF);
				}
				break;
			case 3:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(146);
				match(WHILE);
				setState(147);
				expr(0);
				setState(148);
				match(DO);
				setState(149);
				statements();
				setState(150);
				match(ENDWHILE);
				}
				break;
			case 4:
				_localctx = new ProcCallContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(152);
				functionCall();
				setState(153);
				match(T__6);
				}
				break;
			case 5:
				_localctx = new ReadStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(155);
				match(READ);
				setState(156);
				left_expr();
				setState(157);
				match(T__6);
				}
				break;
			case 6:
				_localctx = new WriteExprContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(159);
				match(WRITE);
				setState(160);
				expr(0);
				setState(161);
				match(T__6);
				}
				break;
			case 7:
				_localctx = new WriteStringContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(163);
				match(WRITE);
				setState(164);
				match(STRING);
				setState(165);
				match(T__6);
				}
				break;
			case 8:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(166);
				returnInst();
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

	public static class ElseCondContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(AslParser.ELSE, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public ElseCondContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseCond; }
	}

	public final ElseCondContext elseCond() throws RecognitionException {
		ElseCondContext _localctx = new ElseCondContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_elseCond);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(169);
			match(ELSE);
			setState(170);
			statements();
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
		public Ident_referContext ident_refer() {
			return getRuleContext(Ident_referContext.class,0);
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				_localctx = new UnaryArithmeticExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(173);
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
				setState(174);
				expr(11);
				}
				break;
			case 2:
				{
				_localctx = new UnaryBooleanExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(175);
				((UnaryBooleanExprContext)_localctx).op = match(NOT);
				setState(176);
				expr(7);
				}
				break;
			case 3:
				{
				_localctx = new SubExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(177);
				match(T__0);
				setState(178);
				expr(0);
				setState(179);
				match(T__1);
				}
				break;
			case 4:
				{
				_localctx = new ValueExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(181);
				value();
				}
				break;
			case 5:
				{
				_localctx = new ProcCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(182);
				functionCall();
				}
				break;
			case 6:
				{
				_localctx = new IdentExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(183);
				ident_refer();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(203);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(201);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(186);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(187);
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
						setState(188);
						expr(11);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(189);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(190);
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
						setState(191);
						expr(10);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(192);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(193);
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
						setState(194);
						expr(9);
						}
						break;
					case 4:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(195);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(196);
						((BooleanExprContext)_localctx).op = match(AND);
						setState(197);
						expr(7);
						}
						break;
					case 5:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(198);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(199);
						((BooleanExprContext)_localctx).op = match(OR);
						setState(200);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(205);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
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
		enterRule(_localctx, 28, RULE_value);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
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
		public Ident_referContext ident_refer() {
			return getRuleContext(Ident_referContext.class,0);
		}
		public Left_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_left_expr; }
	}

	public final Left_exprContext left_expr() throws RecognitionException {
		Left_exprContext _localctx = new Left_exprContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_left_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			ident_refer();
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

	public static class Ident_referContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Ident_referContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident_refer; }
	}

	public final Ident_referContext ident_refer() throws RecognitionException {
		Ident_referContext _localctx = new Ident_referContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_ident_refer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			ident();
			setState(215);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(211);
				match(T__4);
				setState(212);
				expr(0);
				setState(213);
				match(T__5);
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

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 13:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\63\u00de\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\6\2(\n\2\r\2\16\2)\3\2\3\2\3\3\3\3\3\3\3\3\5\3\62\n\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3>\n\3\3\3\3\3\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\7\4I\n\4\f\4\16\4L\13\4\3\5\7\5O\n\5\f\5\16\5R\13\5\3\6"+
		"\3\6\3\6\3\6\7\6X\n\6\f\6\16\6[\13\6\3\6\3\6\3\6\3\7\3\7\5\7b\n\7\3\b"+
		"\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\7\nr\n\n\f\n\16\n"+
		"u\13\n\5\nw\n\n\3\n\3\n\3\13\7\13|\n\13\f\13\16\13\177\13\13\3\f\3\f\5"+
		"\f\u0083\n\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0091"+
		"\n\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u00aa\n\r\3\16\3\16\3\16\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00bb\n\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17"+
		"\u00cc\n\17\f\17\16\17\u00cf\13\17\3\20\3\20\3\21\3\21\3\22\3\22\3\22"+
		"\3\22\3\22\5\22\u00da\n\22\3\23\3\23\3\23\2\3\34\24\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\32\34\36 \"$\2\7\3\2\32\35\4\2\24\24\27\27\4\2\25\26\30\30"+
		"\3\2\13\20\3\2,/\2\u00e9\2\'\3\2\2\2\4-\3\2\2\2\6A\3\2\2\2\bP\3\2\2\2"+
		"\nS\3\2\2\2\fa\3\2\2\2\16c\3\2\2\2\20e\3\2\2\2\22l\3\2\2\2\24}\3\2\2\2"+
		"\26\u0080\3\2\2\2\30\u00a9\3\2\2\2\32\u00ab\3\2\2\2\34\u00ba\3\2\2\2\36"+
		"\u00d0\3\2\2\2 \u00d2\3\2\2\2\"\u00d4\3\2\2\2$\u00db\3\2\2\2&(\5\4\3\2"+
		"\'&\3\2\2\2()\3\2\2\2)\'\3\2\2\2)*\3\2\2\2*+\3\2\2\2+,\7\2\2\3,\3\3\2"+
		"\2\2-.\7\'\2\2./\7\60\2\2/\61\7\3\2\2\60\62\5\6\4\2\61\60\3\2\2\2\61\62"+
		"\3\2\2\2\62\63\3\2\2\2\63=\7\4\2\2\64\65\7\5\2\2\65\66\5\16\b\2\66\67"+
		"\5\b\5\2\678\5\24\13\289\5\26\f\29>\3\2\2\2:;\5\b\5\2;<\5\24\13\2<>\3"+
		"\2\2\2=\64\3\2\2\2=:\3\2\2\2>?\3\2\2\2?@\7(\2\2@\5\3\2\2\2AB\7\60\2\2"+
		"BC\7\5\2\2CJ\5\f\7\2DE\7\6\2\2EF\7\60\2\2FG\7\5\2\2GI\5\f\7\2HD\3\2\2"+
		"\2IL\3\2\2\2JH\3\2\2\2JK\3\2\2\2K\7\3\2\2\2LJ\3\2\2\2MO\5\n\6\2NM\3\2"+
		"\2\2OR\3\2\2\2PN\3\2\2\2PQ\3\2\2\2Q\t\3\2\2\2RP\3\2\2\2ST\7\31\2\2TY\7"+
		"\60\2\2UV\7\6\2\2VX\7\60\2\2WU\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z"+
		"\\\3\2\2\2[Y\3\2\2\2\\]\7\5\2\2]^\5\f\7\2^\13\3\2\2\2_b\5\16\b\2`b\5\20"+
		"\t\2a_\3\2\2\2a`\3\2\2\2b\r\3\2\2\2cd\t\2\2\2d\17\3\2\2\2ef\7\36\2\2f"+
		"g\7\7\2\2gh\7,\2\2hi\7\b\2\2ij\7\37\2\2jk\5\16\b\2k\21\3\2\2\2lm\5$\23"+
		"\2mv\7\3\2\2ns\5\34\17\2op\7\6\2\2pr\5\34\17\2qo\3\2\2\2ru\3\2\2\2sq\3"+
		"\2\2\2st\3\2\2\2tw\3\2\2\2us\3\2\2\2vn\3\2\2\2vw\3\2\2\2wx\3\2\2\2xy\7"+
		"\4\2\2y\23\3\2\2\2z|\5\30\r\2{z\3\2\2\2|\177\3\2\2\2}{\3\2\2\2}~\3\2\2"+
		"\2~\25\3\2\2\2\177}\3\2\2\2\u0080\u0082\7+\2\2\u0081\u0083\5\34\17\2\u0082"+
		"\u0081\3\2\2\2\u0082\u0083\3\2\2\2\u0083\u0084\3\2\2\2\u0084\u0085\7\t"+
		"\2\2\u0085\27\3\2\2\2\u0086\u0087\5 \21\2\u0087\u0088\7\n\2\2\u0088\u0089"+
		"\5\34\17\2\u0089\u008a\7\t\2\2\u008a\u00aa\3\2\2\2\u008b\u008c\7 \2\2"+
		"\u008c\u008d\5\34\17\2\u008d\u008e\7!\2\2\u008e\u0090\5\24\13\2\u008f"+
		"\u0091\5\32\16\2\u0090\u008f\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0092\3"+
		"\2\2\2\u0092\u0093\7#\2\2\u0093\u00aa\3\2\2\2\u0094\u0095\7$\2\2\u0095"+
		"\u0096\5\34\17\2\u0096\u0097\7%\2\2\u0097\u0098\5\24\13\2\u0098\u0099"+
		"\7&\2\2\u0099\u00aa\3\2\2\2\u009a\u009b\5\22\n\2\u009b\u009c\7\t\2\2\u009c"+
		"\u00aa\3\2\2\2\u009d\u009e\7)\2\2\u009e\u009f\5 \21\2\u009f\u00a0\7\t"+
		"\2\2\u00a0\u00aa\3\2\2\2\u00a1\u00a2\7*\2\2\u00a2\u00a3\5\34\17\2\u00a3"+
		"\u00a4\7\t\2\2\u00a4\u00aa\3\2\2\2\u00a5\u00a6\7*\2\2\u00a6\u00a7\7\61"+
		"\2\2\u00a7\u00aa\7\t\2\2\u00a8\u00aa\5\26\f\2\u00a9\u0086\3\2\2\2\u00a9"+
		"\u008b\3\2\2\2\u00a9\u0094\3\2\2\2\u00a9\u009a\3\2\2\2\u00a9\u009d\3\2"+
		"\2\2\u00a9\u00a1\3\2\2\2\u00a9\u00a5\3\2\2\2\u00a9\u00a8\3\2\2\2\u00aa"+
		"\31\3\2\2\2\u00ab\u00ac\7\"\2\2\u00ac\u00ad\5\24\13\2\u00ad\33\3\2\2\2"+
		"\u00ae\u00af\b\17\1\2\u00af\u00b0\t\3\2\2\u00b0\u00bb\5\34\17\r\u00b1"+
		"\u00b2\7\23\2\2\u00b2\u00bb\5\34\17\t\u00b3\u00b4\7\3\2\2\u00b4\u00b5"+
		"\5\34\17\2\u00b5\u00b6\7\4\2\2\u00b6\u00bb\3\2\2\2\u00b7\u00bb\5\36\20"+
		"\2\u00b8\u00bb\5\22\n\2\u00b9\u00bb\5\"\22\2\u00ba\u00ae\3\2\2\2\u00ba"+
		"\u00b1\3\2\2\2\u00ba\u00b3\3\2\2\2\u00ba\u00b7\3\2\2\2\u00ba\u00b8\3\2"+
		"\2\2\u00ba\u00b9\3\2\2\2\u00bb\u00cd\3\2\2\2\u00bc\u00bd\f\f\2\2\u00bd"+
		"\u00be\t\4\2\2\u00be\u00cc\5\34\17\r\u00bf\u00c0\f\13\2\2\u00c0\u00c1"+
		"\t\3\2\2\u00c1\u00cc\5\34\17\f\u00c2\u00c3\f\n\2\2\u00c3\u00c4\t\5\2\2"+
		"\u00c4\u00cc\5\34\17\13\u00c5\u00c6\f\b\2\2\u00c6\u00c7\7\21\2\2\u00c7"+
		"\u00cc\5\34\17\t\u00c8\u00c9\f\7\2\2\u00c9\u00ca\7\22\2\2\u00ca\u00cc"+
		"\5\34\17\b\u00cb\u00bc\3\2\2\2\u00cb\u00bf\3\2\2\2\u00cb\u00c2\3\2\2\2"+
		"\u00cb\u00c5\3\2\2\2\u00cb\u00c8\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb"+
		"\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\35\3\2\2\2\u00cf\u00cd\3\2\2\2\u00d0"+
		"\u00d1\t\6\2\2\u00d1\37\3\2\2\2\u00d2\u00d3\5\"\22\2\u00d3!\3\2\2\2\u00d4"+
		"\u00d9\5$\23\2\u00d5\u00d6\7\7\2\2\u00d6\u00d7\5\34\17\2\u00d7\u00d8\7"+
		"\b\2\2\u00d8\u00da\3\2\2\2\u00d9\u00d5\3\2\2\2\u00d9\u00da\3\2\2\2\u00da"+
		"#\3\2\2\2\u00db\u00dc\7\60\2\2\u00dc%\3\2\2\2\23)\61=JPYasv}\u0082\u0090"+
		"\u00a9\u00ba\u00cb\u00cd\u00d9";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}