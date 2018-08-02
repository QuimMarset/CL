// Generated from /home/quim/CL/Examen Lab 2/Projecte Modif/asl/Asl.g4 by ANTLR 4.7.1
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
		FUNC=37, ENDFUNC=38, READ=39, WRITE=40, RETURN=41, REPEAT=42, UNTIL=43, 
		ENDREPEAT=44, POWER=45, SWITCH=46, CASE=47, DEFAULT=48, ENDSWITCH=49, 
		INTVAL=50, FLOATVAL=51, BOOLVAL=52, CHARVAL=53, ID=54, STRING=55, COMMENT=56, 
		WS=57;
	public static final int
		RULE_program = 0, RULE_function = 1, RULE_params = 2, RULE_declarations = 3, 
		RULE_variable_decl = 4, RULE_type = 5, RULE_basicType = 6, RULE_array = 7, 
		RULE_functionCall = 8, RULE_statements = 9, RULE_returnInst = 10, RULE_statement = 11, 
		RULE_elseCond = 12, RULE_multi_id = 13, RULE_multi_expr = 14, RULE_caseVal = 15, 
		RULE_defaultCase = 16, RULE_expr = 17, RULE_value = 18, RULE_left_expr = 19, 
		RULE_ident_refer = 20, RULE_ident = 21;
	public static final String[] ruleNames = {
		"program", "function", "params", "declarations", "variable_decl", "type", 
		"basicType", "array", "functionCall", "statements", "returnInst", "statement", 
		"elseCond", "multi_id", "multi_expr", "caseVal", "defaultCase", "expr", 
		"value", "left_expr", "ident_refer", "ident"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "':'", "','", "'['", "']'", "';'", "'='", "'=='", 
		"'!='", "'>'", "'<'", "'>='", "'<='", "'and'", "'or'", "'not'", "'+'", 
		"'*'", "'/'", "'-'", "'%'", "'var'", "'int'", "'float'", "'char'", "'bool'", 
		"'array'", "'of'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", 
		"'endwhile'", "'func'", "'endfunc'", "'read'", "'write'", "'return'", 
		"'repeat'", "'until'", "'endrepeat'", "'^'", "'switch'", "'case'", "'default'", 
		"'endswitch'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, "ASSIGN", "EQ", "NEQ", 
		"GT", "LT", "GET", "LET", "AND", "OR", "NOT", "PLUS", "MUL", "DIV", "MINUS", 
		"MOD", "VAR", "INT", "FLOAT", "CHAR", "BOOL", "ARRAY", "OF", "IF", "THEN", 
		"ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FUNC", "ENDFUNC", "READ", 
		"WRITE", "RETURN", "REPEAT", "UNTIL", "ENDREPEAT", "POWER", "SWITCH", 
		"CASE", "DEFAULT", "ENDSWITCH", "INTVAL", "FLOATVAL", "BOOLVAL", "CHARVAL", 
		"ID", "STRING", "COMMENT", "WS"
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
			setState(45); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(44);
				function();
				}
				}
				setState(47); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FUNC );
			setState(49);
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
			setState(51);
			match(FUNC);
			setState(52);
			match(ID);
			setState(53);
			match(T__0);
			setState(55);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(54);
				params();
				}
			}

			setState(57);
			match(T__1);
			setState(67);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				{
				setState(58);
				match(T__2);
				setState(59);
				basicType();
				setState(60);
				declarations();
				setState(61);
				statements();
				setState(62);
				returnInst();
				}
				break;
			case T__4:
			case VAR:
			case IF:
			case WHILE:
			case ENDFUNC:
			case READ:
			case WRITE:
			case RETURN:
			case REPEAT:
			case SWITCH:
			case ID:
				{
				setState(64);
				declarations();
				setState(65);
				statements();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(69);
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
			setState(71);
			match(ID);
			setState(72);
			match(T__2);
			setState(73);
			type();
			setState(80);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(74);
				match(T__3);
				setState(75);
				match(ID);
				setState(76);
				match(T__2);
				setState(77);
				type();
				}
				}
				setState(82);
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
			setState(86);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VAR) {
				{
				{
				setState(83);
				variable_decl();
				}
				}
				setState(88);
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
			setState(89);
			match(VAR);
			setState(90);
			match(ID);
			setState(95);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(91);
				match(T__3);
				setState(92);
				match(ID);
				}
				}
				setState(97);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(98);
			match(T__2);
			setState(99);
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
			setState(103);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case FLOAT:
			case CHAR:
			case BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(101);
				basicType();
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(102);
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
			setState(105);
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
			setState(107);
			match(ARRAY);
			setState(108);
			match(T__4);
			setState(109);
			match(INTVAL);
			setState(110);
			match(T__5);
			setState(111);
			match(OF);
			setState(112);
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
			setState(114);
			ident();
			setState(115);
			match(T__0);
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(116);
				expr(0);
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(117);
					match(T__3);
					setState(118);
					expr(0);
					}
					}
					setState(123);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(126);
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
			setState(131);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(128);
					statement();
					}
					} 
				}
				setState(133);
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
			setState(134);
			match(RETURN);
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << NOT) | (1L << PLUS) | (1L << MINUS) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << BOOLVAL) | (1L << CHARVAL) | (1L << ID))) != 0)) {
				{
				setState(135);
				expr(0);
				}
			}

			setState(138);
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
	public static class SwitchStmtContext extends StatementContext {
		public TerminalNode SWITCH() { return getToken(AslParser.SWITCH, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ENDSWITCH() { return getToken(AslParser.ENDSWITCH, 0); }
		public List<CaseValContext> caseVal() {
			return getRuleContexts(CaseValContext.class);
		}
		public CaseValContext caseVal(int i) {
			return getRuleContext(CaseValContext.class,i);
		}
		public DefaultCaseContext defaultCase() {
			return getRuleContext(DefaultCaseContext.class,0);
		}
		public SwitchStmtContext(StatementContext ctx) { copyFrom(ctx); }
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
	public static class FunctionCallStmtContext extends StatementContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public FunctionCallStmtContext(StatementContext ctx) { copyFrom(ctx); }
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
	public static class RepeatStmtContext extends StatementContext {
		public TerminalNode REPEAT() { return getToken(AslParser.REPEAT, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(AslParser.UNTIL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ENDREPEAT() { return getToken(AslParser.ENDREPEAT, 0); }
		public RepeatStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class MultiAssignStmtContext extends StatementContext {
		public Multi_idContext multi_id() {
			return getRuleContext(Multi_idContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(AslParser.ASSIGN, 0); }
		public Multi_exprContext multi_expr() {
			return getRuleContext(Multi_exprContext.class,0);
		}
		public MultiAssignStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_statement);
		int _la;
		try {
			setState(217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				_localctx = new AssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(140);
				left_expr();
				setState(141);
				match(ASSIGN);
				setState(142);
				expr(0);
				setState(143);
				match(T__6);
				}
				break;
			case 2:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(145);
				match(IF);
				setState(146);
				expr(0);
				setState(147);
				match(THEN);
				setState(148);
				statements();
				setState(150);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(149);
					elseCond();
					}
				}

				setState(152);
				match(ENDIF);
				}
				break;
			case 3:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				match(WHILE);
				setState(155);
				expr(0);
				setState(156);
				match(DO);
				setState(157);
				statements();
				setState(158);
				match(ENDWHILE);
				}
				break;
			case 4:
				_localctx = new RepeatStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(160);
				match(REPEAT);
				setState(161);
				statements();
				setState(162);
				match(UNTIL);
				setState(163);
				expr(0);
				setState(164);
				match(ENDREPEAT);
				}
				break;
			case 5:
				_localctx = new FunctionCallStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(166);
				functionCall();
				setState(167);
				match(T__6);
				}
				break;
			case 6:
				_localctx = new ReadStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(169);
				match(READ);
				setState(170);
				left_expr();
				setState(171);
				match(T__6);
				}
				break;
			case 7:
				_localctx = new WriteExprContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(173);
				match(WRITE);
				setState(174);
				expr(0);
				setState(175);
				match(T__6);
				}
				break;
			case 8:
				_localctx = new WriteStringContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(177);
				match(WRITE);
				setState(178);
				match(STRING);
				setState(179);
				match(T__6);
				}
				break;
			case 9:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(180);
				returnInst();
				}
				break;
			case 10:
				_localctx = new MultiAssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(181);
				match(T__4);
				setState(182);
				multi_id();
				setState(183);
				match(T__5);
				setState(184);
				match(ASSIGN);
				setState(185);
				match(T__4);
				setState(186);
				multi_expr();
				setState(187);
				match(T__5);
				setState(188);
				match(T__6);
				}
				break;
			case 11:
				_localctx = new SwitchStmtContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(190);
				match(SWITCH);
				setState(191);
				match(T__0);
				setState(192);
				expr(0);
				setState(193);
				match(T__1);
				setState(195); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(194);
					caseVal();
					}
					}
					setState(197); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==CASE );
				setState(200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DEFAULT) {
					{
					setState(199);
					defaultCase();
					}
				}

				setState(202);
				match(ENDSWITCH);
				}
				break;
			case 12:
				_localctx = new SwitchStmtContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(204);
				match(SWITCH);
				setState(205);
				match(T__0);
				setState(206);
				expr(0);
				setState(207);
				match(T__1);
				setState(211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==CASE) {
					{
					{
					setState(208);
					caseVal();
					}
					}
					setState(213);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(214);
				defaultCase();
				setState(215);
				match(ENDSWITCH);
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
			setState(219);
			match(ELSE);
			setState(220);
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

	public static class Multi_idContext extends ParserRuleContext {
		public List<Left_exprContext> left_expr() {
			return getRuleContexts(Left_exprContext.class);
		}
		public Left_exprContext left_expr(int i) {
			return getRuleContext(Left_exprContext.class,i);
		}
		public Multi_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multi_id; }
	}

	public final Multi_idContext multi_id() throws RecognitionException {
		Multi_idContext _localctx = new Multi_idContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_multi_id);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			left_expr();
			setState(227);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(223);
				match(T__3);
				setState(224);
				left_expr();
				}
				}
				setState(229);
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

	public static class Multi_exprContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Multi_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multi_expr; }
	}

	public final Multi_exprContext multi_expr() throws RecognitionException {
		Multi_exprContext _localctx = new Multi_exprContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_multi_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			expr(0);
			setState(235);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(231);
				match(T__3);
				setState(232);
				expr(0);
				}
				}
				setState(237);
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

	public static class CaseValContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(AslParser.CASE, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public CaseValContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caseVal; }
	}

	public final CaseValContext caseVal() throws RecognitionException {
		CaseValContext _localctx = new CaseValContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_caseVal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			match(CASE);
			setState(239);
			value();
			setState(240);
			match(T__2);
			setState(241);
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

	public static class DefaultCaseContext extends ParserRuleContext {
		public TerminalNode DEFAULT() { return getToken(AslParser.DEFAULT, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public DefaultCaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defaultCase; }
	}

	public final DefaultCaseContext defaultCase() throws RecognitionException {
		DefaultCaseContext _localctx = new DefaultCaseContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_defaultCase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(243);
			match(DEFAULT);
			setState(244);
			match(T__2);
			setState(245);
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
	public static class UnaryExprContext extends ExprContext {
		public Token op;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NOT() { return getToken(AslParser.NOT, 0); }
		public TerminalNode MINUS() { return getToken(AslParser.MINUS, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public UnaryExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ValueExprContext extends ExprContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PowerExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode POWER() { return getToken(AslParser.POWER, 0); }
		public PowerExprContext(ExprContext ctx) { copyFrom(ctx); }
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
	public static class FunctionCallExprContext extends ExprContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public FunctionCallExprContext(ExprContext ctx) { copyFrom(ctx); }
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
		int _startState = 34;
		enterRecursionRule(_localctx, 34, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				_localctx = new UnaryExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(248);
				((UnaryExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << NOT) | (1L << PLUS) | (1L << MINUS))) != 0)) ) {
					((UnaryExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(249);
				expr(11);
				}
				break;
			case 2:
				{
				_localctx = new SubExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(250);
				match(T__0);
				setState(251);
				expr(0);
				setState(252);
				match(T__1);
				}
				break;
			case 3:
				{
				_localctx = new ValueExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(254);
				value();
				}
				break;
			case 4:
				{
				_localctx = new FunctionCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(255);
				functionCall();
				}
				break;
			case 5:
				{
				_localctx = new IdentExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(256);
				ident_refer();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(279);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(277);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						_localctx = new PowerExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(259);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(260);
						((PowerExprContext)_localctx).op = match(POWER);
						setState(261);
						expr(11);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(262);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(263);
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
						setState(264);
						expr(10);
						}
						break;
					case 3:
						{
						_localctx = new ArithmeticExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(265);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(266);
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
						setState(267);
						expr(9);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(268);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(269);
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
						setState(270);
						expr(8);
						}
						break;
					case 5:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(271);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(272);
						((BooleanExprContext)_localctx).op = match(AND);
						setState(273);
						expr(7);
						}
						break;
					case 6:
						{
						_localctx = new BooleanExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(274);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(275);
						((BooleanExprContext)_localctx).op = match(OR);
						setState(276);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(281);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
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
		enterRule(_localctx, 36, RULE_value);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
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
		enterRule(_localctx, 38, RULE_left_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
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
		enterRule(_localctx, 40, RULE_ident_refer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(286);
			ident();
			setState(291);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(287);
				match(T__4);
				setState(288);
				expr(0);
				setState(289);
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
		enterRule(_localctx, 42, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(293);
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
		case 17:
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
			return precpred(_ctx, 7);
		case 4:
			return precpred(_ctx, 6);
		case 5:
			return precpred(_ctx, 5);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3;\u012a\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\6\2\60\n\2\r\2"+
		"\16\2\61\3\2\3\2\3\3\3\3\3\3\3\3\5\3:\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\5\3F\n\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\7\4Q\n\4\f\4"+
		"\16\4T\13\4\3\5\7\5W\n\5\f\5\16\5Z\13\5\3\6\3\6\3\6\3\6\7\6`\n\6\f\6\16"+
		"\6c\13\6\3\6\3\6\3\6\3\7\3\7\5\7j\n\7\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\3\n\7\nz\n\n\f\n\16\n}\13\n\5\n\177\n\n\3\n\3\n\3"+
		"\13\7\13\u0084\n\13\f\13\16\13\u0087\13\13\3\f\3\f\5\f\u008b\n\f\3\f\3"+
		"\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0099\n\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\6\r\u00c6\n\r\r\r\16\r\u00c7\3\r\5\r\u00cb\n\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u00d4\n\r\f\r\16\r\u00d7\13\r\3\r\3\r\3\r"+
		"\5\r\u00dc\n\r\3\16\3\16\3\16\3\17\3\17\3\17\7\17\u00e4\n\17\f\17\16\17"+
		"\u00e7\13\17\3\20\3\20\3\20\7\20\u00ec\n\20\f\20\16\20\u00ef\13\20\3\21"+
		"\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\5\23\u0104\n\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\7\23\u0118\n\23"+
		"\f\23\16\23\u011b\13\23\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\26\3\26\5"+
		"\26\u0126\n\26\3\27\3\27\3\27\2\3$\30\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(*,\2\b\3\2\32\35\4\2\23\24\27\27\4\2\25\26\30\30\4\2\24\24"+
		"\27\27\3\2\13\20\3\2\64\67\2\u013a\2/\3\2\2\2\4\65\3\2\2\2\6I\3\2\2\2"+
		"\bX\3\2\2\2\n[\3\2\2\2\fi\3\2\2\2\16k\3\2\2\2\20m\3\2\2\2\22t\3\2\2\2"+
		"\24\u0085\3\2\2\2\26\u0088\3\2\2\2\30\u00db\3\2\2\2\32\u00dd\3\2\2\2\34"+
		"\u00e0\3\2\2\2\36\u00e8\3\2\2\2 \u00f0\3\2\2\2\"\u00f5\3\2\2\2$\u0103"+
		"\3\2\2\2&\u011c\3\2\2\2(\u011e\3\2\2\2*\u0120\3\2\2\2,\u0127\3\2\2\2."+
		"\60\5\4\3\2/.\3\2\2\2\60\61\3\2\2\2\61/\3\2\2\2\61\62\3\2\2\2\62\63\3"+
		"\2\2\2\63\64\7\2\2\3\64\3\3\2\2\2\65\66\7\'\2\2\66\67\78\2\2\679\7\3\2"+
		"\28:\5\6\4\298\3\2\2\29:\3\2\2\2:;\3\2\2\2;E\7\4\2\2<=\7\5\2\2=>\5\16"+
		"\b\2>?\5\b\5\2?@\5\24\13\2@A\5\26\f\2AF\3\2\2\2BC\5\b\5\2CD\5\24\13\2"+
		"DF\3\2\2\2E<\3\2\2\2EB\3\2\2\2FG\3\2\2\2GH\7(\2\2H\5\3\2\2\2IJ\78\2\2"+
		"JK\7\5\2\2KR\5\f\7\2LM\7\6\2\2MN\78\2\2NO\7\5\2\2OQ\5\f\7\2PL\3\2\2\2"+
		"QT\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\7\3\2\2\2TR\3\2\2\2UW\5\n\6\2VU\3\2\2"+
		"\2WZ\3\2\2\2XV\3\2\2\2XY\3\2\2\2Y\t\3\2\2\2ZX\3\2\2\2[\\\7\31\2\2\\a\7"+
		"8\2\2]^\7\6\2\2^`\78\2\2_]\3\2\2\2`c\3\2\2\2a_\3\2\2\2ab\3\2\2\2bd\3\2"+
		"\2\2ca\3\2\2\2de\7\5\2\2ef\5\f\7\2f\13\3\2\2\2gj\5\16\b\2hj\5\20\t\2i"+
		"g\3\2\2\2ih\3\2\2\2j\r\3\2\2\2kl\t\2\2\2l\17\3\2\2\2mn\7\36\2\2no\7\7"+
		"\2\2op\7\64\2\2pq\7\b\2\2qr\7\37\2\2rs\5\16\b\2s\21\3\2\2\2tu\5,\27\2"+
		"u~\7\3\2\2v{\5$\23\2wx\7\6\2\2xz\5$\23\2yw\3\2\2\2z}\3\2\2\2{y\3\2\2\2"+
		"{|\3\2\2\2|\177\3\2\2\2}{\3\2\2\2~v\3\2\2\2~\177\3\2\2\2\177\u0080\3\2"+
		"\2\2\u0080\u0081\7\4\2\2\u0081\23\3\2\2\2\u0082\u0084\5\30\r\2\u0083\u0082"+
		"\3\2\2\2\u0084\u0087\3\2\2\2\u0085\u0083\3\2\2\2\u0085\u0086\3\2\2\2\u0086"+
		"\25\3\2\2\2\u0087\u0085\3\2\2\2\u0088\u008a\7+\2\2\u0089\u008b\5$\23\2"+
		"\u008a\u0089\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008d"+
		"\7\t\2\2\u008d\27\3\2\2\2\u008e\u008f\5(\25\2\u008f\u0090\7\n\2\2\u0090"+
		"\u0091\5$\23\2\u0091\u0092\7\t\2\2\u0092\u00dc\3\2\2\2\u0093\u0094\7 "+
		"\2\2\u0094\u0095\5$\23\2\u0095\u0096\7!\2\2\u0096\u0098\5\24\13\2\u0097"+
		"\u0099\5\32\16\2\u0098\u0097\3\2\2\2\u0098\u0099\3\2\2\2\u0099\u009a\3"+
		"\2\2\2\u009a\u009b\7#\2\2\u009b\u00dc\3\2\2\2\u009c\u009d\7$\2\2\u009d"+
		"\u009e\5$\23\2\u009e\u009f\7%\2\2\u009f\u00a0\5\24\13\2\u00a0\u00a1\7"+
		"&\2\2\u00a1\u00dc\3\2\2\2\u00a2\u00a3\7,\2\2\u00a3\u00a4\5\24\13\2\u00a4"+
		"\u00a5\7-\2\2\u00a5\u00a6\5$\23\2\u00a6\u00a7\7.\2\2\u00a7\u00dc\3\2\2"+
		"\2\u00a8\u00a9\5\22\n\2\u00a9\u00aa\7\t\2\2\u00aa\u00dc\3\2\2\2\u00ab"+
		"\u00ac\7)\2\2\u00ac\u00ad\5(\25\2\u00ad\u00ae\7\t\2\2\u00ae\u00dc\3\2"+
		"\2\2\u00af\u00b0\7*\2\2\u00b0\u00b1\5$\23\2\u00b1\u00b2\7\t\2\2\u00b2"+
		"\u00dc\3\2\2\2\u00b3\u00b4\7*\2\2\u00b4\u00b5\79\2\2\u00b5\u00dc\7\t\2"+
		"\2\u00b6\u00dc\5\26\f\2\u00b7\u00b8\7\7\2\2\u00b8\u00b9\5\34\17\2\u00b9"+
		"\u00ba\7\b\2\2\u00ba\u00bb\7\n\2\2\u00bb\u00bc\7\7\2\2\u00bc\u00bd\5\36"+
		"\20\2\u00bd\u00be\7\b\2\2\u00be\u00bf\7\t\2\2\u00bf\u00dc\3\2\2\2\u00c0"+
		"\u00c1\7\60\2\2\u00c1\u00c2\7\3\2\2\u00c2\u00c3\5$\23\2\u00c3\u00c5\7"+
		"\4\2\2\u00c4\u00c6\5 \21\2\u00c5\u00c4\3\2\2\2\u00c6\u00c7\3\2\2\2\u00c7"+
		"\u00c5\3\2\2\2\u00c7\u00c8\3\2\2\2\u00c8\u00ca\3\2\2\2\u00c9\u00cb\5\""+
		"\22\2\u00ca\u00c9\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\u00cc\3\2\2\2\u00cc"+
		"\u00cd\7\63\2\2\u00cd\u00dc\3\2\2\2\u00ce\u00cf\7\60\2\2\u00cf\u00d0\7"+
		"\3\2\2\u00d0\u00d1\5$\23\2\u00d1\u00d5\7\4\2\2\u00d2\u00d4\5 \21\2\u00d3"+
		"\u00d2\3\2\2\2\u00d4\u00d7\3\2\2\2\u00d5\u00d3\3\2\2\2\u00d5\u00d6\3\2"+
		"\2\2\u00d6\u00d8\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d8\u00d9\5\"\22\2\u00d9"+
		"\u00da\7\63\2\2\u00da\u00dc\3\2\2\2\u00db\u008e\3\2\2\2\u00db\u0093\3"+
		"\2\2\2\u00db\u009c\3\2\2\2\u00db\u00a2\3\2\2\2\u00db\u00a8\3\2\2\2\u00db"+
		"\u00ab\3\2\2\2\u00db\u00af\3\2\2\2\u00db\u00b3\3\2\2\2\u00db\u00b6\3\2"+
		"\2\2\u00db\u00b7\3\2\2\2\u00db\u00c0\3\2\2\2\u00db\u00ce\3\2\2\2\u00dc"+
		"\31\3\2\2\2\u00dd\u00de\7\"\2\2\u00de\u00df\5\24\13\2\u00df\33\3\2\2\2"+
		"\u00e0\u00e5\5(\25\2\u00e1\u00e2\7\6\2\2\u00e2\u00e4\5(\25\2\u00e3\u00e1"+
		"\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6"+
		"\35\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00ed\5$\23\2\u00e9\u00ea\7\6\2"+
		"\2\u00ea\u00ec\5$\23\2\u00eb\u00e9\3\2\2\2\u00ec\u00ef\3\2\2\2\u00ed\u00eb"+
		"\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee\37\3\2\2\2\u00ef\u00ed\3\2\2\2\u00f0"+
		"\u00f1\7\61\2\2\u00f1\u00f2\5&\24\2\u00f2\u00f3\7\5\2\2\u00f3\u00f4\5"+
		"\24\13\2\u00f4!\3\2\2\2\u00f5\u00f6\7\62\2\2\u00f6\u00f7\7\5\2\2\u00f7"+
		"\u00f8\5\24\13\2\u00f8#\3\2\2\2\u00f9\u00fa\b\23\1\2\u00fa\u00fb\t\3\2"+
		"\2\u00fb\u0104\5$\23\r\u00fc\u00fd\7\3\2\2\u00fd\u00fe\5$\23\2\u00fe\u00ff"+
		"\7\4\2\2\u00ff\u0104\3\2\2\2\u0100\u0104\5&\24\2\u0101\u0104\5\22\n\2"+
		"\u0102\u0104\5*\26\2\u0103\u00f9\3\2\2\2\u0103\u00fc\3\2\2\2\u0103\u0100"+
		"\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0102\3\2\2\2\u0104\u0119\3\2\2\2\u0105"+
		"\u0106\f\f\2\2\u0106\u0107\7/\2\2\u0107\u0118\5$\23\r\u0108\u0109\f\13"+
		"\2\2\u0109\u010a\t\4\2\2\u010a\u0118\5$\23\f\u010b\u010c\f\n\2\2\u010c"+
		"\u010d\t\5\2\2\u010d\u0118\5$\23\13\u010e\u010f\f\t\2\2\u010f\u0110\t"+
		"\6\2\2\u0110\u0118\5$\23\n\u0111\u0112\f\b\2\2\u0112\u0113\7\21\2\2\u0113"+
		"\u0118\5$\23\t\u0114\u0115\f\7\2\2\u0115\u0116\7\22\2\2\u0116\u0118\5"+
		"$\23\b\u0117\u0105\3\2\2\2\u0117\u0108\3\2\2\2\u0117\u010b\3\2\2\2\u0117"+
		"\u010e\3\2\2\2\u0117\u0111\3\2\2\2\u0117\u0114\3\2\2\2\u0118\u011b\3\2"+
		"\2\2\u0119\u0117\3\2\2\2\u0119\u011a\3\2\2\2\u011a%\3\2\2\2\u011b\u0119"+
		"\3\2\2\2\u011c\u011d\t\7\2\2\u011d\'\3\2\2\2\u011e\u011f\5*\26\2\u011f"+
		")\3\2\2\2\u0120\u0125\5,\27\2\u0121\u0122\7\7\2\2\u0122\u0123\5$\23\2"+
		"\u0123\u0124\7\b\2\2\u0124\u0126\3\2\2\2\u0125\u0121\3\2\2\2\u0125\u0126"+
		"\3\2\2\2\u0126+\3\2\2\2\u0127\u0128\78\2\2\u0128-\3\2\2\2\30\619ERXai"+
		"{~\u0085\u008a\u0098\u00c7\u00ca\u00d5\u00db\u00e5\u00ed\u0103\u0117\u0119"+
		"\u0125";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}