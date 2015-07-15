#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.h"

/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

/* The following are simple heuristics for rendering terminals */
/* You may wish to change them */
void renderCC(Char c);
void renderCS(String s);
void indent(void);
void backup(void);


char* printProgram(Program p);
char* printStm(Stm p);
char* printExp(Exp p);

void ppExternal_declaration(External_declaration p, int i);
void ppExtends(Extends p, int i);
void ppJump_stm(Jump_stm p, int i);
void ppType_specifier(Type_specifier p, int i);
void ppStorage_class_specifier(Storage_class_specifier p, int i);
void ppType_qualifier(Type_qualifier p, int i);
void ppUnary_operator(Unary_operator p, int i);
void ppAssignment_op(Assignment_op p, int i);
void ppInit_declarator(Init_declarator p, int i);
void ppEnumerator(Enumerator p, int i);
void ppExp(Exp p, int i);
void ppDeclaration_specifier(Declaration_specifier p, int i);
void ppProgram(Program p, int i);
void ppListExternal_declaration(ListExternal_declaration p, int i);
void ppFunction_def(Function_def p, int i);
void ppDec(Dec p, int i);
void ppListDec(ListDec p, int i);
void ppListDeclaration_specifier(ListDeclaration_specifier p, int i);
void ppListInit_declarator(ListInit_declarator p, int i);
void ppStruct_or_union_spec(Struct_or_union_spec p, int i);
void ppStruct_or_union(Struct_or_union p, int i);
void ppListStruct_dec(ListStruct_dec p, int i);
void ppStruct_dec(Struct_dec p, int i);
void ppListSpec_qual(ListSpec_qual p, int i);
void ppSpec_qual(Spec_qual p, int i);
void ppListStruct_declarator(ListStruct_declarator p, int i);
void ppStruct_declarator(Struct_declarator p, int i);
void ppEnum_specifier(Enum_specifier p, int i);
void ppListEnumerator(ListEnumerator p, int i);
void ppDeclarator(Declarator p, int i);
void ppDirect_declarator(Direct_declarator p, int i);
void ppPointer(Pointer p, int i);
void ppListType_qualifier(ListType_qualifier p, int i);
void ppParameter_type(Parameter_type p, int i);
void ppParameter_declarations(Parameter_declarations p, int i);
void ppParameter_declaration(Parameter_declaration p, int i);
void ppListIdent(ListIdent p, int i);
void ppInitializer(Initializer p, int i);
void ppInitializers(Initializers p, int i);
void ppType_name(Type_name p, int i);
void ppAbstract_declarator(Abstract_declarator p, int i);
void ppDir_abs_dec(Dir_abs_dec p, int i);
void ppStm(Stm p, int i);
void ppLabeled_stm(Labeled_stm p, int i);
void ppCompound_stm(Compound_stm p, int i);
void ppExpression_stm(Expression_stm p, int i);
void ppSelection_stm(Selection_stm p, int i);
void ppIter_stm(Iter_stm p, int i);
void ppListStm(ListStm p, int i);
void ppConstant(Constant p, int i);
void ppConstant_expression(Constant_expression p, int i);
void ppListExp(ListExp p, int i);

char* showProgram(Program p);
char* showStm(Stm p);
char* showExp(Exp p);

void shExternal_declaration(External_declaration p);
void shExtends(Extends p);
void shJump_stm(Jump_stm p);
void shType_specifier(Type_specifier p);
void shStorage_class_specifier(Storage_class_specifier p);
void shType_qualifier(Type_qualifier p);
void shUnary_operator(Unary_operator p);
void shAssignment_op(Assignment_op p);
void shInit_declarator(Init_declarator p);
void shEnumerator(Enumerator p);
void shExp(Exp p);
void shDeclaration_specifier(Declaration_specifier p);
void shProgram(Program p);
void shListExternal_declaration(ListExternal_declaration p);
void shFunction_def(Function_def p);
void shDec(Dec p);
void shListDec(ListDec p);
void shListDeclaration_specifier(ListDeclaration_specifier p);
void shListInit_declarator(ListInit_declarator p);
void shStruct_or_union_spec(Struct_or_union_spec p);
void shStruct_or_union(Struct_or_union p);
void shListStruct_dec(ListStruct_dec p);
void shStruct_dec(Struct_dec p);
void shListSpec_qual(ListSpec_qual p);
void shSpec_qual(Spec_qual p);
void shListStruct_declarator(ListStruct_declarator p);
void shStruct_declarator(Struct_declarator p);
void shEnum_specifier(Enum_specifier p);
void shListEnumerator(ListEnumerator p);
void shDeclarator(Declarator p);
void shDirect_declarator(Direct_declarator p);
void shPointer(Pointer p);
void shListType_qualifier(ListType_qualifier p);
void shParameter_type(Parameter_type p);
void shParameter_declarations(Parameter_declarations p);
void shParameter_declaration(Parameter_declaration p);
void shListIdent(ListIdent p);
void shInitializer(Initializer p);
void shInitializers(Initializers p);
void shType_name(Type_name p);
void shAbstract_declarator(Abstract_declarator p);
void shDir_abs_dec(Dir_abs_dec p);
void shStm(Stm p);
void shLabeled_stm(Labeled_stm p);
void shCompound_stm(Compound_stm p);
void shExpression_stm(Expression_stm p);
void shSelection_stm(Selection_stm p);
void shIter_stm(Iter_stm p);
void shListStm(ListStm p);
void shConstant(Constant p);
void shConstant_expression(Constant_expression p);
void shListExp(ListExp p);

void ppUnsigned(String s, int i);
void ppLong(String s, int i);
void ppUnsignedLong(String s, int i);
void ppHexadecimal(String s, int i);
void ppHexUnsigned(String s, int i);
void ppHexLong(String s, int i);
void ppHexUnsLong(String s, int i);
void ppOctal(String s, int i);
void ppOctalUnsigned(String s, int i);
void ppOctalLong(String s, int i);
void ppOctalUnsLong(String s, int i);
void ppCDouble(String s, int i);
void ppCFloat(String s, int i);
void ppCLongDouble(String s, int i);
void shUnsigned(String s);
void shLong(String s);
void shUnsignedLong(String s);
void shHexadecimal(String s);
void shHexUnsigned(String s);
void shHexLong(String s);
void shHexUnsLong(String s);
void shOctal(String s);
void shOctalUnsigned(String s);
void shOctalLong(String s);
void shOctalUnsLong(String s);
void shCDouble(String s);
void shCFloat(String s);
void shCLongDouble(String s);
void ppInteger(Integer n, int i);
void ppDouble(Double d, int i);
void ppChar(Char c, int i);
void ppString(String s, int i);
void ppIdent(String s, int i);
void shInteger(Integer n);
void shDouble(Double d);
void shChar(Char c);
void shString(String s);
void shIdent(String s);
void bufAppendS(const char* s);
void bufAppendC(const char c);
void bufReset(void);
void resizeBuffer(void);

#endif

