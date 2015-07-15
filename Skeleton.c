/*** BNFC-Generated Visitor Traversal Skeleton. ***/
/* This traverses the abstract syntax tree.
   To use, copy Skeleton.h and Skeleton.c to
   new files. */

#include <stdlib.h>
#include <stdio.h>

#include "Skeleton.h"

void visitExternal_declaration(External_declaration _p_)
{
  switch(_p_->kind)
  {
  case is_Class:
    /* Code for Class Goes Here */
    visitIdent(_p_->u.class_.ident_);
    visitExtends(_p_->u.class_.extends_);
    visitListExternal_declaration(_p_->u.class_.listexternal_declaration_);
    break;  case is_Namespace:
    /* Code for Namespace Goes Here */
    visitIdent(_p_->u.namespace_.ident_);
    break;  case is_Afunc:
    /* Code for Afunc Goes Here */
    visitFunction_def(_p_->u.afunc_.function_def_);
    break;  case is_Global:
    /* Code for Global Goes Here */
    visitDec(_p_->u.global_.dec_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing External_declaration!\n");
    exit(1);
  }
}

void visitExtends(Extends _p_)
{
  switch(_p_->kind)
  {
  case is_Inheritance:
    /* Code for Inheritance Goes Here */
    visitIdent(_p_->u.inheritance_.ident_);
    break;  case is_NoInheritance:
    /* Code for NoInheritance Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Extends!\n");
    exit(1);
  }
}

void visitJump_stm(Jump_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SjumpFour:
    /* Code for SjumpFour Goes Here */
    break;  case is_SjumpFive:
    /* Code for SjumpFive Goes Here */
    visitExp(_p_->u.sjumpfive_.exp_);
    break;  case is_SjumpOne:
    /* Code for SjumpOne Goes Here */
    visitIdent(_p_->u.sjumpone_.ident_);
    break;  case is_SjumpTwo:
    /* Code for SjumpTwo Goes Here */
    break;  case is_SjumpThree:
    /* Code for SjumpThree Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Jump_stm!\n");
    exit(1);
  }
}

void visitType_specifier(Type_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_Tvoid:
    /* Code for Tvoid Goes Here */
    break;  case is_Tchar:
    /* Code for Tchar Goes Here */
    break;  case is_Tshort:
    /* Code for Tshort Goes Here */
    break;  case is_Tint:
    /* Code for Tint Goes Here */
    break;  case is_Tlong:
    /* Code for Tlong Goes Here */
    break;  case is_Tfloat:
    /* Code for Tfloat Goes Here */
    break;  case is_Tdouble:
    /* Code for Tdouble Goes Here */
    break;  case is_Tsigned:
    /* Code for Tsigned Goes Here */
    break;  case is_Tunsigned:
    /* Code for Tunsigned Goes Here */
    break;  case is_Tstruct:
    /* Code for Tstruct Goes Here */
    visitStruct_or_union_spec(_p_->u.tstruct_.struct_or_union_spec_);
    break;  case is_Tenum:
    /* Code for Tenum Goes Here */
    visitEnum_specifier(_p_->u.tenum_.enum_specifier_);
    break;  case is_Tname:
    /* Code for Tname Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Type_specifier!\n");
    exit(1);
  }
}

void visitStorage_class_specifier(Storage_class_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_MyType:
    /* Code for MyType Goes Here */
    break;  case is_GlobalPrograms:
    /* Code for GlobalPrograms Goes Here */
    break;  case is_LocalProgram:
    /* Code for LocalProgram Goes Here */
    break;  case is_LocalBlock:
    /* Code for LocalBlock Goes Here */
    break;  case is_LocalReg:
    /* Code for LocalReg Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Storage_class_specifier!\n");
    exit(1);
  }
}

void visitType_qualifier(Type_qualifier _p_)
{
  switch(_p_->kind)
  {
  case is_Const:
    /* Code for Const Goes Here */
    break;  case is_NoOptim:
    /* Code for NoOptim Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Type_qualifier!\n");
    exit(1);
  }
}

void visitUnary_operator(Unary_operator _p_)
{
  switch(_p_->kind)
  {
  case is_Logicalneg:
    /* Code for Logicalneg Goes Here */
    break;  case is_Address:
    /* Code for Address Goes Here */
    break;  case is_Indirection:
    /* Code for Indirection Goes Here */
    break;  case is_Plus:
    /* Code for Plus Goes Here */
    break;  case is_Negative:
    /* Code for Negative Goes Here */
    break;  case is_Complement:
    /* Code for Complement Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Unary_operator!\n");
    exit(1);
  }
}

void visitAssignment_op(Assignment_op _p_)
{
  switch(_p_->kind)
  {
  case is_Assign:
    /* Code for Assign Goes Here */
    break;  case is_AssignMul:
    /* Code for AssignMul Goes Here */
    break;  case is_AssignDiv:
    /* Code for AssignDiv Goes Here */
    break;  case is_AssignMod:
    /* Code for AssignMod Goes Here */
    break;  case is_AssignAdd:
    /* Code for AssignAdd Goes Here */
    break;  case is_AssignSub:
    /* Code for AssignSub Goes Here */
    break;  case is_AssignLeft:
    /* Code for AssignLeft Goes Here */
    break;  case is_AssignRight:
    /* Code for AssignRight Goes Here */
    break;  case is_AssignAnd:
    /* Code for AssignAnd Goes Here */
    break;  case is_AssignXor:
    /* Code for AssignXor Goes Here */
    break;  case is_AssignOr:
    /* Code for AssignOr Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Assignment_op!\n");
    exit(1);
  }
}

void visitInit_declarator(Init_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_InitDecl:
    /* Code for InitDecl Goes Here */
    visitDeclarator(_p_->u.initdecl_.declarator_);
    visitInitializer(_p_->u.initdecl_.initializer_);
    break;  case is_OnlyDecl:
    /* Code for OnlyDecl Goes Here */
    visitDeclarator(_p_->u.onlydecl_.declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Init_declarator!\n");
    exit(1);
  }
}

void visitEnumerator(Enumerator _p_)
{
  switch(_p_->kind)
  {
  case is_EnumInit:
    /* Code for EnumInit Goes Here */
    visitIdent(_p_->u.enuminit_.ident_);
    visitConstant_expression(_p_->u.enuminit_.constant_expression_);
    break;  case is_Plain:
    /* Code for Plain Goes Here */
    visitIdent(_p_->u.plain_.ident_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Enumerator!\n");
    exit(1);
  }
}

void visitExp(Exp _p_)
{
  switch(_p_->kind)
  {
  case is_InitClass:
    /* Code for InitClass Goes Here */
    visitExp(_p_->u.initclass_.exp_);
    visitAssignment_op(_p_->u.initclass_.assignment_op_);
    visitIdent(_p_->u.initclass_.ident_);
    break;  case is_DestroyClass:
    /* Code for DestroyClass Goes Here */
    visitIdent(_p_->u.destroyclass_.ident_);
    break;  case is_Eassign:
    /* Code for Eassign Goes Here */
    visitExp(_p_->u.eassign_.exp_1);
    visitAssignment_op(_p_->u.eassign_.assignment_op_);
    visitExp(_p_->u.eassign_.exp_2);
    break;  case is_Ecomma:
    /* Code for Ecomma Goes Here */
    visitExp(_p_->u.ecomma_.exp_1);
    visitExp(_p_->u.ecomma_.exp_2);
    break;  case is_Econdition:
    /* Code for Econdition Goes Here */
    visitExp(_p_->u.econdition_.exp_1);
    visitExp(_p_->u.econdition_.exp_2);
    visitExp(_p_->u.econdition_.exp_3);
    break;  case is_Elor:
    /* Code for Elor Goes Here */
    visitExp(_p_->u.elor_.exp_1);
    visitExp(_p_->u.elor_.exp_2);
    break;  case is_Eland:
    /* Code for Eland Goes Here */
    visitExp(_p_->u.eland_.exp_1);
    visitExp(_p_->u.eland_.exp_2);
    break;  case is_Ebitor:
    /* Code for Ebitor Goes Here */
    visitExp(_p_->u.ebitor_.exp_1);
    visitExp(_p_->u.ebitor_.exp_2);
    break;  case is_Ebitexor:
    /* Code for Ebitexor Goes Here */
    visitExp(_p_->u.ebitexor_.exp_1);
    visitExp(_p_->u.ebitexor_.exp_2);
    break;  case is_Ebitand:
    /* Code for Ebitand Goes Here */
    visitExp(_p_->u.ebitand_.exp_1);
    visitExp(_p_->u.ebitand_.exp_2);
    break;  case is_Eeq:
    /* Code for Eeq Goes Here */
    visitExp(_p_->u.eeq_.exp_1);
    visitExp(_p_->u.eeq_.exp_2);
    break;  case is_Eneq:
    /* Code for Eneq Goes Here */
    visitExp(_p_->u.eneq_.exp_1);
    visitExp(_p_->u.eneq_.exp_2);
    break;  case is_Elthen:
    /* Code for Elthen Goes Here */
    visitExp(_p_->u.elthen_.exp_1);
    visitExp(_p_->u.elthen_.exp_2);
    break;  case is_Egrthen:
    /* Code for Egrthen Goes Here */
    visitExp(_p_->u.egrthen_.exp_1);
    visitExp(_p_->u.egrthen_.exp_2);
    break;  case is_Ele:
    /* Code for Ele Goes Here */
    visitExp(_p_->u.ele_.exp_1);
    visitExp(_p_->u.ele_.exp_2);
    break;  case is_Ege:
    /* Code for Ege Goes Here */
    visitExp(_p_->u.ege_.exp_1);
    visitExp(_p_->u.ege_.exp_2);
    break;  case is_Eleft:
    /* Code for Eleft Goes Here */
    visitExp(_p_->u.eleft_.exp_1);
    visitExp(_p_->u.eleft_.exp_2);
    break;  case is_Eright:
    /* Code for Eright Goes Here */
    visitExp(_p_->u.eright_.exp_1);
    visitExp(_p_->u.eright_.exp_2);
    break;  case is_Eplus:
    /* Code for Eplus Goes Here */
    visitExp(_p_->u.eplus_.exp_1);
    visitExp(_p_->u.eplus_.exp_2);
    break;  case is_Eminus:
    /* Code for Eminus Goes Here */
    visitExp(_p_->u.eminus_.exp_1);
    visitExp(_p_->u.eminus_.exp_2);
    break;  case is_Etimes:
    /* Code for Etimes Goes Here */
    visitExp(_p_->u.etimes_.exp_1);
    visitExp(_p_->u.etimes_.exp_2);
    break;  case is_Ediv:
    /* Code for Ediv Goes Here */
    visitExp(_p_->u.ediv_.exp_1);
    visitExp(_p_->u.ediv_.exp_2);
    break;  case is_Emod:
    /* Code for Emod Goes Here */
    visitExp(_p_->u.emod_.exp_1);
    visitExp(_p_->u.emod_.exp_2);
    break;  case is_Etypeconv:
    /* Code for Etypeconv Goes Here */
    visitType_name(_p_->u.etypeconv_.type_name_);
    visitExp(_p_->u.etypeconv_.exp_);
    break;  case is_Epreinc:
    /* Code for Epreinc Goes Here */
    visitExp(_p_->u.epreinc_.exp_);
    break;  case is_Epredec:
    /* Code for Epredec Goes Here */
    visitExp(_p_->u.epredec_.exp_);
    break;  case is_Epreop:
    /* Code for Epreop Goes Here */
    visitUnary_operator(_p_->u.epreop_.unary_operator_);
    visitExp(_p_->u.epreop_.exp_);
    break;  case is_Ebytesexpr:
    /* Code for Ebytesexpr Goes Here */
    visitExp(_p_->u.ebytesexpr_.exp_);
    break;  case is_Ebytestype:
    /* Code for Ebytestype Goes Here */
    visitType_name(_p_->u.ebytestype_.type_name_);
    break;  case is_Earray:
    /* Code for Earray Goes Here */
    visitExp(_p_->u.earray_.exp_1);
    visitExp(_p_->u.earray_.exp_2);
    break;  case is_Efunk:
    /* Code for Efunk Goes Here */
    visitExp(_p_->u.efunk_.exp_);
    break;  case is_Efunkpar:
    /* Code for Efunkpar Goes Here */
    visitExp(_p_->u.efunkpar_.exp_);
    visitListExp(_p_->u.efunkpar_.listexp_);
    break;  case is_Eselect:
    /* Code for Eselect Goes Here */
    visitExp(_p_->u.eselect_.exp_);
    visitIdent(_p_->u.eselect_.ident_);
    break;  case is_Epoint:
    /* Code for Epoint Goes Here */
    visitExp(_p_->u.epoint_.exp_);
    visitIdent(_p_->u.epoint_.ident_);
    break;  case is_Epostinc:
    /* Code for Epostinc Goes Here */
    visitExp(_p_->u.epostinc_.exp_);
    break;  case is_Epostdec:
    /* Code for Epostdec Goes Here */
    visitExp(_p_->u.epostdec_.exp_);
    break;  case is_Evar:
    /* Code for Evar Goes Here */
    visitIdent(_p_->u.evar_.ident_);
    break;  case is_Econst:
    /* Code for Econst Goes Here */
    visitConstant(_p_->u.econst_.constant_);
    break;  case is_Estring:
    /* Code for Estring Goes Here */
    visitString(_p_->u.estring_.string_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void visitDeclaration_specifier(Declaration_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_DecClass:
    /* Code for DecClass Goes Here */
    visitIdent(_p_->u.decclass_.ident_1);
    visitPointer(_p_->u.decclass_.pointer_);
    visitIdent(_p_->u.decclass_.ident_2);
    break;  case is_DecClassNoPoiter:
    /* Code for DecClassNoPoiter Goes Here */
    visitIdent(_p_->u.decclassnopoiter_.ident_1);
    visitIdent(_p_->u.decclassnopoiter_.ident_2);
    break;  case is_Type:
    /* Code for Type Goes Here */
    visitType_specifier(_p_->u.type_.type_specifier_);
    break;  case is_Storage:
    /* Code for Storage Goes Here */
    visitStorage_class_specifier(_p_->u.storage_.storage_class_specifier_);
    break;  case is_SpecProp:
    /* Code for SpecProp Goes Here */
    visitType_qualifier(_p_->u.specprop_.type_qualifier_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Declaration_specifier!\n");
    exit(1);
  }
}

void visitProgram(Program _p_)
{
  switch(_p_->kind)
  {
  case is_Progr:
    /* Code for Progr Goes Here */
    visitListExternal_declaration(_p_->u.progr_.listexternal_declaration_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void visitListExternal_declaration(ListExternal_declaration listexternal_declaration)
{
  while(listexternal_declaration != 0)
  {
    /* Code For ListExternal_declaration Goes Here */
    visitExternal_declaration(listexternal_declaration->external_declaration_);
    listexternal_declaration = listexternal_declaration->listexternal_declaration_;
  }
}

void visitFunction_def(Function_def _p_)
{
  switch(_p_->kind)
  {
  case is_OldFunc:
    /* Code for OldFunc Goes Here */
    visitListDeclaration_specifier(_p_->u.oldfunc_.listdeclaration_specifier_);
    visitDeclarator(_p_->u.oldfunc_.declarator_);
    visitListDec(_p_->u.oldfunc_.listdec_);
    visitCompound_stm(_p_->u.oldfunc_.compound_stm_);
    break;  case is_NewFunc:
    /* Code for NewFunc Goes Here */
    visitListDeclaration_specifier(_p_->u.newfunc_.listdeclaration_specifier_);
    visitDeclarator(_p_->u.newfunc_.declarator_);
    visitCompound_stm(_p_->u.newfunc_.compound_stm_);
    break;  case is_OldFuncInt:
    /* Code for OldFuncInt Goes Here */
    visitDeclarator(_p_->u.oldfuncint_.declarator_);
    visitListDec(_p_->u.oldfuncint_.listdec_);
    visitCompound_stm(_p_->u.oldfuncint_.compound_stm_);
    break;  case is_NewFuncInt:
    /* Code for NewFuncInt Goes Here */
    visitDeclarator(_p_->u.newfuncint_.declarator_);
    visitCompound_stm(_p_->u.newfuncint_.compound_stm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Function_def!\n");
    exit(1);
  }
}

void visitDec(Dec _p_)
{
  switch(_p_->kind)
  {
  case is_NoDeclarator:
    /* Code for NoDeclarator Goes Here */
    visitListDeclaration_specifier(_p_->u.nodeclarator_.listdeclaration_specifier_);
    break;  case is_Declarators:
    /* Code for Declarators Goes Here */
    visitListDeclaration_specifier(_p_->u.declarators_.listdeclaration_specifier_);
    visitListInit_declarator(_p_->u.declarators_.listinit_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Dec!\n");
    exit(1);
  }
}

void visitListDec(ListDec listdec)
{
  while(listdec != 0)
  {
    /* Code For ListDec Goes Here */
    visitDec(listdec->dec_);
    listdec = listdec->listdec_;
  }
}

void visitListDeclaration_specifier(ListDeclaration_specifier listdeclaration_specifier)
{
  while(listdeclaration_specifier != 0)
  {
    /* Code For ListDeclaration_specifier Goes Here */
    visitDeclaration_specifier(listdeclaration_specifier->declaration_specifier_);
    listdeclaration_specifier = listdeclaration_specifier->listdeclaration_specifier_;
  }
}

void visitListInit_declarator(ListInit_declarator listinit_declarator)
{
  while(listinit_declarator != 0)
  {
    /* Code For ListInit_declarator Goes Here */
    visitInit_declarator(listinit_declarator->init_declarator_);
    listinit_declarator = listinit_declarator->listinit_declarator_;
  }
}

void visitStruct_or_union_spec(Struct_or_union_spec _p_)
{
  switch(_p_->kind)
  {
  case is_Tag:
    /* Code for Tag Goes Here */
    visitStruct_or_union(_p_->u.tag_.struct_or_union_);
    visitIdent(_p_->u.tag_.ident_);
    visitListStruct_dec(_p_->u.tag_.liststruct_dec_);
    break;  case is_Unique:
    /* Code for Unique Goes Here */
    visitStruct_or_union(_p_->u.unique_.struct_or_union_);
    visitListStruct_dec(_p_->u.unique_.liststruct_dec_);
    break;  case is_TagType:
    /* Code for TagType Goes Here */
    visitStruct_or_union(_p_->u.tagtype_.struct_or_union_);
    visitIdent(_p_->u.tagtype_.ident_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_or_union_spec!\n");
    exit(1);
  }
}

void visitStruct_or_union(Struct_or_union _p_)
{
  switch(_p_->kind)
  {
  case is_Struct:
    /* Code for Struct Goes Here */
    break;  case is_Union:
    /* Code for Union Goes Here */
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_or_union!\n");
    exit(1);
  }
}

void visitListStruct_dec(ListStruct_dec liststruct_dec)
{
  while(liststruct_dec != 0)
  {
    /* Code For ListStruct_dec Goes Here */
    visitStruct_dec(liststruct_dec->struct_dec_);
    liststruct_dec = liststruct_dec->liststruct_dec_;
  }
}

void visitStruct_dec(Struct_dec _p_)
{
  switch(_p_->kind)
  {
  case is_Structen:
    /* Code for Structen Goes Here */
    visitListSpec_qual(_p_->u.structen_.listspec_qual_);
    visitListStruct_declarator(_p_->u.structen_.liststruct_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_dec!\n");
    exit(1);
  }
}

void visitListSpec_qual(ListSpec_qual listspec_qual)
{
  while(listspec_qual != 0)
  {
    /* Code For ListSpec_qual Goes Here */
    visitSpec_qual(listspec_qual->spec_qual_);
    listspec_qual = listspec_qual->listspec_qual_;
  }
}

void visitSpec_qual(Spec_qual _p_)
{
  switch(_p_->kind)
  {
  case is_TypeSpec:
    /* Code for TypeSpec Goes Here */
    visitType_specifier(_p_->u.typespec_.type_specifier_);
    break;  case is_QualSpec:
    /* Code for QualSpec Goes Here */
    visitType_qualifier(_p_->u.qualspec_.type_qualifier_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Spec_qual!\n");
    exit(1);
  }
}

void visitListStruct_declarator(ListStruct_declarator liststruct_declarator)
{
  while(liststruct_declarator != 0)
  {
    /* Code For ListStruct_declarator Goes Here */
    visitStruct_declarator(liststruct_declarator->struct_declarator_);
    liststruct_declarator = liststruct_declarator->liststruct_declarator_;
  }
}

void visitStruct_declarator(Struct_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_Decl:
    /* Code for Decl Goes Here */
    visitDeclarator(_p_->u.decl_.declarator_);
    break;  case is_Field:
    /* Code for Field Goes Here */
    visitConstant_expression(_p_->u.field_.constant_expression_);
    break;  case is_DecField:
    /* Code for DecField Goes Here */
    visitDeclarator(_p_->u.decfield_.declarator_);
    visitConstant_expression(_p_->u.decfield_.constant_expression_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_declarator!\n");
    exit(1);
  }
}

void visitEnum_specifier(Enum_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_EnumDec:
    /* Code for EnumDec Goes Here */
    visitListEnumerator(_p_->u.enumdec_.listenumerator_);
    break;  case is_EnumName:
    /* Code for EnumName Goes Here */
    visitIdent(_p_->u.enumname_.ident_);
    visitListEnumerator(_p_->u.enumname_.listenumerator_);
    break;  case is_EnumVar:
    /* Code for EnumVar Goes Here */
    visitIdent(_p_->u.enumvar_.ident_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Enum_specifier!\n");
    exit(1);
  }
}

void visitListEnumerator(ListEnumerator listenumerator)
{
  while(listenumerator != 0)
  {
    /* Code For ListEnumerator Goes Here */
    visitEnumerator(listenumerator->enumerator_);
    listenumerator = listenumerator->listenumerator_;
  }
}

void visitDeclarator(Declarator _p_)
{
  switch(_p_->kind)
  {
  case is_BeginPointer:
    /* Code for BeginPointer Goes Here */
    visitPointer(_p_->u.beginpointer_.pointer_);
    visitDirect_declarator(_p_->u.beginpointer_.direct_declarator_);
    break;  case is_NoPointer:
    /* Code for NoPointer Goes Here */
    visitDirect_declarator(_p_->u.nopointer_.direct_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Declarator!\n");
    exit(1);
  }
}

void visitDirect_declarator(Direct_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_Name:
    /* Code for Name Goes Here */
    visitIdent(_p_->u.name_.ident_);
    break;  case is_ParenDecl:
    /* Code for ParenDecl Goes Here */
    visitDeclarator(_p_->u.parendecl_.declarator_);
    break;  case is_InnitArray:
    /* Code for InnitArray Goes Here */
    visitDirect_declarator(_p_->u.innitarray_.direct_declarator_);
    visitConstant_expression(_p_->u.innitarray_.constant_expression_);
    break;  case is_Incomplete:
    /* Code for Incomplete Goes Here */
    visitDirect_declarator(_p_->u.incomplete_.direct_declarator_);
    break;  case is_NewFuncDec:
    /* Code for NewFuncDec Goes Here */
    visitDirect_declarator(_p_->u.newfuncdec_.direct_declarator_);
    visitParameter_type(_p_->u.newfuncdec_.parameter_type_);
    break;  case is_OldFuncDef:
    /* Code for OldFuncDef Goes Here */
    visitDirect_declarator(_p_->u.oldfuncdef_.direct_declarator_);
    visitListIdent(_p_->u.oldfuncdef_.listident_);
    break;  case is_OldFuncDec:
    /* Code for OldFuncDec Goes Here */
    visitDirect_declarator(_p_->u.oldfuncdec_.direct_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Direct_declarator!\n");
    exit(1);
  }
}

void visitPointer(Pointer _p_)
{
  switch(_p_->kind)
  {
  case is_Point:
    /* Code for Point Goes Here */
    break;  case is_PointQual:
    /* Code for PointQual Goes Here */
    visitListType_qualifier(_p_->u.pointqual_.listtype_qualifier_);
    break;  case is_PointPoint:
    /* Code for PointPoint Goes Here */
    visitPointer(_p_->u.pointpoint_.pointer_);
    break;  case is_PointQualPoint:
    /* Code for PointQualPoint Goes Here */
    visitListType_qualifier(_p_->u.pointqualpoint_.listtype_qualifier_);
    visitPointer(_p_->u.pointqualpoint_.pointer_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Pointer!\n");
    exit(1);
  }
}

void visitListType_qualifier(ListType_qualifier listtype_qualifier)
{
  while(listtype_qualifier != 0)
  {
    /* Code For ListType_qualifier Goes Here */
    visitType_qualifier(listtype_qualifier->type_qualifier_);
    listtype_qualifier = listtype_qualifier->listtype_qualifier_;
  }
}

void visitParameter_type(Parameter_type _p_)
{
  switch(_p_->kind)
  {
  case is_AllSpec:
    /* Code for AllSpec Goes Here */
    visitParameter_declarations(_p_->u.allspec_.parameter_declarations_);
    break;  case is_More:
    /* Code for More Goes Here */
    visitParameter_declarations(_p_->u.more_.parameter_declarations_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_type!\n");
    exit(1);
  }
}

void visitParameter_declarations(Parameter_declarations _p_)
{
  switch(_p_->kind)
  {
  case is_ParamDec:
    /* Code for ParamDec Goes Here */
    visitParameter_declaration(_p_->u.paramdec_.parameter_declaration_);
    break;  case is_MoreParamDec:
    /* Code for MoreParamDec Goes Here */
    visitParameter_declarations(_p_->u.moreparamdec_.parameter_declarations_);
    visitParameter_declaration(_p_->u.moreparamdec_.parameter_declaration_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_declarations!\n");
    exit(1);
  }
}

void visitParameter_declaration(Parameter_declaration _p_)
{
  switch(_p_->kind)
  {
  case is_OnlyType:
    /* Code for OnlyType Goes Here */
    visitListDeclaration_specifier(_p_->u.onlytype_.listdeclaration_specifier_);
    break;  case is_TypeAndParam:
    /* Code for TypeAndParam Goes Here */
    visitListDeclaration_specifier(_p_->u.typeandparam_.listdeclaration_specifier_);
    visitDeclarator(_p_->u.typeandparam_.declarator_);
    break;  case is_Abstract:
    /* Code for Abstract Goes Here */
    visitListDeclaration_specifier(_p_->u.abstract_.listdeclaration_specifier_);
    visitAbstract_declarator(_p_->u.abstract_.abstract_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_declaration!\n");
    exit(1);
  }
}

void visitListIdent(ListIdent listident)
{
  while(listident != 0)
  {
    /* Code For ListIdent Goes Here */
    visitIdent(listident->ident_);
    listident = listident->listident_;
  }
}

void visitInitializer(Initializer _p_)
{
  switch(_p_->kind)
  {
  case is_InitExpr:
    /* Code for InitExpr Goes Here */
    visitExp(_p_->u.initexpr_.exp_);
    break;  case is_InitListOne:
    /* Code for InitListOne Goes Here */
    visitInitializers(_p_->u.initlistone_.initializers_);
    break;  case is_InitListTwo:
    /* Code for InitListTwo Goes Here */
    visitInitializers(_p_->u.initlisttwo_.initializers_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Initializer!\n");
    exit(1);
  }
}

void visitInitializers(Initializers _p_)
{
  switch(_p_->kind)
  {
  case is_AnInit:
    /* Code for AnInit Goes Here */
    visitInitializer(_p_->u.aninit_.initializer_);
    break;  case is_MoreInit:
    /* Code for MoreInit Goes Here */
    visitInitializers(_p_->u.moreinit_.initializers_);
    visitInitializer(_p_->u.moreinit_.initializer_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Initializers!\n");
    exit(1);
  }
}

void visitType_name(Type_name _p_)
{
  switch(_p_->kind)
  {
  case is_PlainType:
    /* Code for PlainType Goes Here */
    visitListSpec_qual(_p_->u.plaintype_.listspec_qual_);
    break;  case is_ExtendedType:
    /* Code for ExtendedType Goes Here */
    visitListSpec_qual(_p_->u.extendedtype_.listspec_qual_);
    visitAbstract_declarator(_p_->u.extendedtype_.abstract_declarator_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Type_name!\n");
    exit(1);
  }
}

void visitAbstract_declarator(Abstract_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_PointerStart:
    /* Code for PointerStart Goes Here */
    visitPointer(_p_->u.pointerstart_.pointer_);
    break;  case is_Advanced:
    /* Code for Advanced Goes Here */
    visitDir_abs_dec(_p_->u.advanced_.dir_abs_dec_);
    break;  case is_PointAdvanced:
    /* Code for PointAdvanced Goes Here */
    visitPointer(_p_->u.pointadvanced_.pointer_);
    visitDir_abs_dec(_p_->u.pointadvanced_.dir_abs_dec_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Abstract_declarator!\n");
    exit(1);
  }
}

void visitDir_abs_dec(Dir_abs_dec _p_)
{
  switch(_p_->kind)
  {
  case is_WithinParentes:
    /* Code for WithinParentes Goes Here */
    visitAbstract_declarator(_p_->u.withinparentes_.abstract_declarator_);
    break;  case is_Array:
    /* Code for Array Goes Here */
    break;  case is_InitiatedArray:
    /* Code for InitiatedArray Goes Here */
    visitConstant_expression(_p_->u.initiatedarray_.constant_expression_);
    break;  case is_UnInitiated:
    /* Code for UnInitiated Goes Here */
    visitDir_abs_dec(_p_->u.uninitiated_.dir_abs_dec_);
    break;  case is_Initiated:
    /* Code for Initiated Goes Here */
    visitDir_abs_dec(_p_->u.initiated_.dir_abs_dec_);
    visitConstant_expression(_p_->u.initiated_.constant_expression_);
    break;  case is_OldFunction:
    /* Code for OldFunction Goes Here */
    break;  case is_NewFunction:
    /* Code for NewFunction Goes Here */
    visitParameter_type(_p_->u.newfunction_.parameter_type_);
    break;  case is_OldFuncExpr:
    /* Code for OldFuncExpr Goes Here */
    visitDir_abs_dec(_p_->u.oldfuncexpr_.dir_abs_dec_);
    break;  case is_NewFuncExpr:
    /* Code for NewFuncExpr Goes Here */
    visitDir_abs_dec(_p_->u.newfuncexpr_.dir_abs_dec_);
    visitParameter_type(_p_->u.newfuncexpr_.parameter_type_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Dir_abs_dec!\n");
    exit(1);
  }
}

void visitStm(Stm _p_)
{
  switch(_p_->kind)
  {
  case is_LabelS:
    /* Code for LabelS Goes Here */
    visitLabeled_stm(_p_->u.labels_.labeled_stm_);
    break;  case is_CompS:
    /* Code for CompS Goes Here */
    visitCompound_stm(_p_->u.comps_.compound_stm_);
    break;  case is_ExprS:
    /* Code for ExprS Goes Here */
    visitExpression_stm(_p_->u.exprs_.expression_stm_);
    break;  case is_SelS:
    /* Code for SelS Goes Here */
    visitSelection_stm(_p_->u.sels_.selection_stm_);
    break;  case is_IterS:
    /* Code for IterS Goes Here */
    visitIter_stm(_p_->u.iters_.iter_stm_);
    break;  case is_JumpS:
    /* Code for JumpS Goes Here */
    visitJump_stm(_p_->u.jumps_.jump_stm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Stm!\n");
    exit(1);
  }
}

void visitLabeled_stm(Labeled_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SlabelOne:
    /* Code for SlabelOne Goes Here */
    visitIdent(_p_->u.slabelone_.ident_);
    visitStm(_p_->u.slabelone_.stm_);
    break;  case is_SlabelTwo:
    /* Code for SlabelTwo Goes Here */
    visitConstant_expression(_p_->u.slabeltwo_.constant_expression_);
    visitStm(_p_->u.slabeltwo_.stm_);
    break;  case is_SlabelThree:
    /* Code for SlabelThree Goes Here */
    visitStm(_p_->u.slabelthree_.stm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Labeled_stm!\n");
    exit(1);
  }
}

void visitCompound_stm(Compound_stm _p_)
{
  switch(_p_->kind)
  {
  case is_ScompOne:
    /* Code for ScompOne Goes Here */
    break;  case is_ScompTwo:
    /* Code for ScompTwo Goes Here */
    visitListStm(_p_->u.scomptwo_.liststm_);
    break;  case is_ScompThree:
    /* Code for ScompThree Goes Here */
    visitListDec(_p_->u.scompthree_.listdec_);
    break;  case is_ScompFour:
    /* Code for ScompFour Goes Here */
    visitListDec(_p_->u.scompfour_.listdec_);
    visitListStm(_p_->u.scompfour_.liststm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Compound_stm!\n");
    exit(1);
  }
}

void visitExpression_stm(Expression_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SexprOne:
    /* Code for SexprOne Goes Here */
    break;  case is_SexprTwo:
    /* Code for SexprTwo Goes Here */
    visitExp(_p_->u.sexprtwo_.exp_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Expression_stm!\n");
    exit(1);
  }
}

void visitSelection_stm(Selection_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SselOne:
    /* Code for SselOne Goes Here */
    visitExp(_p_->u.sselone_.exp_);
    visitStm(_p_->u.sselone_.stm_);
    break;  case is_SselTwo:
    /* Code for SselTwo Goes Here */
    visitExp(_p_->u.sseltwo_.exp_);
    visitStm(_p_->u.sseltwo_.stm_1);
    visitStm(_p_->u.sseltwo_.stm_2);
    break;  case is_SselThree:
    /* Code for SselThree Goes Here */
    visitExp(_p_->u.sselthree_.exp_);
    visitStm(_p_->u.sselthree_.stm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Selection_stm!\n");
    exit(1);
  }
}

void visitIter_stm(Iter_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SiterOne:
    /* Code for SiterOne Goes Here */
    visitExp(_p_->u.siterone_.exp_);
    visitStm(_p_->u.siterone_.stm_);
    break;  case is_SiterTwo:
    /* Code for SiterTwo Goes Here */
    visitStm(_p_->u.sitertwo_.stm_);
    visitExp(_p_->u.sitertwo_.exp_);
    break;  case is_SiterThree:
    /* Code for SiterThree Goes Here */
    visitExpression_stm(_p_->u.siterthree_.expression_stm_1);
    visitExpression_stm(_p_->u.siterthree_.expression_stm_2);
    visitStm(_p_->u.siterthree_.stm_);
    break;  case is_SiterFour:
    /* Code for SiterFour Goes Here */
    visitExpression_stm(_p_->u.siterfour_.expression_stm_1);
    visitExpression_stm(_p_->u.siterfour_.expression_stm_2);
    visitExp(_p_->u.siterfour_.exp_);
    visitStm(_p_->u.siterfour_.stm_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Iter_stm!\n");
    exit(1);
  }
}

void visitListStm(ListStm liststm)
{
  while(liststm != 0)
  {
    /* Code For ListStm Goes Here */
    visitStm(liststm->stm_);
    liststm = liststm->liststm_;
  }
}

void visitConstant(Constant _p_)
{
  switch(_p_->kind)
  {
  case is_Efloat:
    /* Code for Efloat Goes Here */
    visitDouble(_p_->u.efloat_.double_);
    break;  case is_Echar:
    /* Code for Echar Goes Here */
    visitChar(_p_->u.echar_.char_);
    break;  case is_Eunsigned:
    /* Code for Eunsigned Goes Here */
    visitUnsigned(_p_->u.eunsigned_.unsigned_);
    break;  case is_Elong:
    /* Code for Elong Goes Here */
    visitLong(_p_->u.elong_.long_);
    break;  case is_Eunsignlong:
    /* Code for Eunsignlong Goes Here */
    visitUnsignedLong(_p_->u.eunsignlong_.unsignedlong_);
    break;  case is_Ehexadec:
    /* Code for Ehexadec Goes Here */
    visitHexadecimal(_p_->u.ehexadec_.hexadecimal_);
    break;  case is_Ehexaunsign:
    /* Code for Ehexaunsign Goes Here */
    visitHexUnsigned(_p_->u.ehexaunsign_.hexunsigned_);
    break;  case is_Ehexalong:
    /* Code for Ehexalong Goes Here */
    visitHexLong(_p_->u.ehexalong_.hexlong_);
    break;  case is_Ehexaunslong:
    /* Code for Ehexaunslong Goes Here */
    visitHexUnsLong(_p_->u.ehexaunslong_.hexunslong_);
    break;  case is_Eoctal:
    /* Code for Eoctal Goes Here */
    visitOctal(_p_->u.eoctal_.octal_);
    break;  case is_Eoctalunsign:
    /* Code for Eoctalunsign Goes Here */
    visitOctalUnsigned(_p_->u.eoctalunsign_.octalunsigned_);
    break;  case is_Eoctallong:
    /* Code for Eoctallong Goes Here */
    visitOctalLong(_p_->u.eoctallong_.octallong_);
    break;  case is_Eoctalunslong:
    /* Code for Eoctalunslong Goes Here */
    visitOctalUnsLong(_p_->u.eoctalunslong_.octalunslong_);
    break;  case is_Ecdouble:
    /* Code for Ecdouble Goes Here */
    visitCDouble(_p_->u.ecdouble_.cdouble_);
    break;  case is_Ecfloat:
    /* Code for Ecfloat Goes Here */
    visitCFloat(_p_->u.ecfloat_.cfloat_);
    break;  case is_Eclongdouble:
    /* Code for Eclongdouble Goes Here */
    visitCLongDouble(_p_->u.eclongdouble_.clongdouble_);
    break;  case is_Eint:
    /* Code for Eint Goes Here */
    visitInteger(_p_->u.eint_.integer_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Constant!\n");
    exit(1);
  }
}

void visitConstant_expression(Constant_expression _p_)
{
  switch(_p_->kind)
  {
  case is_Especial:
    /* Code for Especial Goes Here */
    visitExp(_p_->u.especial_.exp_);
    break;
  default:
    fprintf(stderr, "Error: bad kind field when printing Constant_expression!\n");
    exit(1);
  }
}

void visitListExp(ListExp listexp)
{
  while(listexp != 0)
  {
    /* Code For ListExp Goes Here */
    visitExp(listexp->exp_);
    listexp = listexp->listexp_;
  }
}

void visitUnsigned(Unsigned p)
{
  /* Code for Unsigned Goes Here */
}
void visitLong(Long p)
{
  /* Code for Long Goes Here */
}
void visitUnsignedlong(UnsignedLong p)
{
  /* Code for UnsignedLong Goes Here */
}
void visitHexadecimal(Hexadecimal p)
{
  /* Code for Hexadecimal Goes Here */
}
void visitHexunsigned(HexUnsigned p)
{
  /* Code for HexUnsigned Goes Here */
}
void visitHexlong(HexLong p)
{
  /* Code for HexLong Goes Here */
}
void visitHexunslong(HexUnsLong p)
{
  /* Code for HexUnsLong Goes Here */
}
void visitOctal(Octal p)
{
  /* Code for Octal Goes Here */
}
void visitOctalunsigned(OctalUnsigned p)
{
  /* Code for OctalUnsigned Goes Here */
}
void visitOctallong(OctalLong p)
{
  /* Code for OctalLong Goes Here */
}
void visitOctalunslong(OctalUnsLong p)
{
  /* Code for OctalUnsLong Goes Here */
}
void visitCdouble(CDouble p)
{
  /* Code for CDouble Goes Here */
}
void visitCfloat(CFloat p)
{
  /* Code for CFloat Goes Here */
}
void visitClongdouble(CLongDouble p)
{
  /* Code for CLongDouble Goes Here */
}
void visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void visitInteger(Integer i)
{
  /* Code for Integer Goes Here */
}
void visitDouble(Double d)
{
  /* Code for Double Goes Here */
}
void visitChar(Char c)
{
  /* Code for Char Goes Here */
}
void visitString(String s)
{
  /* Code for String Goes Here */
}

