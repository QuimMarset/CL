// Generated from /home/quim/CL/Examen Lab 1/16-17Q2/Examen.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExamenParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, UNION=5, STRUCT=6, INT=7, DOUBLE=8, CHAR=9, 
		POINTER=10, ID=11, WS=12;
	public static final int
		RULE_program = 0, RULE_declaration = 1, RULE_type = 2;
	public static final String[] ruleNames = {
		"program", "declaration", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "','", "';'", "'{'", "'}'", "'union'", "'struct'", "'int'", "'double'", 
		"'char'", "'*'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, "UNION", "STRUCT", "INT", "DOUBLE", "CHAR", 
		"POINTER", "ID", "WS"
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
	public String getGrammarFileName() { return "Examen.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ExamenParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgramContext extends ParserRuleContext {
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
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
			setState(7); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(6);
				declaration();
				}
				}
				setState(9); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << UNION) | (1L << STRUCT) | (1L << INT) | (1L << DOUBLE) | (1L << CHAR))) != 0) );
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

	public static class DeclarationContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<TerminalNode> ID() { return getTokens(ExamenParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(ExamenParser.ID, i);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(11);
			type();
			setState(12);
			match(ID);
			setState(17);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(13);
				match(T__0);
				setState(14);
				match(ID);
				}
				}
				setState(19);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(20);
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

	public static class TypeContext extends ParserRuleContext {
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	 
		public TypeContext() { }
		public void copyFrom(TypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BasicTypeContext extends TypeContext {
		public Token typeDecl;
		public TerminalNode INT() { return getToken(ExamenParser.INT, 0); }
		public TerminalNode DOUBLE() { return getToken(ExamenParser.DOUBLE, 0); }
		public TerminalNode CHAR() { return getToken(ExamenParser.CHAR, 0); }
		public TerminalNode POINTER() { return getToken(ExamenParser.POINTER, 0); }
		public BasicTypeContext(TypeContext ctx) { copyFrom(ctx); }
	}
	public static class StructTypeContext extends TypeContext {
		public TerminalNode STRUCT() { return getToken(ExamenParser.STRUCT, 0); }
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public StructTypeContext(TypeContext ctx) { copyFrom(ctx); }
	}
	public static class UnionTypeContext extends TypeContext {
		public TerminalNode UNION() { return getToken(ExamenParser.UNION, 0); }
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public UnionTypeContext(TypeContext ctx) { copyFrom(ctx); }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_type);
		int _la;
		try {
			setState(44);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case UNION:
				_localctx = new UnionTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(22);
				match(UNION);
				setState(23);
				match(T__2);
				setState(25); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(24);
					declaration();
					}
					}
					setState(27); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << UNION) | (1L << STRUCT) | (1L << INT) | (1L << DOUBLE) | (1L << CHAR))) != 0) );
				setState(29);
				match(T__3);
				}
				break;
			case STRUCT:
				_localctx = new StructTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(31);
				match(STRUCT);
				setState(32);
				match(T__2);
				setState(34); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(33);
					declaration();
					}
					}
					setState(36); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << UNION) | (1L << STRUCT) | (1L << INT) | (1L << DOUBLE) | (1L << CHAR))) != 0) );
				setState(38);
				match(T__3);
				}
				break;
			case INT:
			case DOUBLE:
			case CHAR:
				_localctx = new BasicTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(40);
				((BasicTypeContext)_localctx).typeDecl = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << DOUBLE) | (1L << CHAR))) != 0)) ) {
					((BasicTypeContext)_localctx).typeDecl = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(42);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==POINTER) {
					{
					setState(41);
					match(POINTER);
					}
				}

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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\16\61\4\2\t\2\4\3"+
		"\t\3\4\4\t\4\3\2\6\2\n\n\2\r\2\16\2\13\3\3\3\3\3\3\3\3\7\3\22\n\3\f\3"+
		"\16\3\25\13\3\3\3\3\3\3\4\3\4\3\4\6\4\34\n\4\r\4\16\4\35\3\4\3\4\3\4\3"+
		"\4\3\4\6\4%\n\4\r\4\16\4&\3\4\3\4\3\4\3\4\5\4-\n\4\5\4/\n\4\3\4\2\2\5"+
		"\2\4\6\2\3\3\2\t\13\2\64\2\t\3\2\2\2\4\r\3\2\2\2\6.\3\2\2\2\b\n\5\4\3"+
		"\2\t\b\3\2\2\2\n\13\3\2\2\2\13\t\3\2\2\2\13\f\3\2\2\2\f\3\3\2\2\2\r\16"+
		"\5\6\4\2\16\23\7\r\2\2\17\20\7\3\2\2\20\22\7\r\2\2\21\17\3\2\2\2\22\25"+
		"\3\2\2\2\23\21\3\2\2\2\23\24\3\2\2\2\24\26\3\2\2\2\25\23\3\2\2\2\26\27"+
		"\7\4\2\2\27\5\3\2\2\2\30\31\7\7\2\2\31\33\7\5\2\2\32\34\5\4\3\2\33\32"+
		"\3\2\2\2\34\35\3\2\2\2\35\33\3\2\2\2\35\36\3\2\2\2\36\37\3\2\2\2\37 \7"+
		"\6\2\2 /\3\2\2\2!\"\7\b\2\2\"$\7\5\2\2#%\5\4\3\2$#\3\2\2\2%&\3\2\2\2&"+
		"$\3\2\2\2&\'\3\2\2\2\'(\3\2\2\2()\7\6\2\2)/\3\2\2\2*,\t\2\2\2+-\7\f\2"+
		"\2,+\3\2\2\2,-\3\2\2\2-/\3\2\2\2.\30\3\2\2\2.!\3\2\2\2.*\3\2\2\2/\7\3"+
		"\2\2\2\b\13\23\35&,.";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}