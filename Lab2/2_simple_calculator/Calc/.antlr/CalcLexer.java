// Generated from /home/quim/CL/Lab2/2_simple_calculator/Calc/Calc.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CalcLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, MUL=2, ADD=3, SUB=4, DIV=5, LPAR=6, RPAR=7, QMARK=8, DOUBLE=9, 
		IF=10, ENDIF=11, THEN=12, ELSE=13, WHILE=14, LKEY=15, RKEY=16, MAXFUN=17, 
		COMMA=18, AND=19, OR=20, NOT=21, GT=22, LT=23, EQ=24, NEQ=25, GET=26, 
		LET=27, ID=28, INT=29, NEWLINE=30, WS=31;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "MUL", "ADD", "SUB", "DIV", "LPAR", "RPAR", "QMARK", "DOUBLE", 
		"IF", "ENDIF", "THEN", "ELSE", "WHILE", "LKEY", "RKEY", "MAXFUN", "COMMA", 
		"AND", "OR", "NOT", "GT", "LT", "EQ", "NEQ", "GET", "LET", "ID", "INT", 
		"NEWLINE", "WS"
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


	public CalcLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Calc.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2!\u00a7\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \3\2"+
		"\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3"+
		"\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3"+
		"\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3"+
		"\22\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3"+
		"\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32\3\33\3\33\3"+
		"\33\3\34\3\34\3\34\3\35\6\35\u0093\n\35\r\35\16\35\u0094\3\36\6\36\u0098"+
		"\n\36\r\36\16\36\u0099\3\37\5\37\u009d\n\37\3\37\3\37\3 \6 \u00a2\n \r"+
		" \16 \u00a3\3 \3 \2\2!\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27"+
		"\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33"+
		"\65\34\67\359\36;\37= ?!\3\2\5\4\2C\\c|\3\2\62;\4\2\13\13\"\"\2\u00aa"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2"+
		"\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2"+
		"\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3"+
		"\2\2\2\2=\3\2\2\2\2?\3\2\2\2\3A\3\2\2\2\5C\3\2\2\2\7E\3\2\2\2\tG\3\2\2"+
		"\2\13I\3\2\2\2\rK\3\2\2\2\17M\3\2\2\2\21O\3\2\2\2\23Q\3\2\2\2\25S\3\2"+
		"\2\2\27V\3\2\2\2\31\\\3\2\2\2\33a\3\2\2\2\35f\3\2\2\2\37l\3\2\2\2!n\3"+
		"\2\2\2#p\3\2\2\2%t\3\2\2\2\'v\3\2\2\2)z\3\2\2\2+}\3\2\2\2-\u0081\3\2\2"+
		"\2/\u0083\3\2\2\2\61\u0085\3\2\2\2\63\u0088\3\2\2\2\65\u008b\3\2\2\2\67"+
		"\u008e\3\2\2\29\u0092\3\2\2\2;\u0097\3\2\2\2=\u009c\3\2\2\2?\u00a1\3\2"+
		"\2\2AB\7?\2\2B\4\3\2\2\2CD\7,\2\2D\6\3\2\2\2EF\7-\2\2F\b\3\2\2\2GH\7/"+
		"\2\2H\n\3\2\2\2IJ\7\61\2\2J\f\3\2\2\2KL\7*\2\2L\16\3\2\2\2MN\7+\2\2N\20"+
		"\3\2\2\2OP\7A\2\2P\22\3\2\2\2QR\7<\2\2R\24\3\2\2\2ST\7k\2\2TU\7h\2\2U"+
		"\26\3\2\2\2VW\7g\2\2WX\7p\2\2XY\7f\2\2YZ\7k\2\2Z[\7h\2\2[\30\3\2\2\2\\"+
		"]\7v\2\2]^\7j\2\2^_\7g\2\2_`\7p\2\2`\32\3\2\2\2ab\7g\2\2bc\7n\2\2cd\7"+
		"u\2\2de\7g\2\2e\34\3\2\2\2fg\7y\2\2gh\7j\2\2hi\7k\2\2ij\7n\2\2jk\7g\2"+
		"\2k\36\3\2\2\2lm\7}\2\2m \3\2\2\2no\7\177\2\2o\"\3\2\2\2pq\7o\2\2qr\7"+
		"c\2\2rs\7z\2\2s$\3\2\2\2tu\7.\2\2u&\3\2\2\2vw\7c\2\2wx\7p\2\2xy\7f\2\2"+
		"y(\3\2\2\2z{\7q\2\2{|\7t\2\2|*\3\2\2\2}~\7p\2\2~\177\7q\2\2\177\u0080"+
		"\7v\2\2\u0080,\3\2\2\2\u0081\u0082\7@\2\2\u0082.\3\2\2\2\u0083\u0084\7"+
		">\2\2\u0084\60\3\2\2\2\u0085\u0086\7?\2\2\u0086\u0087\7?\2\2\u0087\62"+
		"\3\2\2\2\u0088\u0089\7#\2\2\u0089\u008a\7?\2\2\u008a\64\3\2\2\2\u008b"+
		"\u008c\7@\2\2\u008c\u008d\7?\2\2\u008d\66\3\2\2\2\u008e\u008f\7>\2\2\u008f"+
		"\u0090\7?\2\2\u00908\3\2\2\2\u0091\u0093\t\2\2\2\u0092\u0091\3\2\2\2\u0093"+
		"\u0094\3\2\2\2\u0094\u0092\3\2\2\2\u0094\u0095\3\2\2\2\u0095:\3\2\2\2"+
		"\u0096\u0098\t\3\2\2\u0097\u0096\3\2\2\2\u0098\u0099\3\2\2\2\u0099\u0097"+
		"\3\2\2\2\u0099\u009a\3\2\2\2\u009a<\3\2\2\2\u009b\u009d\7\17\2\2\u009c"+
		"\u009b\3\2\2\2\u009c\u009d\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u009f\7\f"+
		"\2\2\u009f>\3\2\2\2\u00a0\u00a2\t\4\2\2\u00a1\u00a0\3\2\2\2\u00a2\u00a3"+
		"\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5"+
		"\u00a6\b \2\2\u00a6@\3\2\2\2\7\2\u0094\u0099\u009c\u00a3\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}