#ifndef DOGE_HEADER_H_
# define DOGE_HEADER_H_

#include "Absyn.h"

#ifdef __GNUC__
# define UNUSED __attribute__ ((unused))
#else
# define UNUSED
#endif

void visitExternal_declaration(External_declaration p);
void visitExtends(Extends p);
void visitJump_stm(Jump_stm p);
void visitType_specifier(Type_specifier p);
void visitStorage_class_specifier(Storage_class_specifier p);
void visitType_qualifier(Type_qualifier p);
void visitUnary_operator(Unary_operator p);
void visitAssignment_op(Assignment_op p);
void visitInit_declarator(Init_declarator p);
void visitEnumerator(Enumerator p);
void visitExp(Exp p);
void visitDeclaration_specifier(Declaration_specifier p);
void visitProgram(Program p);
void visitListExternal_declaration(ListExternal_declaration p);
void visitFunction_def(Function_def p);
void visitDec(Dec p);
void visitListDec(ListDec p);
void visitListDeclaration_specifier(ListDeclaration_specifier p);
void visitListInit_declarator(ListInit_declarator p);
void visitStruct_or_union_spec(Struct_or_union_spec p);
void visitStruct_or_union(Struct_or_union p);
void visitListStruct_dec(ListStruct_dec p);
void visitStruct_dec(Struct_dec p);
void visitListSpec_qual(ListSpec_qual p);
void visitSpec_qual(Spec_qual p);
void visitListStruct_declarator(ListStruct_declarator p);
void visitStruct_declarator(Struct_declarator p);
void visitEnum_specifier(Enum_specifier p);
void visitListEnumerator(ListEnumerator p);
void visitDeclarator(Declarator p);
void visitDirect_declarator(Direct_declarator p);
void visitPointer(Pointer p);
void visitListType_qualifier(ListType_qualifier p);
void visitParameter_type(Parameter_type p);
void visitParameter_declarations(Parameter_declarations p);
void visitParameter_declaration(Parameter_declaration p);
void visitListIdent(ListIdent p);
void visitInitializer(Initializer p);
void visitInitializers(Initializers p);
void visitType_name(Type_name p);
void visitAbstract_declarator(Abstract_declarator p);
void visitDir_abs_dec(Dir_abs_dec p);
void visitStm(Stm p);
void visitLabeled_stm(Labeled_stm p);
void visitCompound_stm(Compound_stm p);
void visitExpression_stm(Expression_stm p);
void visitSelection_stm(Selection_stm p);
void visitIter_stm(Iter_stm p);
void visitListStm(ListStm p);
void visitConstant(Constant p);
void visitConstant_expression(Constant_expression p);
void visitListExp(ListExp p);

void visitUnsigned(Unsigned p);
void visitLong(Long p);
void visitUnsignedLong(UnsignedLong p);
void visitHexadecimal(Hexadecimal p);
void visitHexUnsigned(HexUnsigned p);
void visitHexLong(HexLong p);
void visitHexUnsLong(HexUnsLong p);
void visitOctal(Octal p);
void visitOctalUnsigned(OctalUnsigned p);
void visitOctalLong(OctalLong p);
void visitOctalUnsLong(OctalUnsLong p);
void visitCDouble(CDouble p);
void visitCFloat(CFloat p);
void visitCLongDouble(CLongDouble p);
void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);

#endif /* !DOGE_HEADER_H_ */
