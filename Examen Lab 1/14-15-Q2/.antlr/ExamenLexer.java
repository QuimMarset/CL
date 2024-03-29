// Generated from /home/quim/CL/Examen Lab 1/14-15-Q2/Examen.g4 by ANTLR 4.7.1
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
		T__0=1, T__1=2, T__2=3, T__3=4, INT=5, STRING=6, ASSIGN=7, PLUS=8, TOP=9, 
		PUSH=10, POP=11, ID=12, WS=13;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "INT", "STRING", "ASSIGN", "PLUS", "TOP", 
		"PUSH", "POP", "ID", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'.'", "'('", "')'", null, null, "'='", "'+'", "'top'", "'push'", 
		"'pop'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, "INT", "STRING", "ASSIGN", "PLUS", "TOP", 
		"PUSH", "POP", "ID", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\17T\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6"+
		"\7\6(\n\6\f\6\16\6+\13\6\3\7\3\7\7\7/\n\7\f\7\16\7\62\13\7\3\7\3\7\3\b"+
		"\3\b\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f"+
		"\3\r\3\r\7\rI\n\r\f\r\16\rL\13\r\3\16\6\16O\n\16\r\16\16\16P\3\16\3\16"+
		"\2\2\17\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\3\2\b\3\2\63;\3\2\62;\3\2$$\5\2C\\aac|\6\2\62;C\\aac|\4\2\13\f\"\"\2"+
		"W\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\3\35\3\2\2\2\5\37\3\2\2\2\7!\3\2\2\2\t#\3\2"+
		"\2\2\13%\3\2\2\2\r,\3\2\2\2\17\65\3\2\2\2\21\67\3\2\2\2\239\3\2\2\2\25"+
		"=\3\2\2\2\27B\3\2\2\2\31F\3\2\2\2\33N\3\2\2\2\35\36\7=\2\2\36\4\3\2\2"+
		"\2\37 \7\60\2\2 \6\3\2\2\2!\"\7*\2\2\"\b\3\2\2\2#$\7+\2\2$\n\3\2\2\2%"+
		")\t\2\2\2&(\t\3\2\2\'&\3\2\2\2(+\3\2\2\2)\'\3\2\2\2)*\3\2\2\2*\f\3\2\2"+
		"\2+)\3\2\2\2,\60\7$\2\2-/\n\4\2\2.-\3\2\2\2/\62\3\2\2\2\60.\3\2\2\2\60"+
		"\61\3\2\2\2\61\63\3\2\2\2\62\60\3\2\2\2\63\64\7$\2\2\64\16\3\2\2\2\65"+
		"\66\7?\2\2\66\20\3\2\2\2\678\7-\2\28\22\3\2\2\29:\7v\2\2:;\7q\2\2;<\7"+
		"r\2\2<\24\3\2\2\2=>\7r\2\2>?\7w\2\2?@\7u\2\2@A\7j\2\2A\26\3\2\2\2BC\7"+
		"r\2\2CD\7q\2\2DE\7r\2\2E\30\3\2\2\2FJ\t\5\2\2GI\t\6\2\2HG\3\2\2\2IL\3"+
		"\2\2\2JH\3\2\2\2JK\3\2\2\2K\32\3\2\2\2LJ\3\2\2\2MO\t\7\2\2NM\3\2\2\2O"+
		"P\3\2\2\2PN\3\2\2\2PQ\3\2\2\2QR\3\2\2\2RS\b\16\2\2S\34\3\2\2\2\7\2)\60"+
		"JP\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}