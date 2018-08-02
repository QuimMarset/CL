// Generated from /home/quim/CL/Lab1/1_simple_expression/ExCalculadora/Expr.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExprLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		MULT=1, ADD=2, SUB=3, DIV=4, LPAR=5, RPAR=6, EQ=7, NEQ=8, GT=9, LT=10, 
		GET=11, LET=12, AND=13, OR=14, NOT=15, INT=16, WS=17;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"MULT", "ADD", "SUB", "DIV", "LPAR", "RPAR", "EQ", "NEQ", "GT", "LT", 
		"GET", "LET", "AND", "OR", "NOT", "INT", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'*'", "'+'", "'-'", "'/'", "'('", "')'", "'=='", "'!='", "'>'", 
		"'<'", "'>='", "'<='", "'and'", "'or'", "'not'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "MULT", "ADD", "SUB", "DIV", "LPAR", "RPAR", "EQ", "NEQ", "GT", 
		"LT", "GET", "LET", "AND", "OR", "NOT", "INT", "WS"
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


	public ExprLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Expr.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\23X\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\n\3\n\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\17"+
		"\3\17\3\17\3\20\3\20\3\20\3\20\3\21\6\21N\n\21\r\21\16\21O\3\22\6\22S"+
		"\n\22\r\22\16\22T\3\22\3\22\2\2\23\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n"+
		"\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23\3\2\4\3\2\62;\4\2\13"+
		"\f\"\"\2Y\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2"+
		"\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\3%\3\2\2\2\5\'\3\2\2\2\7)\3\2\2\2\t+\3\2\2\2\13-\3\2\2\2"+
		"\r/\3\2\2\2\17\61\3\2\2\2\21\64\3\2\2\2\23\67\3\2\2\2\259\3\2\2\2\27;"+
		"\3\2\2\2\31>\3\2\2\2\33A\3\2\2\2\35E\3\2\2\2\37H\3\2\2\2!M\3\2\2\2#R\3"+
		"\2\2\2%&\7,\2\2&\4\3\2\2\2\'(\7-\2\2(\6\3\2\2\2)*\7/\2\2*\b\3\2\2\2+,"+
		"\7\61\2\2,\n\3\2\2\2-.\7*\2\2.\f\3\2\2\2/\60\7+\2\2\60\16\3\2\2\2\61\62"+
		"\7?\2\2\62\63\7?\2\2\63\20\3\2\2\2\64\65\7#\2\2\65\66\7?\2\2\66\22\3\2"+
		"\2\2\678\7@\2\28\24\3\2\2\29:\7>\2\2:\26\3\2\2\2;<\7@\2\2<=\7?\2\2=\30"+
		"\3\2\2\2>?\7>\2\2?@\7?\2\2@\32\3\2\2\2AB\7c\2\2BC\7p\2\2CD\7f\2\2D\34"+
		"\3\2\2\2EF\7q\2\2FG\7t\2\2G\36\3\2\2\2HI\7p\2\2IJ\7q\2\2JK\7v\2\2K \3"+
		"\2\2\2LN\t\2\2\2ML\3\2\2\2NO\3\2\2\2OM\3\2\2\2OP\3\2\2\2P\"\3\2\2\2QS"+
		"\t\3\2\2RQ\3\2\2\2ST\3\2\2\2TR\3\2\2\2TU\3\2\2\2UV\3\2\2\2VW\b\22\2\2"+
		"W$\3\2\2\2\5\2OT\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}