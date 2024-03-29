// Generated from /home/quim/CL/Examen Lab 1/Plantilla/Examen.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExamenLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, PLUS=3, MINUS=4, MUL=5, DIV=6, AND=7, NOT=8, OR=9, EQ=10, 
		NEQ=11, LT=12, GT=13, LET=14, GET=15, INT=16, FLOAT=17, CHAR=18, STRING=19, 
		ID=20, WS=21;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "PLUS", "MINUS", "MUL", "DIV", "AND", "NOT", "OR", "EQ", 
		"NEQ", "LT", "GT", "LET", "GET", "INT", "FLOAT", "CHAR", "STRING", "ESC_SEQ", 
		"ID", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'and'", "'not'", "'or'", 
		"'=='", "'!='", "'<'", "'>'", "'<='", "'>='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, "PLUS", "MINUS", "MUL", "DIV", "AND", "NOT", "OR", "EQ", 
		"NEQ", "LT", "GT", "LET", "GET", "INT", "FLOAT", "CHAR", "STRING", "ID", 
		"WS"
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


	public ExamenLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Examen.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\27\u0087\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\3\2\3\3\3"+
		"\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n"+
		"\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\17\3"+
		"\20\3\20\3\20\3\21\3\21\7\21Y\n\21\f\21\16\21\\\13\21\3\22\3\22\5\22`"+
		"\n\22\3\22\3\22\6\22d\n\22\r\22\16\22e\3\23\3\23\3\23\5\23k\n\23\3\23"+
		"\3\23\3\24\3\24\3\24\7\24r\n\24\f\24\16\24u\13\24\3\24\3\24\3\25\3\25"+
		"\3\25\3\26\6\26}\n\26\r\26\16\26~\3\27\6\27\u0082\n\27\r\27\16\27\u0083"+
		"\3\27\3\27\2\2\30\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31"+
		"\16\33\17\35\20\37\21!\22#\23%\24\'\25)\2+\26-\27\3\2\t\3\2\63;\3\2\62"+
		";\4\2))^^\4\2$$^^\4\2ppvv\4\2C\\c|\4\2\13\f\"\"\2\u008e\2\3\3\2\2\2\2"+
		"\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2"+
		"\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2"+
		"\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2"+
		"\2\'\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\3/\3\2\2\2\5\61\3\2\2\2\7\63\3\2\2"+
		"\2\t\65\3\2\2\2\13\67\3\2\2\2\r9\3\2\2\2\17;\3\2\2\2\21?\3\2\2\2\23C\3"+
		"\2\2\2\25F\3\2\2\2\27I\3\2\2\2\31L\3\2\2\2\33N\3\2\2\2\35P\3\2\2\2\37"+
		"S\3\2\2\2!V\3\2\2\2#_\3\2\2\2%g\3\2\2\2\'n\3\2\2\2)x\3\2\2\2+|\3\2\2\2"+
		"-\u0081\3\2\2\2/\60\7*\2\2\60\4\3\2\2\2\61\62\7+\2\2\62\6\3\2\2\2\63\64"+
		"\7-\2\2\64\b\3\2\2\2\65\66\7/\2\2\66\n\3\2\2\2\678\7,\2\28\f\3\2\2\29"+
		":\7\61\2\2:\16\3\2\2\2;<\7c\2\2<=\7p\2\2=>\7f\2\2>\20\3\2\2\2?@\7p\2\2"+
		"@A\7q\2\2AB\7v\2\2B\22\3\2\2\2CD\7q\2\2DE\7t\2\2E\24\3\2\2\2FG\7?\2\2"+
		"GH\7?\2\2H\26\3\2\2\2IJ\7#\2\2JK\7?\2\2K\30\3\2\2\2LM\7>\2\2M\32\3\2\2"+
		"\2NO\7@\2\2O\34\3\2\2\2PQ\7>\2\2QR\7?\2\2R\36\3\2\2\2ST\7@\2\2TU\7?\2"+
		"\2U \3\2\2\2VZ\t\2\2\2WY\t\3\2\2XW\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2Z[\3\2"+
		"\2\2[\"\3\2\2\2\\Z\3\2\2\2]`\5!\21\2^`\7\62\2\2_]\3\2\2\2_^\3\2\2\2_`"+
		"\3\2\2\2`a\3\2\2\2ac\7\60\2\2bd\t\3\2\2cb\3\2\2\2de\3\2\2\2ec\3\2\2\2"+
		"ef\3\2\2\2f$\3\2\2\2gj\7)\2\2hk\n\4\2\2ik\5)\25\2jh\3\2\2\2ji\3\2\2\2"+
		"kl\3\2\2\2lm\7)\2\2m&\3\2\2\2ns\7$\2\2or\n\5\2\2pr\5)\25\2qo\3\2\2\2q"+
		"p\3\2\2\2ru\3\2\2\2sq\3\2\2\2st\3\2\2\2tv\3\2\2\2us\3\2\2\2vw\7$\2\2w"+
		"(\3\2\2\2xy\7^\2\2yz\t\6\2\2z*\3\2\2\2{}\t\7\2\2|{\3\2\2\2}~\3\2\2\2~"+
		"|\3\2\2\2~\177\3\2\2\2\177,\3\2\2\2\u0080\u0082\t\b\2\2\u0081\u0080\3"+
		"\2\2\2\u0082\u0083\3\2\2\2\u0083\u0081\3\2\2\2\u0083\u0084\3\2\2\2\u0084"+
		"\u0085\3\2\2\2\u0085\u0086\b\27\2\2\u0086.\3\2\2\2\13\2Z_ejqs~\u0083\3"+
		"\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}