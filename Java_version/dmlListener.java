// Generated from dml.g4 by ANTLR 4.7
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link dmlParser}.
 */
public interface dmlListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link dmlParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(dmlParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(dmlParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#query}.
	 * @param ctx the parse tree
	 */
	void enterQuery(dmlParser.QueryContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#query}.
	 * @param ctx the parse tree
	 */
	void exitQuery(dmlParser.QueryContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#relation_name}.
	 * @param ctx the parse tree
	 */
	void enterRelation_name(dmlParser.Relation_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#relation_name}.
	 * @param ctx the parse tree
	 */
	void exitRelation_name(dmlParser.Relation_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#identifier}.
	 * @param ctx the parse tree
	 */
	void enterIdentifier(dmlParser.IdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#identifier}.
	 * @param ctx the parse tree
	 */
	void exitIdentifier(dmlParser.IdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(dmlParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(dmlParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code atomicRelationName}
	 * labeled alternative in {@link dmlParser#atomic_expr}.
	 * @param ctx the parse tree
	 */
	void enterAtomicRelationName(dmlParser.AtomicRelationNameContext ctx);
	/**
	 * Exit a parse tree produced by the {@code atomicRelationName}
	 * labeled alternative in {@link dmlParser#atomic_expr}.
	 * @param ctx the parse tree
	 */
	void exitAtomicRelationName(dmlParser.AtomicRelationNameContext ctx);
	/**
	 * Enter a parse tree produced by the {@code atomicParens}
	 * labeled alternative in {@link dmlParser#atomic_expr}.
	 * @param ctx the parse tree
	 */
	void enterAtomicParens(dmlParser.AtomicParensContext ctx);
	/**
	 * Exit a parse tree produced by the {@code atomicParens}
	 * labeled alternative in {@link dmlParser#atomic_expr}.
	 * @param ctx the parse tree
	 */
	void exitAtomicParens(dmlParser.AtomicParensContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#selection}.
	 * @param ctx the parse tree
	 */
	void enterSelection(dmlParser.SelectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#selection}.
	 * @param ctx the parse tree
	 */
	void exitSelection(dmlParser.SelectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(dmlParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(dmlParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#conjunction}.
	 * @param ctx the parse tree
	 */
	void enterConjunction(dmlParser.ConjunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#conjunction}.
	 * @param ctx the parse tree
	 */
	void exitConjunction(dmlParser.ConjunctionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code comparisonOperation}
	 * labeled alternative in {@link dmlParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparisonOperation(dmlParser.ComparisonOperationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code comparisonOperation}
	 * labeled alternative in {@link dmlParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparisonOperation(dmlParser.ComparisonOperationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code comparisonParens}
	 * labeled alternative in {@link dmlParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparisonParens(dmlParser.ComparisonParensContext ctx);
	/**
	 * Exit a parse tree produced by the {@code comparisonParens}
	 * labeled alternative in {@link dmlParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparisonParens(dmlParser.ComparisonParensContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#op}.
	 * @param ctx the parse tree
	 */
	void enterOp(dmlParser.OpContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#op}.
	 * @param ctx the parse tree
	 */
	void exitOp(dmlParser.OpContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#operand}.
	 * @param ctx the parse tree
	 */
	void enterOperand(dmlParser.OperandContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#operand}.
	 * @param ctx the parse tree
	 */
	void exitOperand(dmlParser.OperandContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#attribute_name}.
	 * @param ctx the parse tree
	 */
	void enterAttribute_name(dmlParser.Attribute_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#attribute_name}.
	 * @param ctx the parse tree
	 */
	void exitAttribute_name(dmlParser.Attribute_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#literal}.
	 * @param ctx the parse tree
	 */
	void enterLiteral(dmlParser.LiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#literal}.
	 * @param ctx the parse tree
	 */
	void exitLiteral(dmlParser.LiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#projection}.
	 * @param ctx the parse tree
	 */
	void enterProjection(dmlParser.ProjectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#projection}.
	 * @param ctx the parse tree
	 */
	void exitProjection(dmlParser.ProjectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#attribute_list}.
	 * @param ctx the parse tree
	 */
	void enterAttribute_list(dmlParser.Attribute_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#attribute_list}.
	 * @param ctx the parse tree
	 */
	void exitAttribute_list(dmlParser.Attribute_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#renaming}.
	 * @param ctx the parse tree
	 */
	void enterRenaming(dmlParser.RenamingContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#renaming}.
	 * @param ctx the parse tree
	 */
	void exitRenaming(dmlParser.RenamingContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#union}.
	 * @param ctx the parse tree
	 */
	void enterUnion(dmlParser.UnionContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#union}.
	 * @param ctx the parse tree
	 */
	void exitUnion(dmlParser.UnionContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#difference}.
	 * @param ctx the parse tree
	 */
	void enterDifference(dmlParser.DifferenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#difference}.
	 * @param ctx the parse tree
	 */
	void exitDifference(dmlParser.DifferenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#product}.
	 * @param ctx the parse tree
	 */
	void enterProduct(dmlParser.ProductContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#product}.
	 * @param ctx the parse tree
	 */
	void exitProduct(dmlParser.ProductContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#natural_join}.
	 * @param ctx the parse tree
	 */
	void enterNatural_join(dmlParser.Natural_joinContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#natural_join}.
	 * @param ctx the parse tree
	 */
	void exitNatural_join(dmlParser.Natural_joinContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#command}.
	 * @param ctx the parse tree
	 */
	void enterCommand(dmlParser.CommandContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#command}.
	 * @param ctx the parse tree
	 */
	void exitCommand(dmlParser.CommandContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#open_cmd}.
	 * @param ctx the parse tree
	 */
	void enterOpen_cmd(dmlParser.Open_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#open_cmd}.
	 * @param ctx the parse tree
	 */
	void exitOpen_cmd(dmlParser.Open_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#close_cmd}.
	 * @param ctx the parse tree
	 */
	void enterClose_cmd(dmlParser.Close_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#close_cmd}.
	 * @param ctx the parse tree
	 */
	void exitClose_cmd(dmlParser.Close_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#write_cmd}.
	 * @param ctx the parse tree
	 */
	void enterWrite_cmd(dmlParser.Write_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#write_cmd}.
	 * @param ctx the parse tree
	 */
	void exitWrite_cmd(dmlParser.Write_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#exit_cmd}.
	 * @param ctx the parse tree
	 */
	void enterExit_cmd(dmlParser.Exit_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#exit_cmd}.
	 * @param ctx the parse tree
	 */
	void exitExit_cmd(dmlParser.Exit_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#show_cmd}.
	 * @param ctx the parse tree
	 */
	void enterShow_cmd(dmlParser.Show_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#show_cmd}.
	 * @param ctx the parse tree
	 */
	void exitShow_cmd(dmlParser.Show_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#create_cmd}.
	 * @param ctx the parse tree
	 */
	void enterCreate_cmd(dmlParser.Create_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#create_cmd}.
	 * @param ctx the parse tree
	 */
	void exitCreate_cmd(dmlParser.Create_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#update_cmd}.
	 * @param ctx the parse tree
	 */
	void enterUpdate_cmd(dmlParser.Update_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#update_cmd}.
	 * @param ctx the parse tree
	 */
	void exitUpdate_cmd(dmlParser.Update_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#insert_cmd}.
	 * @param ctx the parse tree
	 */
	void enterInsert_cmd(dmlParser.Insert_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#insert_cmd}.
	 * @param ctx the parse tree
	 */
	void exitInsert_cmd(dmlParser.Insert_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#delete_cmd}.
	 * @param ctx the parse tree
	 */
	void enterDelete_cmd(dmlParser.Delete_cmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#delete_cmd}.
	 * @param ctx the parse tree
	 */
	void exitDelete_cmd(dmlParser.Delete_cmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#typed_attribute_list}.
	 * @param ctx the parse tree
	 */
	void enterTyped_attribute_list(dmlParser.Typed_attribute_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#typed_attribute_list}.
	 * @param ctx the parse tree
	 */
	void exitTyped_attribute_list(dmlParser.Typed_attribute_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(dmlParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(dmlParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link dmlParser#integer}.
	 * @param ctx the parse tree
	 */
	void enterInteger(dmlParser.IntegerContext ctx);
	/**
	 * Exit a parse tree produced by {@link dmlParser#integer}.
	 * @param ctx the parse tree
	 */
	void exitInteger(dmlParser.IntegerContext ctx);
}