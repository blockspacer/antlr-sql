// Generated from dml.g4 by ANTLR 4.7
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class dmlParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		WORD=32, ALPHA=33, DIGIT=34, EQUAL=35, NOTEQUAL=36, GREATERTHAN=37, LESSTHAN=38, 
		GREATERTHANOREQUAL=39, LESSTHANOREQUAL=40, WS=41;
	public static final int
		RULE_program = 0, RULE_query = 1, RULE_relation_name = 2, RULE_identifier = 3, 
		RULE_expr = 4, RULE_atomic_expr = 5, RULE_selection = 6, RULE_condition = 7, 
		RULE_conjunction = 8, RULE_comparison = 9, RULE_op = 10, RULE_operand = 11, 
		RULE_attribute_name = 12, RULE_literal = 13, RULE_projection = 14, RULE_attribute_list = 15, 
		RULE_renaming = 16, RULE_union = 17, RULE_difference = 18, RULE_product = 19, 
		RULE_natural_join = 20, RULE_command = 21, RULE_open_cmd = 22, RULE_close_cmd = 23, 
		RULE_write_cmd = 24, RULE_exit_cmd = 25, RULE_show_cmd = 26, RULE_create_cmd = 27, 
		RULE_update_cmd = 28, RULE_insert_cmd = 29, RULE_delete_cmd = 30, RULE_typed_attribute_list = 31, 
		RULE_type = 32, RULE_integer = 33;
	public static final String[] ruleNames = {
		"program", "query", "relation_name", "identifier", "expr", "atomic_expr", 
		"selection", "condition", "conjunction", "comparison", "op", "operand", 
		"attribute_name", "literal", "projection", "attribute_list", "renaming", 
		"union", "difference", "product", "natural_join", "command", "open_cmd", 
		"close_cmd", "write_cmd", "exit_cmd", "show_cmd", "create_cmd", "update_cmd", 
		"insert_cmd", "delete_cmd", "typed_attribute_list", "type", "integer"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "' <- '", "';'", "'('", "')'", "'select'", "' || '", "' && '", "'project'", 
		"','", "'rename'", "'+'", "'-'", "'*'", "'&'", "'OPEN'", "'CLOSE'", "'WRITE'", 
		"'EXIT'", "'SHOW'", "'CREATE TABLE'", "'PRIMARY KEY'", "'UPDATE'", "'SET'", 
		"'='", "'WHERE'", "'INSERT INTO'", "'VALUES FROM'", "'VALUES FROM RELATION'", 
		"'DELETE FROM'", "'VARCHAR'", "'INTEGER'", null, null, null, "'=='", "'!='", 
		"'>'", "'<'", "'<='", "'>='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, "WORD", "ALPHA", "DIGIT", 
		"EQUAL", "NOTEQUAL", "GREATERTHAN", "LESSTHAN", "GREATERTHANOREQUAL", 
		"LESSTHANOREQUAL", "WS"
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
	public String getGrammarFileName() { return "dml.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public dmlParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgramContext extends ParserRuleContext {
		public List<QueryContext> query() {
			return getRuleContexts(QueryContext.class);
		}
		public QueryContext query(int i) {
			return getRuleContext(QueryContext.class,i);
		}
		public List<CommandContext> command() {
			return getRuleContexts(CommandContext.class);
		}
		public CommandContext command(int i) {
			return getRuleContext(CommandContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterProgram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitProgram(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(70);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ALPHA:
					{
					setState(68);
					query();
					}
					break;
				case T__14:
				case T__15:
				case T__16:
				case T__17:
				case T__18:
				case T__19:
				case T__21:
				case T__25:
				case T__28:
					{
					setState(69);
					command();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(72); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__21) | (1L << T__25) | (1L << T__28) | (1L << ALPHA))) != 0) );
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

	public static class QueryContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public QueryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterQuery(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitQuery(this);
		}
	}

	public final QueryContext query() throws RecognitionException {
		QueryContext _localctx = new QueryContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_query);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			relation_name();
			setState(75);
			match(T__0);
			setState(76);
			expr();
			setState(77);
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

	public static class Relation_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Relation_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relation_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterRelation_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitRelation_name(this);
		}
	}

	public final Relation_nameContext relation_name() throws RecognitionException {
		Relation_nameContext _localctx = new Relation_nameContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_relation_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			identifier();
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

	public static class IdentifierContext extends ParserRuleContext {
		public List<TerminalNode> ALPHA() { return getTokens(dmlParser.ALPHA); }
		public TerminalNode ALPHA(int i) {
			return getToken(dmlParser.ALPHA, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(dmlParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(dmlParser.DIGIT, i);
		}
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterIdentifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitIdentifier(this);
		}
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_identifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			match(ALPHA);
			setState(85);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ALPHA || _la==DIGIT) {
				{
				{
				setState(82);
				_la = _input.LA(1);
				if ( !(_la==ALPHA || _la==DIGIT) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(87);
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

	public static class ExprContext extends ParserRuleContext {
		public Atomic_exprContext atomic_expr() {
			return getRuleContext(Atomic_exprContext.class,0);
		}
		public SelectionContext selection() {
			return getRuleContext(SelectionContext.class,0);
		}
		public ProjectionContext projection() {
			return getRuleContext(ProjectionContext.class,0);
		}
		public RenamingContext renaming() {
			return getRuleContext(RenamingContext.class,0);
		}
		public UnionContext union() {
			return getRuleContext(UnionContext.class,0);
		}
		public DifferenceContext difference() {
			return getRuleContext(DifferenceContext.class,0);
		}
		public ProductContext product() {
			return getRuleContext(ProductContext.class,0);
		}
		public Natural_joinContext natural_join() {
			return getRuleContext(Natural_joinContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitExpr(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_expr);
		try {
			setState(96);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(88);
				atomic_expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(89);
				selection();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(90);
				projection();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(91);
				renaming();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(92);
				union();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(93);
				difference();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(94);
				product();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(95);
				natural_join();
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

	public static class Atomic_exprContext extends ParserRuleContext {
		public Atomic_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atomic_expr; }
	 
		public Atomic_exprContext() { }
		public void copyFrom(Atomic_exprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AtomicParensContext extends Atomic_exprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AtomicParensContext(Atomic_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterAtomicParens(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitAtomicParens(this);
		}
	}
	public static class AtomicRelationNameContext extends Atomic_exprContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public AtomicRelationNameContext(Atomic_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterAtomicRelationName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitAtomicRelationName(this);
		}
	}

	public final Atomic_exprContext atomic_expr() throws RecognitionException {
		Atomic_exprContext _localctx = new Atomic_exprContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_atomic_expr);
		try {
			setState(103);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ALPHA:
				_localctx = new AtomicRelationNameContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(98);
				relation_name();
				}
				break;
			case T__2:
				_localctx = new AtomicParensContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(99);
				match(T__2);
				setState(100);
				expr();
				setState(101);
				match(T__3);
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

	public static class SelectionContext extends ParserRuleContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public Atomic_exprContext atomic_expr() {
			return getRuleContext(Atomic_exprContext.class,0);
		}
		public SelectionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selection; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterSelection(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitSelection(this);
		}
	}

	public final SelectionContext selection() throws RecognitionException {
		SelectionContext _localctx = new SelectionContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_selection);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			match(T__4);
			setState(106);
			match(T__2);
			setState(107);
			condition();
			setState(108);
			match(T__3);
			setState(109);
			atomic_expr();
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

	public static class ConditionContext extends ParserRuleContext {
		public List<ConjunctionContext> conjunction() {
			return getRuleContexts(ConjunctionContext.class);
		}
		public ConjunctionContext conjunction(int i) {
			return getRuleContext(ConjunctionContext.class,i);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitCondition(this);
		}
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_condition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			conjunction();
			setState(116);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(112);
				match(T__5);
				setState(113);
				conjunction();
				}
				}
				setState(118);
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

	public static class ConjunctionContext extends ParserRuleContext {
		public List<ComparisonContext> comparison() {
			return getRuleContexts(ComparisonContext.class);
		}
		public ComparisonContext comparison(int i) {
			return getRuleContext(ComparisonContext.class,i);
		}
		public ConjunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conjunction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterConjunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitConjunction(this);
		}
	}

	public final ConjunctionContext conjunction() throws RecognitionException {
		ConjunctionContext _localctx = new ConjunctionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_conjunction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119);
			comparison();
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6) {
				{
				{
				setState(120);
				match(T__6);
				setState(121);
				comparison();
				}
				}
				setState(126);
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

	public static class ComparisonContext extends ParserRuleContext {
		public ComparisonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparison; }
	 
		public ComparisonContext() { }
		public void copyFrom(ComparisonContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ComparisonOperationContext extends ComparisonContext {
		public List<OperandContext> operand() {
			return getRuleContexts(OperandContext.class);
		}
		public OperandContext operand(int i) {
			return getRuleContext(OperandContext.class,i);
		}
		public OpContext op() {
			return getRuleContext(OpContext.class,0);
		}
		public ComparisonOperationContext(ComparisonContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterComparisonOperation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitComparisonOperation(this);
		}
	}
	public static class ComparisonParensContext extends ComparisonContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public ComparisonParensContext(ComparisonContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterComparisonParens(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitComparisonParens(this);
		}
	}

	public final ComparisonContext comparison() throws RecognitionException {
		ComparisonContext _localctx = new ComparisonContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_comparison);
		try {
			setState(135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WORD:
			case ALPHA:
			case DIGIT:
				_localctx = new ComparisonOperationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(127);
				operand();
				setState(128);
				op();
				setState(129);
				operand();
				}
				break;
			case T__2:
				_localctx = new ComparisonParensContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(131);
				match(T__2);
				setState(132);
				condition();
				setState(133);
				match(T__3);
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

	public static class OpContext extends ParserRuleContext {
		public OpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterOp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitOp(this);
		}
	}

	public final OpContext op() throws RecognitionException {
		OpContext _localctx = new OpContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQUAL) | (1L << NOTEQUAL) | (1L << GREATERTHAN) | (1L << LESSTHAN) | (1L << GREATERTHANOREQUAL) | (1L << LESSTHANOREQUAL))) != 0)) ) {
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

	public static class OperandContext extends ParserRuleContext {
		public Attribute_nameContext attribute_name() {
			return getRuleContext(Attribute_nameContext.class,0);
		}
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public OperandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operand; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterOperand(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitOperand(this);
		}
	}

	public final OperandContext operand() throws RecognitionException {
		OperandContext _localctx = new OperandContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_operand);
		try {
			setState(141);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ALPHA:
				enterOuterAlt(_localctx, 1);
				{
				setState(139);
				attribute_name();
				}
				break;
			case WORD:
			case DIGIT:
				enterOuterAlt(_localctx, 2);
				{
				setState(140);
				literal();
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

	public static class Attribute_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Attribute_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterAttribute_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitAttribute_name(this);
		}
	}

	public final Attribute_nameContext attribute_name() throws RecognitionException {
		Attribute_nameContext _localctx = new Attribute_nameContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_attribute_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			identifier();
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

	public static class LiteralContext extends ParserRuleContext {
		public TerminalNode WORD() { return getToken(dmlParser.WORD, 0); }
		public IntegerContext integer() {
			return getRuleContext(IntegerContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitLiteral(this);
		}
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_literal);
		try {
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(145);
				match(WORD);
				}
				break;
			case DIGIT:
				enterOuterAlt(_localctx, 2);
				{
				setState(146);
				integer();
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

	public static class ProjectionContext extends ParserRuleContext {
		public Attribute_listContext attribute_list() {
			return getRuleContext(Attribute_listContext.class,0);
		}
		public Atomic_exprContext atomic_expr() {
			return getRuleContext(Atomic_exprContext.class,0);
		}
		public ProjectionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_projection; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterProjection(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitProjection(this);
		}
	}

	public final ProjectionContext projection() throws RecognitionException {
		ProjectionContext _localctx = new ProjectionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_projection);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(T__7);
			setState(150);
			match(T__2);
			setState(151);
			attribute_list();
			setState(152);
			match(T__3);
			setState(153);
			atomic_expr();
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

	public static class Attribute_listContext extends ParserRuleContext {
		public List<Attribute_nameContext> attribute_name() {
			return getRuleContexts(Attribute_nameContext.class);
		}
		public Attribute_nameContext attribute_name(int i) {
			return getRuleContext(Attribute_nameContext.class,i);
		}
		public Attribute_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterAttribute_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitAttribute_list(this);
		}
	}

	public final Attribute_listContext attribute_list() throws RecognitionException {
		Attribute_listContext _localctx = new Attribute_listContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_attribute_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			attribute_name();
			setState(160);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(156);
				match(T__8);
				setState(157);
				attribute_name();
				}
				}
				setState(162);
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

	public static class RenamingContext extends ParserRuleContext {
		public Attribute_listContext attribute_list() {
			return getRuleContext(Attribute_listContext.class,0);
		}
		public Atomic_exprContext atomic_expr() {
			return getRuleContext(Atomic_exprContext.class,0);
		}
		public RenamingContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_renaming; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterRenaming(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitRenaming(this);
		}
	}

	public final RenamingContext renaming() throws RecognitionException {
		RenamingContext _localctx = new RenamingContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_renaming);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(T__9);
			setState(164);
			match(T__2);
			setState(165);
			attribute_list();
			setState(166);
			match(T__3);
			setState(167);
			atomic_expr();
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

	public static class UnionContext extends ParserRuleContext {
		public List<Atomic_exprContext> atomic_expr() {
			return getRuleContexts(Atomic_exprContext.class);
		}
		public Atomic_exprContext atomic_expr(int i) {
			return getRuleContext(Atomic_exprContext.class,i);
		}
		public UnionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterUnion(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitUnion(this);
		}
	}

	public final UnionContext union() throws RecognitionException {
		UnionContext _localctx = new UnionContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_union);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(169);
			atomic_expr();
			setState(170);
			match(T__10);
			setState(171);
			atomic_expr();
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

	public static class DifferenceContext extends ParserRuleContext {
		public List<Atomic_exprContext> atomic_expr() {
			return getRuleContexts(Atomic_exprContext.class);
		}
		public Atomic_exprContext atomic_expr(int i) {
			return getRuleContext(Atomic_exprContext.class,i);
		}
		public DifferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_difference; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterDifference(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitDifference(this);
		}
	}

	public final DifferenceContext difference() throws RecognitionException {
		DifferenceContext _localctx = new DifferenceContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_difference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(173);
			atomic_expr();
			setState(174);
			match(T__11);
			setState(175);
			atomic_expr();
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

	public static class ProductContext extends ParserRuleContext {
		public List<Atomic_exprContext> atomic_expr() {
			return getRuleContexts(Atomic_exprContext.class);
		}
		public Atomic_exprContext atomic_expr(int i) {
			return getRuleContext(Atomic_exprContext.class,i);
		}
		public ProductContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_product; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterProduct(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitProduct(this);
		}
	}

	public final ProductContext product() throws RecognitionException {
		ProductContext _localctx = new ProductContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_product);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(177);
			atomic_expr();
			setState(178);
			match(T__12);
			setState(179);
			atomic_expr();
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

	public static class Natural_joinContext extends ParserRuleContext {
		public List<Atomic_exprContext> atomic_expr() {
			return getRuleContexts(Atomic_exprContext.class);
		}
		public Atomic_exprContext atomic_expr(int i) {
			return getRuleContext(Atomic_exprContext.class,i);
		}
		public Natural_joinContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_natural_join; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterNatural_join(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitNatural_join(this);
		}
	}

	public final Natural_joinContext natural_join() throws RecognitionException {
		Natural_joinContext _localctx = new Natural_joinContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_natural_join);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			atomic_expr();
			setState(182);
			match(T__13);
			setState(183);
			atomic_expr();
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

	public static class CommandContext extends ParserRuleContext {
		public Open_cmdContext open_cmd() {
			return getRuleContext(Open_cmdContext.class,0);
		}
		public Close_cmdContext close_cmd() {
			return getRuleContext(Close_cmdContext.class,0);
		}
		public Write_cmdContext write_cmd() {
			return getRuleContext(Write_cmdContext.class,0);
		}
		public Exit_cmdContext exit_cmd() {
			return getRuleContext(Exit_cmdContext.class,0);
		}
		public Show_cmdContext show_cmd() {
			return getRuleContext(Show_cmdContext.class,0);
		}
		public Create_cmdContext create_cmd() {
			return getRuleContext(Create_cmdContext.class,0);
		}
		public Update_cmdContext update_cmd() {
			return getRuleContext(Update_cmdContext.class,0);
		}
		public Insert_cmdContext insert_cmd() {
			return getRuleContext(Insert_cmdContext.class,0);
		}
		public Delete_cmdContext delete_cmd() {
			return getRuleContext(Delete_cmdContext.class,0);
		}
		public CommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_command; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterCommand(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitCommand(this);
		}
	}

	public final CommandContext command() throws RecognitionException {
		CommandContext _localctx = new CommandContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_command);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__14:
				{
				setState(185);
				open_cmd();
				}
				break;
			case T__15:
				{
				setState(186);
				close_cmd();
				}
				break;
			case T__16:
				{
				setState(187);
				write_cmd();
				}
				break;
			case T__17:
				{
				setState(188);
				exit_cmd();
				}
				break;
			case T__18:
				{
				setState(189);
				show_cmd();
				}
				break;
			case T__19:
				{
				setState(190);
				create_cmd();
				}
				break;
			case T__21:
				{
				setState(191);
				update_cmd();
				}
				break;
			case T__25:
				{
				setState(192);
				insert_cmd();
				}
				break;
			case T__28:
				{
				setState(193);
				delete_cmd();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(196);
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

	public static class Open_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public Open_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_open_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterOpen_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitOpen_cmd(this);
		}
	}

	public final Open_cmdContext open_cmd() throws RecognitionException {
		Open_cmdContext _localctx = new Open_cmdContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_open_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			match(T__14);
			setState(199);
			relation_name();
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

	public static class Close_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public Close_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_close_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterClose_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitClose_cmd(this);
		}
	}

	public final Close_cmdContext close_cmd() throws RecognitionException {
		Close_cmdContext _localctx = new Close_cmdContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_close_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(T__15);
			setState(202);
			relation_name();
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

	public static class Write_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public Write_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_write_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterWrite_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitWrite_cmd(this);
		}
	}

	public final Write_cmdContext write_cmd() throws RecognitionException {
		Write_cmdContext _localctx = new Write_cmdContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_write_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			match(T__16);
			setState(205);
			relation_name();
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

	public static class Exit_cmdContext extends ParserRuleContext {
		public Exit_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exit_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterExit_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitExit_cmd(this);
		}
	}

	public final Exit_cmdContext exit_cmd() throws RecognitionException {
		Exit_cmdContext _localctx = new Exit_cmdContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_exit_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			match(T__17);
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

	public static class Show_cmdContext extends ParserRuleContext {
		public Atomic_exprContext atomic_expr() {
			return getRuleContext(Atomic_exprContext.class,0);
		}
		public Show_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_show_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterShow_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitShow_cmd(this);
		}
	}

	public final Show_cmdContext show_cmd() throws RecognitionException {
		Show_cmdContext _localctx = new Show_cmdContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_show_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(T__18);
			setState(210);
			atomic_expr();
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

	public static class Create_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public Typed_attribute_listContext typed_attribute_list() {
			return getRuleContext(Typed_attribute_listContext.class,0);
		}
		public Attribute_listContext attribute_list() {
			return getRuleContext(Attribute_listContext.class,0);
		}
		public Create_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_create_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterCreate_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitCreate_cmd(this);
		}
	}

	public final Create_cmdContext create_cmd() throws RecognitionException {
		Create_cmdContext _localctx = new Create_cmdContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_create_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			match(T__19);
			setState(213);
			relation_name();
			setState(214);
			match(T__2);
			setState(215);
			typed_attribute_list();
			setState(216);
			match(T__3);
			setState(217);
			match(T__20);
			setState(218);
			match(T__2);
			setState(219);
			attribute_list();
			setState(220);
			match(T__3);
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

	public static class Update_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public List<Attribute_nameContext> attribute_name() {
			return getRuleContexts(Attribute_nameContext.class);
		}
		public Attribute_nameContext attribute_name(int i) {
			return getRuleContext(Attribute_nameContext.class,i);
		}
		public List<LiteralContext> literal() {
			return getRuleContexts(LiteralContext.class);
		}
		public LiteralContext literal(int i) {
			return getRuleContext(LiteralContext.class,i);
		}
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public Update_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_update_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterUpdate_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitUpdate_cmd(this);
		}
	}

	public final Update_cmdContext update_cmd() throws RecognitionException {
		Update_cmdContext _localctx = new Update_cmdContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_update_cmd);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			match(T__21);
			setState(223);
			relation_name();
			setState(224);
			match(T__22);
			setState(225);
			attribute_name();
			setState(226);
			match(T__23);
			setState(227);
			literal();
			setState(235);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(228);
				match(T__8);
				setState(229);
				attribute_name();
				setState(230);
				match(T__23);
				setState(231);
				literal();
				}
				}
				setState(237);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(238);
			match(T__24);
			setState(239);
			condition();
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

	public static class Insert_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public List<LiteralContext> literal() {
			return getRuleContexts(LiteralContext.class);
		}
		public LiteralContext literal(int i) {
			return getRuleContext(LiteralContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Insert_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insert_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterInsert_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitInsert_cmd(this);
		}
	}

	public final Insert_cmdContext insert_cmd() throws RecognitionException {
		Insert_cmdContext _localctx = new Insert_cmdContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_insert_cmd);
		int _la;
		try {
			setState(260);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(241);
				match(T__25);
				setState(242);
				relation_name();
				setState(243);
				match(T__26);
				setState(244);
				match(T__2);
				setState(245);
				literal();
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__8) {
					{
					{
					setState(246);
					match(T__8);
					setState(247);
					literal();
					}
					}
					setState(252);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(253);
				match(T__3);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(255);
				match(T__25);
				setState(256);
				relation_name();
				setState(257);
				match(T__27);
				setState(258);
				expr();
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

	public static class Delete_cmdContext extends ParserRuleContext {
		public Relation_nameContext relation_name() {
			return getRuleContext(Relation_nameContext.class,0);
		}
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public Delete_cmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_delete_cmd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterDelete_cmd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitDelete_cmd(this);
		}
	}

	public final Delete_cmdContext delete_cmd() throws RecognitionException {
		Delete_cmdContext _localctx = new Delete_cmdContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_delete_cmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			match(T__28);
			setState(263);
			relation_name();
			setState(264);
			match(T__24);
			setState(265);
			condition();
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

	public static class Typed_attribute_listContext extends ParserRuleContext {
		public List<Attribute_nameContext> attribute_name() {
			return getRuleContexts(Attribute_nameContext.class);
		}
		public Attribute_nameContext attribute_name(int i) {
			return getRuleContext(Attribute_nameContext.class,i);
		}
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public Typed_attribute_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typed_attribute_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterTyped_attribute_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitTyped_attribute_list(this);
		}
	}

	public final Typed_attribute_listContext typed_attribute_list() throws RecognitionException {
		Typed_attribute_listContext _localctx = new Typed_attribute_listContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_typed_attribute_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
			attribute_name();
			setState(268);
			type();
			setState(275);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(269);
				match(T__8);
				setState(270);
				attribute_name();
				setState(271);
				type();
				}
				}
				setState(277);
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

	public static class TypeContext extends ParserRuleContext {
		public IntegerContext integer() {
			return getRuleContext(IntegerContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitType(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_type);
		try {
			setState(284);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__29:
				enterOuterAlt(_localctx, 1);
				{
				setState(278);
				match(T__29);
				setState(279);
				match(T__2);
				setState(280);
				integer();
				setState(281);
				match(T__3);
				}
				break;
			case T__30:
				enterOuterAlt(_localctx, 2);
				{
				setState(283);
				match(T__30);
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

	public static class IntegerContext extends ParserRuleContext {
		public List<TerminalNode> DIGIT() { return getTokens(dmlParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(dmlParser.DIGIT, i);
		}
		public IntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integer; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).enterInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof dmlListener ) ((dmlListener)listener).exitInteger(this);
		}
	}

	public final IntegerContext integer() throws RecognitionException {
		IntegerContext _localctx = new IntegerContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_integer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(287); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(286);
				match(DIGIT);
				}
				}
				setState(289); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3+\u0126\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\3\2\3\2\6\2I\n\2\r\2\16\2J\3\3\3\3\3\3\3\3\3\3\3\4\3"+
		"\4\3\5\3\5\7\5V\n\5\f\5\16\5Y\13\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6"+
		"c\n\6\3\7\3\7\3\7\3\7\3\7\5\7j\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t"+
		"\7\tu\n\t\f\t\16\tx\13\t\3\n\3\n\3\n\7\n}\n\n\f\n\16\n\u0080\13\n\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u008a\n\13\3\f\3\f\3\r\3\r\5"+
		"\r\u0090\n\r\3\16\3\16\3\17\3\17\5\17\u0096\n\17\3\20\3\20\3\20\3\20\3"+
		"\20\3\20\3\21\3\21\3\21\7\21\u00a1\n\21\f\21\16\21\u00a4\13\21\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\25\3"+
		"\25\3\25\3\25\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3"+
		"\27\3\27\5\27\u00c5\n\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\32"+
		"\3\32\3\32\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35"+
		"\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36"+
		"\7\36\u00ec\n\36\f\36\16\36\u00ef\13\36\3\36\3\36\3\36\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\7\37\u00fb\n\37\f\37\16\37\u00fe\13\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\3\37\5\37\u0107\n\37\3 \3 \3 \3 \3 \3!\3!\3!\3!\3"+
		"!\3!\7!\u0114\n!\f!\16!\u0117\13!\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u011f\n"+
		"\"\3#\6#\u0122\n#\r#\16#\u0123\3#\2\2$\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(*,.\60\62\64\668:<>@BD\2\4\3\2#$\3\2%*\2\u0122\2H\3\2\2\2"+
		"\4L\3\2\2\2\6Q\3\2\2\2\bS\3\2\2\2\nb\3\2\2\2\fi\3\2\2\2\16k\3\2\2\2\20"+
		"q\3\2\2\2\22y\3\2\2\2\24\u0089\3\2\2\2\26\u008b\3\2\2\2\30\u008f\3\2\2"+
		"\2\32\u0091\3\2\2\2\34\u0095\3\2\2\2\36\u0097\3\2\2\2 \u009d\3\2\2\2\""+
		"\u00a5\3\2\2\2$\u00ab\3\2\2\2&\u00af\3\2\2\2(\u00b3\3\2\2\2*\u00b7\3\2"+
		"\2\2,\u00c4\3\2\2\2.\u00c8\3\2\2\2\60\u00cb\3\2\2\2\62\u00ce\3\2\2\2\64"+
		"\u00d1\3\2\2\2\66\u00d3\3\2\2\28\u00d6\3\2\2\2:\u00e0\3\2\2\2<\u0106\3"+
		"\2\2\2>\u0108\3\2\2\2@\u010d\3\2\2\2B\u011e\3\2\2\2D\u0121\3\2\2\2FI\5"+
		"\4\3\2GI\5,\27\2HF\3\2\2\2HG\3\2\2\2IJ\3\2\2\2JH\3\2\2\2JK\3\2\2\2K\3"+
		"\3\2\2\2LM\5\6\4\2MN\7\3\2\2NO\5\n\6\2OP\7\4\2\2P\5\3\2\2\2QR\5\b\5\2"+
		"R\7\3\2\2\2SW\7#\2\2TV\t\2\2\2UT\3\2\2\2VY\3\2\2\2WU\3\2\2\2WX\3\2\2\2"+
		"X\t\3\2\2\2YW\3\2\2\2Zc\5\f\7\2[c\5\16\b\2\\c\5\36\20\2]c\5\"\22\2^c\5"+
		"$\23\2_c\5&\24\2`c\5(\25\2ac\5*\26\2bZ\3\2\2\2b[\3\2\2\2b\\\3\2\2\2b]"+
		"\3\2\2\2b^\3\2\2\2b_\3\2\2\2b`\3\2\2\2ba\3\2\2\2c\13\3\2\2\2dj\5\6\4\2"+
		"ef\7\5\2\2fg\5\n\6\2gh\7\6\2\2hj\3\2\2\2id\3\2\2\2ie\3\2\2\2j\r\3\2\2"+
		"\2kl\7\7\2\2lm\7\5\2\2mn\5\20\t\2no\7\6\2\2op\5\f\7\2p\17\3\2\2\2qv\5"+
		"\22\n\2rs\7\b\2\2su\5\22\n\2tr\3\2\2\2ux\3\2\2\2vt\3\2\2\2vw\3\2\2\2w"+
		"\21\3\2\2\2xv\3\2\2\2y~\5\24\13\2z{\7\t\2\2{}\5\24\13\2|z\3\2\2\2}\u0080"+
		"\3\2\2\2~|\3\2\2\2~\177\3\2\2\2\177\23\3\2\2\2\u0080~\3\2\2\2\u0081\u0082"+
		"\5\30\r\2\u0082\u0083\5\26\f\2\u0083\u0084\5\30\r\2\u0084\u008a\3\2\2"+
		"\2\u0085\u0086\7\5\2\2\u0086\u0087\5\20\t\2\u0087\u0088\7\6\2\2\u0088"+
		"\u008a\3\2\2\2\u0089\u0081\3\2\2\2\u0089\u0085\3\2\2\2\u008a\25\3\2\2"+
		"\2\u008b\u008c\t\3\2\2\u008c\27\3\2\2\2\u008d\u0090\5\32\16\2\u008e\u0090"+
		"\5\34\17\2\u008f\u008d\3\2\2\2\u008f\u008e\3\2\2\2\u0090\31\3\2\2\2\u0091"+
		"\u0092\5\b\5\2\u0092\33\3\2\2\2\u0093\u0096\7\"\2\2\u0094\u0096\5D#\2"+
		"\u0095\u0093\3\2\2\2\u0095\u0094\3\2\2\2\u0096\35\3\2\2\2\u0097\u0098"+
		"\7\n\2\2\u0098\u0099\7\5\2\2\u0099\u009a\5 \21\2\u009a\u009b\7\6\2\2\u009b"+
		"\u009c\5\f\7\2\u009c\37\3\2\2\2\u009d\u00a2\5\32\16\2\u009e\u009f\7\13"+
		"\2\2\u009f\u00a1\5\32\16\2\u00a0\u009e\3\2\2\2\u00a1\u00a4\3\2\2\2\u00a2"+
		"\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3!\3\2\2\2\u00a4\u00a2\3\2\2\2"+
		"\u00a5\u00a6\7\f\2\2\u00a6\u00a7\7\5\2\2\u00a7\u00a8\5 \21\2\u00a8\u00a9"+
		"\7\6\2\2\u00a9\u00aa\5\f\7\2\u00aa#\3\2\2\2\u00ab\u00ac\5\f\7\2\u00ac"+
		"\u00ad\7\r\2\2\u00ad\u00ae\5\f\7\2\u00ae%\3\2\2\2\u00af\u00b0\5\f\7\2"+
		"\u00b0\u00b1\7\16\2\2\u00b1\u00b2\5\f\7\2\u00b2\'\3\2\2\2\u00b3\u00b4"+
		"\5\f\7\2\u00b4\u00b5\7\17\2\2\u00b5\u00b6\5\f\7\2\u00b6)\3\2\2\2\u00b7"+
		"\u00b8\5\f\7\2\u00b8\u00b9\7\20\2\2\u00b9\u00ba\5\f\7\2\u00ba+\3\2\2\2"+
		"\u00bb\u00c5\5.\30\2\u00bc\u00c5\5\60\31\2\u00bd\u00c5\5\62\32\2\u00be"+
		"\u00c5\5\64\33\2\u00bf\u00c5\5\66\34\2\u00c0\u00c5\58\35\2\u00c1\u00c5"+
		"\5:\36\2\u00c2\u00c5\5<\37\2\u00c3\u00c5\5> \2\u00c4\u00bb\3\2\2\2\u00c4"+
		"\u00bc\3\2\2\2\u00c4\u00bd\3\2\2\2\u00c4\u00be\3\2\2\2\u00c4\u00bf\3\2"+
		"\2\2\u00c4\u00c0\3\2\2\2\u00c4\u00c1\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4"+
		"\u00c3\3\2\2\2\u00c5\u00c6\3\2\2\2\u00c6\u00c7\7\4\2\2\u00c7-\3\2\2\2"+
		"\u00c8\u00c9\7\21\2\2\u00c9\u00ca\5\6\4\2\u00ca/\3\2\2\2\u00cb\u00cc\7"+
		"\22\2\2\u00cc\u00cd\5\6\4\2\u00cd\61\3\2\2\2\u00ce\u00cf\7\23\2\2\u00cf"+
		"\u00d0\5\6\4\2\u00d0\63\3\2\2\2\u00d1\u00d2\7\24\2\2\u00d2\65\3\2\2\2"+
		"\u00d3\u00d4\7\25\2\2\u00d4\u00d5\5\f\7\2\u00d5\67\3\2\2\2\u00d6\u00d7"+
		"\7\26\2\2\u00d7\u00d8\5\6\4\2\u00d8\u00d9\7\5\2\2\u00d9\u00da\5@!\2\u00da"+
		"\u00db\7\6\2\2\u00db\u00dc\7\27\2\2\u00dc\u00dd\7\5\2\2\u00dd\u00de\5"+
		" \21\2\u00de\u00df\7\6\2\2\u00df9\3\2\2\2\u00e0\u00e1\7\30\2\2\u00e1\u00e2"+
		"\5\6\4\2\u00e2\u00e3\7\31\2\2\u00e3\u00e4\5\32\16\2\u00e4\u00e5\7\32\2"+
		"\2\u00e5\u00ed\5\34\17\2\u00e6\u00e7\7\13\2\2\u00e7\u00e8\5\32\16\2\u00e8"+
		"\u00e9\7\32\2\2\u00e9\u00ea\5\34\17\2\u00ea\u00ec\3\2\2\2\u00eb\u00e6"+
		"\3\2\2\2\u00ec\u00ef\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee"+
		"\u00f0\3\2\2\2\u00ef\u00ed\3\2\2\2\u00f0\u00f1\7\33\2\2\u00f1\u00f2\5"+
		"\20\t\2\u00f2;\3\2\2\2\u00f3\u00f4\7\34\2\2\u00f4\u00f5\5\6\4\2\u00f5"+
		"\u00f6\7\35\2\2\u00f6\u00f7\7\5\2\2\u00f7\u00fc\5\34\17\2\u00f8\u00f9"+
		"\7\13\2\2\u00f9\u00fb\5\34\17\2\u00fa\u00f8\3\2\2\2\u00fb\u00fe\3\2\2"+
		"\2\u00fc\u00fa\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00ff\3\2\2\2\u00fe\u00fc"+
		"\3\2\2\2\u00ff\u0100\7\6\2\2\u0100\u0107\3\2\2\2\u0101\u0102\7\34\2\2"+
		"\u0102\u0103\5\6\4\2\u0103\u0104\7\36\2\2\u0104\u0105\5\n\6\2\u0105\u0107"+
		"\3\2\2\2\u0106\u00f3\3\2\2\2\u0106\u0101\3\2\2\2\u0107=\3\2\2\2\u0108"+
		"\u0109\7\37\2\2\u0109\u010a\5\6\4\2\u010a\u010b\7\33\2\2\u010b\u010c\5"+
		"\20\t\2\u010c?\3\2\2\2\u010d\u010e\5\32\16\2\u010e\u0115\5B\"\2\u010f"+
		"\u0110\7\13\2\2\u0110\u0111\5\32\16\2\u0111\u0112\5B\"\2\u0112\u0114\3"+
		"\2\2\2\u0113\u010f\3\2\2\2\u0114\u0117\3\2\2\2\u0115\u0113\3\2\2\2\u0115"+
		"\u0116\3\2\2\2\u0116A\3\2\2\2\u0117\u0115\3\2\2\2\u0118\u0119\7 \2\2\u0119"+
		"\u011a\7\5\2\2\u011a\u011b\5D#\2\u011b\u011c\7\6\2\2\u011c\u011f\3\2\2"+
		"\2\u011d\u011f\7!\2\2\u011e\u0118\3\2\2\2\u011e\u011d\3\2\2\2\u011fC\3"+
		"\2\2\2\u0120\u0122\7$\2\2\u0121\u0120\3\2\2\2\u0122\u0123\3\2\2\2\u0123"+
		"\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124E\3\2\2\2\24HJWbiv~\u0089\u008f"+
		"\u0095\u00a2\u00c4\u00ed\u00fc\u0106\u0115\u011e\u0123";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}