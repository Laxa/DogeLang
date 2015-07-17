/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include "Printer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "TransformDoge.h"

#define INDENT_WIDTH 2
#define MANGLING_START "_ZN"
#define NAMESPACE_MAX_LENGTH 128
#define CLASSNAME_MAX_LENGTH 128

int _n_;
char* buf_;
int cur_;
int buf_size;
char curNameSpace[NAMESPACE_MAX_LENGTH];
char curClassName[CLASSNAME_MAX_LENGTH];

/* You may wish to change the renderC functions */
void renderC(Char c)
{
  if (c == '{')
  {
    bufAppendC('\n');
    indent();
    bufAppendC(c);
    _n_ = _n_ + INDENT_WIDTH;
    bufAppendC('\n');
    indent();
  }
  else if (c == '!')
  {
    bufAppendC('!');
  }
  else if (c == '"')
  {
    bufAppendC('"');
  }
  else if (c == '(' || c == '[')
    bufAppendC(c);
  else if (c == ')' || c == ']')
  {
    backup();
    bufAppendC(c);
  }
  else if (c == '}')
  {
    int t;
    _n_ = _n_ - INDENT_WIDTH;
    for(t=0; t<INDENT_WIDTH; t++) {
      backup();
    }
    bufAppendC(c);
    bufAppendC('\n');
    indent();
  }
  else if (c == ',')
  {
    backup();
    bufAppendC(c);
    bufAppendC(' ');
  }
  else if (c == ';')
  {
    backup();
    bufAppendC(c);
    bufAppendC('\n');
    indent();
  }
  else if (c == 0) return;
  else
  {
    bufAppendC(' ');
    bufAppendC(c);
    bufAppendC(' ');
  }
}

void renderS(String s)
{
  if(strlen(s) > 0)
  {
    bufAppendS(s);
    bufAppendC(' ');
  }
}
void indent(void)
{
  int n = _n_;
  while (n > 0)
  {
    bufAppendC(' ');
    n--;
  }
}
void backup(void)
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}
char* printProgram(Program p)
{
  _n_ = 0;
  bufReset();
  memset(curNameSpace, 0, NAMESPACE_MAX_LENGTH);
  memset(curClassName, 0, CLASSNAME_MAX_LENGTH);
  ppProgram(p, 0);
  return buf_;
}
char* printStm(Stm p)
{
  _n_ = 0;
  bufReset();
  ppStm(p, 0);
  return buf_;
}
char* printExp(Exp p)
{
  _n_ = 0;
  bufReset();
  ppExp(p, 0);
  return buf_;
}
char* showProgram(Program p)
{
  _n_ = 0;
  bufReset();
  shProgram(p);
  return buf_;
}
char* showStm(Stm p)
{
  _n_ = 0;
  bufReset();
  shStm(p);
  return buf_;
}
char* showExp(Exp p)
{
  _n_ = 0;
  bufReset();
  shExp(p);
  return buf_;
}
void ppExternal_declaration(External_declaration _p_, int _i_)
{
  char buf[512];

  switch(_p_->kind)
  {
  case is_Class:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("struct");
    strncpy(curClassName, _p_->u.class_.ident_, CLASSNAME_MAX_LENGTH);
    if (strlen(curNameSpace) > 0)
      snprintf(buf, 512, "%s_%s", curNameSpace, curClassName);
    else
      snprintf(buf, 512, "%s", curClassName);
    renderS(buf);
    renderC('{');
    renderC('}');
    ppListExternal_declaration(_p_->u.class_.listexternal_declaration_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Namespace:
    if (_i_ > 0) renderC(_L_PAREN);
    /* snprintf(buf, 512, "#include \"%s.h\"\n", _p_->u.namespace_.ident_); */
    strncpy(curNameSpace, _p_->u.namespace_.ident_, NAMESPACE_MAX_LENGTH);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Afunc:
    if (_i_ > 0) renderC(_L_PAREN);
    ppFunction_def(_p_->u.afunc_.function_def_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Global: // attribut si dans namespace + class
    if (_i_ > 0) renderC(_L_PAREN);
    ppDec(_p_->u.global_.dec_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing External_declaration!\n");
    exit(1);
  }
}

void ppExtends(Extends _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Inheritance:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("very");
    ppIdent(_p_->u.inheritance_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NoInheritance:
    if (_i_ > 0) renderC(_L_PAREN);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Extends!\n");
    exit(1);
  }
}

void ppJump_stm(Jump_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_SjumpFour:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("return");
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SjumpFive:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("return");
    ppExp(_p_->u.sjumpfive_.exp_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SjumpOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("goto");
    ppIdent(_p_->u.sjumpone_.ident_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SjumpTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("continue");
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SjumpThree:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("break");
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Jump_stm!\n");
    exit(1);
  }
}

void ppType_specifier(Type_specifier _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Tvoid:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("void");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tchar:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("char");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tshort:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("short");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tint:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("int");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tlong:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("long");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tfloat:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("float");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tdouble:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("double");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tsigned:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("signed");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tunsigned:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("unsigned");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tstruct:
    if (_i_ > 0) renderC(_L_PAREN);
    ppStruct_or_union_spec(_p_->u.tstruct_.struct_or_union_spec_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tenum:
    if (_i_ > 0) renderC(_L_PAREN);
    ppEnum_specifier(_p_->u.tenum_.enum_specifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tname:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("Typedef_name");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Type_specifier!\n");
    exit(1);
  }
}

void ppStorage_class_specifier(Storage_class_specifier _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_MyType:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("typedef");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_GlobalPrograms:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("extern");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_LocalProgram:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("static");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_LocalBlock:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("auto");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_LocalReg:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("register");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Storage_class_specifier!\n");
    exit(1);
  }
}

void ppType_qualifier(Type_qualifier _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Const:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("const");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NoOptim:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("volatile");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Type_qualifier!\n");
    exit(1);
  }
}

void ppUnary_operator(Unary_operator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Logicalneg:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('!');
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Address:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('&');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Indirection:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('*');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Plus:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('+');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Negative:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('-');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Complement:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('~');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Unary_operator!\n");
    exit(1);
  }
}

void ppAssignment_op(Assignment_op _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Assign:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignMul:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("*=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignDiv:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("/=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignMod:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("%=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignAdd:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("+=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignSub:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("-=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignLeft:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("<<=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignRight:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS(">>=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignAnd:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("&=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignXor:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("^=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_AssignOr:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("|=");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Assignment_op!\n");
    exit(1);
  }
}

void ppInit_declarator(Init_declarator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_InitDecl:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.initdecl_.declarator_, 0);
    renderS("iz");
    ppInitializer(_p_->u.initdecl_.initializer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OnlyDecl:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.onlydecl_.declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Init_declarator!\n");
    exit(1);
  }
}

void ppEnumerator(Enumerator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_EnumInit:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.enuminit_.ident_, 0);
    renderS("iz");
    ppConstant_expression(_p_->u.enuminit_.constant_expression_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Plain:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.plain_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Enumerator!\n");
    exit(1);
  }
}

void ppExp(Exp _p_, int _i_)
{
  char buf[512];

  switch(_p_->kind)
  {
  case is_InitClass:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(_p_->u.initclass_.exp_, 15);
    ppAssignment_op(_p_->u.initclass_.assignment_op_, 0);
    snprintf(buf, 512, "malloc(sizeof(%s))", _p_->u.initclass_.ident_);
    renderS(buf);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_DestroyClass:
    if (_i_ > 2) renderC(_L_PAREN);
    snprintf(buf, 512, "free(%s)", _p_->u.destroyclass_.ident_);
    renderS(buf);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_Eassign:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(_p_->u.eassign_.exp_1, 15);
    ppAssignment_op(_p_->u.eassign_.assignment_op_, 0);
    ppExp(_p_->u.eassign_.exp_2, 2);

    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_Ecomma:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(_p_->u.ecomma_.exp_1, 0);
    renderC(',');
    ppExp(_p_->u.ecomma_.exp_2, 2);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Econdition:
    if (_i_ > 3) renderC(_L_PAREN);
    ppExp(_p_->u.econdition_.exp_1, 4);
    renderC('?');
    ppExp(_p_->u.econdition_.exp_2, 0);
    renderC(':');
    ppExp(_p_->u.econdition_.exp_3, 3);

    if (_i_ > 3) renderC(_R_PAREN);
    break;

  case is_Elor:
    if (_i_ > 4) renderC(_L_PAREN);
    ppExp(_p_->u.elor_.exp_1, 4);
    renderS("||");
    ppExp(_p_->u.elor_.exp_2, 5);

    if (_i_ > 4) renderC(_R_PAREN);
    break;

  case is_Eland:
    if (_i_ > 5) renderC(_L_PAREN);
    ppExp(_p_->u.eland_.exp_1, 5);
    renderS("&&");
    ppExp(_p_->u.eland_.exp_2, 6);

    if (_i_ > 5) renderC(_R_PAREN);
    break;

  case is_Ebitor:
    if (_i_ > 6) renderC(_L_PAREN);
    ppExp(_p_->u.ebitor_.exp_1, 6);
    renderC('|');
    ppExp(_p_->u.ebitor_.exp_2, 7);

    if (_i_ > 6) renderC(_R_PAREN);
    break;

  case is_Ebitexor:
    if (_i_ > 7) renderC(_L_PAREN);
    ppExp(_p_->u.ebitexor_.exp_1, 7);
    renderC('^');
    ppExp(_p_->u.ebitexor_.exp_2, 8);

    if (_i_ > 7) renderC(_R_PAREN);
    break;

  case is_Ebitand:
    if (_i_ > 8) renderC(_L_PAREN);
    ppExp(_p_->u.ebitand_.exp_1, 8);
    renderC('&');
    ppExp(_p_->u.ebitand_.exp_2, 9);

    if (_i_ > 8) renderC(_R_PAREN);
    break;

  case is_Eeq:
    if (_i_ > 9) renderC(_L_PAREN);
    ppExp(_p_->u.eeq_.exp_1, 9);
    renderS("==");
    ppExp(_p_->u.eeq_.exp_2, 10);

    if (_i_ > 9) renderC(_R_PAREN);
    break;

  case is_Eneq:
    if (_i_ > 9) renderC(_L_PAREN);
    ppExp(_p_->u.eneq_.exp_1, 9);
    renderS("!=");
    ppExp(_p_->u.eneq_.exp_2, 10);

    if (_i_ > 9) renderC(_R_PAREN);
    break;

  case is_Elthen:
    if (_i_ > 10) renderC(_L_PAREN);
    ppExp(_p_->u.elthen_.exp_1, 10);
    renderC('<');
    ppExp(_p_->u.elthen_.exp_2, 11);

    if (_i_ > 10) renderC(_R_PAREN);
    break;

  case is_Egrthen:
    if (_i_ > 10) renderC(_L_PAREN);
    ppExp(_p_->u.egrthen_.exp_1, 10);
    renderC('>');
    ppExp(_p_->u.egrthen_.exp_2, 11);

    if (_i_ > 10) renderC(_R_PAREN);
    break;

  case is_Ele:
    if (_i_ > 10) renderC(_L_PAREN);
    ppExp(_p_->u.ele_.exp_1, 10);
    renderS("<=");
    ppExp(_p_->u.ele_.exp_2, 11);

    if (_i_ > 10) renderC(_R_PAREN);
    break;

  case is_Ege:
    if (_i_ > 10) renderC(_L_PAREN);
    ppExp(_p_->u.ege_.exp_1, 10);
    renderS(">=");
    ppExp(_p_->u.ege_.exp_2, 11);

    if (_i_ > 10) renderC(_R_PAREN);
    break;

  case is_Eleft:
    if (_i_ > 11) renderC(_L_PAREN);
    ppExp(_p_->u.eleft_.exp_1, 11);
    renderS("<<");
    ppExp(_p_->u.eleft_.exp_2, 12);

    if (_i_ > 11) renderC(_R_PAREN);
    break;

  case is_Eright:
    if (_i_ > 11) renderC(_L_PAREN);
    ppExp(_p_->u.eright_.exp_1, 11);
    renderS(">>");
    ppExp(_p_->u.eright_.exp_2, 12);

    if (_i_ > 11) renderC(_R_PAREN);
    break;

  case is_Eplus:
    if (_i_ > 12) renderC(_L_PAREN);
    ppExp(_p_->u.eplus_.exp_1, 12);
    renderC('+');
    ppExp(_p_->u.eplus_.exp_2, 13);

    if (_i_ > 12) renderC(_R_PAREN);
    break;

  case is_Eminus:
    if (_i_ > 12) renderC(_L_PAREN);
    ppExp(_p_->u.eminus_.exp_1, 12);
    renderC('-');
    ppExp(_p_->u.eminus_.exp_2, 13);

    if (_i_ > 12) renderC(_R_PAREN);
    break;

  case is_Etimes:
    if (_i_ > 13) renderC(_L_PAREN);
    ppExp(_p_->u.etimes_.exp_1, 13);
    renderC('*');
    ppExp(_p_->u.etimes_.exp_2, 14);

    if (_i_ > 13) renderC(_R_PAREN);
    break;

  case is_Ediv:
    if (_i_ > 13) renderC(_L_PAREN);
    ppExp(_p_->u.ediv_.exp_1, 13);
    renderC('/');
    ppExp(_p_->u.ediv_.exp_2, 14);

    if (_i_ > 13) renderC(_R_PAREN);
    break;

  case is_Emod:
    if (_i_ > 13) renderC(_L_PAREN);
    ppExp(_p_->u.emod_.exp_1, 13);
    renderC('%');
    ppExp(_p_->u.emod_.exp_2, 14);

    if (_i_ > 13) renderC(_R_PAREN);
    break;

  case is_Etypeconv:
    if (_i_ > 14) renderC(_L_PAREN);
    renderC('(');
    ppType_name(_p_->u.etypeconv_.type_name_, 0);
    renderC(')');
    ppExp(_p_->u.etypeconv_.exp_, 14);

    if (_i_ > 14) renderC(_R_PAREN);
    break;

  case is_Epreinc:
    if (_i_ > 15) renderC(_L_PAREN);
    renderS("++");
    ppExp(_p_->u.epreinc_.exp_, 15);

    if (_i_ > 15) renderC(_R_PAREN);
    break;

  case is_Epredec:
    if (_i_ > 15) renderC(_L_PAREN);
    renderS("--");
    ppExp(_p_->u.epredec_.exp_, 15);

    if (_i_ > 15) renderC(_R_PAREN);
    break;

  case is_Epreop:
    if (_i_ > 15) renderC(_L_PAREN);
    ppUnary_operator(_p_->u.epreop_.unary_operator_, 0);
    ppExp(_p_->u.epreop_.exp_, 14);

    if (_i_ > 15) renderC(_R_PAREN);
    break;

  case is_Ebytesexpr:
    if (_i_ > 15) renderC(_L_PAREN);
    renderS("sizeof");
    ppExp(_p_->u.ebytesexpr_.exp_, 15);

    if (_i_ > 15) renderC(_R_PAREN);
    break;

  case is_Ebytestype:
    if (_i_ > 15) renderC(_L_PAREN);
    renderS("sizeof");
    renderC('(');
    ppType_name(_p_->u.ebytestype_.type_name_, 0);
    renderC(')');

    if (_i_ > 15) renderC(_R_PAREN);
    break;

  case is_Earray:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.earray_.exp_1, 16);
    renderC('[');
    ppExp(_p_->u.earray_.exp_2, 0);
    renderC(']');

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Efunk:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.efunk_.exp_, 16);
    renderC('(');
    renderC(')');

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Efunkpar:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.efunkpar_.exp_, 16);
    renderC('(');
    ppListExp(_p_->u.efunkpar_.listexp_, 2);
    renderC(')');

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Eselect:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.eselect_.exp_, 16);
    renderC('.');
    ppIdent(_p_->u.eselect_.ident_, 0);

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Epoint:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.epoint_.exp_, 16);
    renderS("->");
    ppIdent(_p_->u.epoint_.ident_, 0);

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Epostinc:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.epostinc_.exp_, 16);
    renderS("++");

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Epostdec:
    if (_i_ > 16) renderC(_L_PAREN);
    ppExp(_p_->u.epostdec_.exp_, 16);
    renderS("--");

    if (_i_ > 16) renderC(_R_PAREN);
    break;

  case is_Evar:
    if (_i_ > 17) renderC(_L_PAREN);
    ppIdent(_p_->u.evar_.ident_, 0);

    if (_i_ > 17) renderC(_R_PAREN);
    break;

  case is_Econst:
    if (_i_ > 17) renderC(_L_PAREN);
    ppConstant(_p_->u.econst_.constant_, 0);

    if (_i_ > 17) renderC(_R_PAREN);
    break;

  case is_Estring:
    if (_i_ > 17) renderC(_L_PAREN);
    ppString(_p_->u.estring_.string_, 0);

    if (_i_ > 17) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void ppDeclaration_specifier(Declaration_specifier _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_DecClass:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.decclass_.ident_1, 0);
    ppPointer(_p_->u.decclass_.pointer_, 0);
    ppIdent(_p_->u.decclass_.ident_2, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_DecClassNoPoiter:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.decclassnopoiter_.ident_1, 0);
    ppIdent(_p_->u.decclassnopoiter_.ident_2, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Type:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType_specifier(_p_->u.type_.type_specifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Storage:
    if (_i_ > 0) renderC(_L_PAREN);
    ppStorage_class_specifier(_p_->u.storage_.storage_class_specifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SpecProp:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType_qualifier(_p_->u.specprop_.type_qualifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Declaration_specifier!\n");
    exit(1);
  }
}

void ppProgram(Program _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Progr:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListExternal_declaration(_p_->u.progr_.listexternal_declaration_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void ppListExternal_declaration(ListExternal_declaration listexternal_declaration, int i)
{
  while(listexternal_declaration!= 0)
  {
    if (listexternal_declaration->listexternal_declaration_ == 0)
    {
      ppExternal_declaration(listexternal_declaration->external_declaration_, i);

      listexternal_declaration = 0; // a la fin de la liste de declarations, on set a NULL
    }
    else
    {
      ppExternal_declaration(listexternal_declaration->external_declaration_, i);
      renderS("");
      listexternal_declaration = listexternal_declaration->listexternal_declaration_;
    }
  }
}

void ppFunction_def(Function_def _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_OldFunc:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.oldfunc_.listdeclaration_specifier_, 0);
    ppDeclarator(_p_->u.oldfunc_.declarator_, 0);
    ppListDec(_p_->u.oldfunc_.listdec_, 0);
    ppCompound_stm(_p_->u.oldfunc_.compound_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NewFunc:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.newfunc_.listdeclaration_specifier_, 0);
    ppDeclarator(_p_->u.newfunc_.declarator_, 0);
    ppCompound_stm(_p_->u.newfunc_.compound_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OldFuncInt:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.oldfuncint_.declarator_, 0);
    ppListDec(_p_->u.oldfuncint_.listdec_, 0);
    ppCompound_stm(_p_->u.oldfuncint_.compound_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NewFuncInt:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.newfuncint_.declarator_, 0);
    ppCompound_stm(_p_->u.newfuncint_.compound_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Function_def!\n");
    exit(1);
  }
}

void ppDec(Dec _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_NoDeclarator:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.nodeclarator_.listdeclaration_specifier_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Declarators:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.declarators_.listdeclaration_specifier_, 0);
    ppListInit_declarator(_p_->u.declarators_.listinit_declarator_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Dec!\n");
    exit(1);
  }
}

void ppListDec(ListDec listdec, int i)
{
  while(listdec!= 0)
  {
    if (listdec->listdec_ == 0)
    {
      ppDec(listdec->dec_, i);

      listdec = 0;
    }
    else
    {
      ppDec(listdec->dec_, i);
      renderS("");
      listdec = listdec->listdec_;
    }
  }
}

void ppListDeclaration_specifier(ListDeclaration_specifier listdeclaration_specifier, int i)
{
  while(listdeclaration_specifier!= 0)
  {
    if (listdeclaration_specifier->listdeclaration_specifier_ == 0)
    {
      ppDeclaration_specifier(listdeclaration_specifier->declaration_specifier_, i);

      listdeclaration_specifier = 0;
    }
    else
    {
      ppDeclaration_specifier(listdeclaration_specifier->declaration_specifier_, i);
      renderS("");
      listdeclaration_specifier = listdeclaration_specifier->listdeclaration_specifier_;
    }
  }
}

void ppListInit_declarator(ListInit_declarator listinit_declarator, int i)
{
  while(listinit_declarator!= 0)
  {
    if (listinit_declarator->listinit_declarator_ == 0)
    {
      ppInit_declarator(listinit_declarator->init_declarator_, i);

      listinit_declarator = 0;
    }
    else
    {
      ppInit_declarator(listinit_declarator->init_declarator_, i);
      renderC(',');
      listinit_declarator = listinit_declarator->listinit_declarator_;
    }
  }
}

void ppStruct_or_union_spec(Struct_or_union_spec _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Tag:
    if (_i_ > 0) renderC(_L_PAREN);
    ppStruct_or_union(_p_->u.tag_.struct_or_union_, 0);
    ppIdent(_p_->u.tag_.ident_, 0);
    renderC('{');
    ppListStruct_dec(_p_->u.tag_.liststruct_dec_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Unique:
    if (_i_ > 0) renderC(_L_PAREN);
    ppStruct_or_union(_p_->u.unique_.struct_or_union_, 0);
    renderC('{');
    ppListStruct_dec(_p_->u.unique_.liststruct_dec_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_TagType:
    if (_i_ > 0) renderC(_L_PAREN);
    ppStruct_or_union(_p_->u.tagtype_.struct_or_union_, 0);
    ppIdent(_p_->u.tagtype_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_or_union_spec!\n");
    exit(1);
  }
}

void ppStruct_or_union(Struct_or_union _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Struct:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("struct");

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Union:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("union");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_or_union!\n");
    exit(1);
  }
}

void ppListStruct_dec(ListStruct_dec liststruct_dec, int i)
{
  while(liststruct_dec!= 0)
  {
    if (liststruct_dec->liststruct_dec_ == 0)
    {
      ppStruct_dec(liststruct_dec->struct_dec_, i);

      liststruct_dec = 0;
    }
    else
    {
      ppStruct_dec(liststruct_dec->struct_dec_, i);
      renderS("");
      liststruct_dec = liststruct_dec->liststruct_dec_;
    }
  }
}

void ppStruct_dec(Struct_dec _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Structen:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListSpec_qual(_p_->u.structen_.listspec_qual_, 0);
    ppListStruct_declarator(_p_->u.structen_.liststruct_declarator_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_dec!\n");
    exit(1);
  }
}

void ppListSpec_qual(ListSpec_qual listspec_qual, int i)
{
  while(listspec_qual!= 0)
  {
    if (listspec_qual->listspec_qual_ == 0)
    {
      ppSpec_qual(listspec_qual->spec_qual_, i);

      listspec_qual = 0;
    }
    else
    {
      ppSpec_qual(listspec_qual->spec_qual_, i);
      renderS("");
      listspec_qual = listspec_qual->listspec_qual_;
    }
  }
}

void ppSpec_qual(Spec_qual _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_TypeSpec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType_specifier(_p_->u.typespec_.type_specifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_QualSpec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType_qualifier(_p_->u.qualspec_.type_qualifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Spec_qual!\n");
    exit(1);
  }
}

void ppListStruct_declarator(ListStruct_declarator liststruct_declarator, int i)
{
  while(liststruct_declarator!= 0)
  {
    if (liststruct_declarator->liststruct_declarator_ == 0)
    {
      ppStruct_declarator(liststruct_declarator->struct_declarator_, i);

      liststruct_declarator = 0;
    }
    else
    {
      ppStruct_declarator(liststruct_declarator->struct_declarator_, i);
      renderC(',');
      liststruct_declarator = liststruct_declarator->liststruct_declarator_;
    }
  }
}

void ppStruct_declarator(Struct_declarator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Decl:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.decl_.declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Field:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC(':');
    ppConstant_expression(_p_->u.field_.constant_expression_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_DecField:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDeclarator(_p_->u.decfield_.declarator_, 0);
    renderC(':');
    ppConstant_expression(_p_->u.decfield_.constant_expression_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Struct_declarator!\n");
    exit(1);
  }
}

void ppEnum_specifier(Enum_specifier _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_EnumDec:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("enum");
    renderC('{');
    ppListEnumerator(_p_->u.enumdec_.listenumerator_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_EnumName:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("enum");
    ppIdent(_p_->u.enumname_.ident_, 0);
    renderC('{');
    ppListEnumerator(_p_->u.enumname_.listenumerator_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_EnumVar:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("enum");
    ppIdent(_p_->u.enumvar_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Enum_specifier!\n");
    exit(1);
  }
}

void ppListEnumerator(ListEnumerator listenumerator, int i)
{
  while(listenumerator!= 0)
  {
    if (listenumerator->listenumerator_ == 0)
    {
      ppEnumerator(listenumerator->enumerator_, i);

      listenumerator = 0;
    }
    else
    {
      ppEnumerator(listenumerator->enumerator_, i);
      renderC(',');
      listenumerator = listenumerator->listenumerator_;
    }
  }
}

void ppDeclarator(Declarator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_BeginPointer:
    if (_i_ > 0) renderC(_L_PAREN);
    ppPointer(_p_->u.beginpointer_.pointer_, 0);
    ppDirect_declarator(_p_->u.beginpointer_.direct_declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NoPointer:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.nopointer_.direct_declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Declarator!\n");
    exit(1);
  }
}

void ppDirect_declarator(Direct_declarator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Name:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.name_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ParenDecl:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('(');
    ppDeclarator(_p_->u.parendecl_.declarator_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_InnitArray:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.innitarray_.direct_declarator_, 0);
    renderC('[');
    ppConstant_expression(_p_->u.innitarray_.constant_expression_, 0);
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Incomplete:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.incomplete_.direct_declarator_, 0);
    renderC('[');
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NewFuncDec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.newfuncdec_.direct_declarator_, 0);
    renderC('(');
    ppParameter_type(_p_->u.newfuncdec_.parameter_type_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OldFuncDef:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.oldfuncdef_.direct_declarator_, 0);
    renderC('(');
    ppListIdent(_p_->u.oldfuncdef_.listident_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OldFuncDec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDirect_declarator(_p_->u.oldfuncdec_.direct_declarator_, 0);
    renderC('(');
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Direct_declarator!\n");
    exit(1);
  }
}

void ppPointer(Pointer _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Point:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('*');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_PointQual:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('*');
    ppListType_qualifier(_p_->u.pointqual_.listtype_qualifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_PointPoint:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('*');
    ppPointer(_p_->u.pointpoint_.pointer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_PointQualPoint:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('*');
    ppListType_qualifier(_p_->u.pointqualpoint_.listtype_qualifier_, 0);
    ppPointer(_p_->u.pointqualpoint_.pointer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Pointer!\n");
    exit(1);
  }
}

void ppListType_qualifier(ListType_qualifier listtype_qualifier, int i)
{
  while(listtype_qualifier!= 0)
  {
    if (listtype_qualifier->listtype_qualifier_ == 0)
    {
      ppType_qualifier(listtype_qualifier->type_qualifier_, i);

      listtype_qualifier = 0;
    }
    else
    {
      ppType_qualifier(listtype_qualifier->type_qualifier_, i);
      renderS("");
      listtype_qualifier = listtype_qualifier->listtype_qualifier_;
    }
  }
}

void ppParameter_type(Parameter_type _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_AllSpec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppParameter_declarations(_p_->u.allspec_.parameter_declarations_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_More:
    if (_i_ > 0) renderC(_L_PAREN);
    ppParameter_declarations(_p_->u.more_.parameter_declarations_, 0);
    renderC(',');
    renderS("...");

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_type!\n");
    exit(1);
  }
}

void ppParameter_declarations(Parameter_declarations _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_ParamDec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppParameter_declaration(_p_->u.paramdec_.parameter_declaration_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_MoreParamDec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppParameter_declarations(_p_->u.moreparamdec_.parameter_declarations_, 0);
    renderC(',');
    ppParameter_declaration(_p_->u.moreparamdec_.parameter_declaration_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_declarations!\n");
    exit(1);
  }
}

void ppParameter_declaration(Parameter_declaration _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_OnlyType:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.onlytype_.listdeclaration_specifier_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_TypeAndParam:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.typeandparam_.listdeclaration_specifier_, 0);
    ppDeclarator(_p_->u.typeandparam_.declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Abstract:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDeclaration_specifier(_p_->u.abstract_.listdeclaration_specifier_, 0);
    ppAbstract_declarator(_p_->u.abstract_.abstract_declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Parameter_declaration!\n");
    exit(1);
  }
}

void ppListIdent(ListIdent listident, int i)
{
  while(listident!= 0)
  {
    if (listident->listident_ == 0)
    {
      ppIdent(listident->ident_, i);

      listident = 0;
    }
    else
    {
      ppIdent(listident->ident_, i);
      renderC(',');
      listident = listident->listident_;
    }
  }
}

void ppInitializer(Initializer _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_InitExpr:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(_p_->u.initexpr_.exp_, 2);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_InitListOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    ppInitializers(_p_->u.initlistone_.initializers_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_InitListTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    ppInitializers(_p_->u.initlisttwo_.initializers_, 0);
    renderC(',');
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Initializer!\n");
    exit(1);
  }
}

void ppInitializers(Initializers _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_AnInit:
    if (_i_ > 0) renderC(_L_PAREN);
    ppInitializer(_p_->u.aninit_.initializer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_MoreInit:
    if (_i_ > 0) renderC(_L_PAREN);
    ppInitializers(_p_->u.moreinit_.initializers_, 0);
    renderC(',');
    ppInitializer(_p_->u.moreinit_.initializer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Initializers!\n");
    exit(1);
  }
}

void ppType_name(Type_name _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_PlainType:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListSpec_qual(_p_->u.plaintype_.listspec_qual_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ExtendedType:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListSpec_qual(_p_->u.extendedtype_.listspec_qual_, 0);
    ppAbstract_declarator(_p_->u.extendedtype_.abstract_declarator_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Type_name!\n");
    exit(1);
  }
}

void ppAbstract_declarator(Abstract_declarator _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_PointerStart:
    if (_i_ > 0) renderC(_L_PAREN);
    ppPointer(_p_->u.pointerstart_.pointer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Advanced:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDir_abs_dec(_p_->u.advanced_.dir_abs_dec_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_PointAdvanced:
    if (_i_ > 0) renderC(_L_PAREN);
    ppPointer(_p_->u.pointadvanced_.pointer_, 0);
    ppDir_abs_dec(_p_->u.pointadvanced_.dir_abs_dec_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Abstract_declarator!\n");
    exit(1);
  }
}

void ppDir_abs_dec(Dir_abs_dec _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_WithinParentes:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('(');
    ppAbstract_declarator(_p_->u.withinparentes_.abstract_declarator_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Array:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('[');
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_InitiatedArray:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('[');
    ppConstant_expression(_p_->u.initiatedarray_.constant_expression_, 0);
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_UnInitiated:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDir_abs_dec(_p_->u.uninitiated_.dir_abs_dec_, 0);
    renderC('[');
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Initiated:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDir_abs_dec(_p_->u.initiated_.dir_abs_dec_, 0);
    renderC('[');
    ppConstant_expression(_p_->u.initiated_.constant_expression_, 0);
    renderC(']');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OldFunction:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('(');
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NewFunction:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('(');
    ppParameter_type(_p_->u.newfunction_.parameter_type_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_OldFuncExpr:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDir_abs_dec(_p_->u.oldfuncexpr_.dir_abs_dec_, 0);
    renderC('(');
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_NewFuncExpr:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDir_abs_dec(_p_->u.newfuncexpr_.dir_abs_dec_, 0);
    renderC('(');
    ppParameter_type(_p_->u.newfuncexpr_.parameter_type_, 0);
    renderC(')');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Dir_abs_dec!\n");
    exit(1);
  }
}

void ppStm(Stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_LabelS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppLabeled_stm(_p_->u.labels_.labeled_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_CompS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppCompound_stm(_p_->u.comps_.compound_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ExprS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExpression_stm(_p_->u.exprs_.expression_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SelS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppSelection_stm(_p_->u.sels_.selection_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_IterS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIter_stm(_p_->u.iters_.iter_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_JumpS:
    if (_i_ > 0) renderC(_L_PAREN);
    ppJump_stm(_p_->u.jumps_.jump_stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Stm!\n");
    exit(1);
  }
}

void ppLabeled_stm(Labeled_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_SlabelOne:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.slabelone_.ident_, 0);
    renderC(':');
    ppStm(_p_->u.slabelone_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SlabelTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("case");
    ppConstant_expression(_p_->u.slabeltwo_.constant_expression_, 0);
    renderC(':');
    ppStm(_p_->u.slabeltwo_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SlabelThree:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("default");
    renderC(':');
    ppStm(_p_->u.slabelthree_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Labeled_stm!\n");
    exit(1);
  }
}

void ppCompound_stm(Compound_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_ScompOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ScompTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    ppListStm(_p_->u.scomptwo_.liststm_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ScompThree:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    ppListDec(_p_->u.scompthree_.listdec_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_ScompFour:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC('{');
    ppListDec(_p_->u.scompfour_.listdec_, 0);
    ppListStm(_p_->u.scompfour_.liststm_, 0);
    renderC('}');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Compound_stm!\n");
    exit(1);
  }
}

void ppExpression_stm(Expression_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_SexprOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SexprTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(_p_->u.sexprtwo_.exp_, 0);
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Expression_stm!\n");
    exit(1);
  }
}

void ppSelection_stm(Selection_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_SselOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("if");
    renderC('(');
    ppExp(_p_->u.sselone_.exp_, 0);
    renderC(')');
    ppStm(_p_->u.sselone_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SselTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("if");
    renderC('(');
    ppExp(_p_->u.sseltwo_.exp_, 0);
    renderC(')');
    ppStm(_p_->u.sseltwo_.stm_1, 0);
    renderS("else");
    ppStm(_p_->u.sseltwo_.stm_2, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SselThree:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("switch");
    renderC('(');
    ppExp(_p_->u.sselthree_.exp_, 0);
    renderC(')');
    ppStm(_p_->u.sselthree_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Selection_stm!\n");
    exit(1);
  }
}

void ppIter_stm(Iter_stm _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_SiterOne:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("while");
    renderC('(');
    ppExp(_p_->u.siterone_.exp_, 0);
    renderC(')');
    ppStm(_p_->u.siterone_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SiterTwo:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("do");
    ppStm(_p_->u.sitertwo_.stm_, 0);
    renderS("while");
    renderC('(');
    ppExp(_p_->u.sitertwo_.exp_, 0);
    renderC(')');
    renderC(';');

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SiterThree:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("for");
    renderC('(');
    ppExpression_stm(_p_->u.siterthree_.expression_stm_1, 0);
    ppExpression_stm(_p_->u.siterthree_.expression_stm_2, 0);
    renderC(')');
    ppStm(_p_->u.siterthree_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SiterFour:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("for");
    renderC('(');
    ppExpression_stm(_p_->u.siterfour_.expression_stm_1, 0);
    ppExpression_stm(_p_->u.siterfour_.expression_stm_2, 0);
    ppExp(_p_->u.siterfour_.exp_, 0);
    renderC(')');
    ppStm(_p_->u.siterfour_.stm_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Iter_stm!\n");
    exit(1);
  }
}

void ppListStm(ListStm liststm, int i)
{
  while(liststm!= 0)
  {
    if (liststm->liststm_ == 0)
    {
      ppStm(liststm->stm_, i);

      liststm = 0;
    }
    else
    {
      ppStm(liststm->stm_, i);
      renderS("");
      liststm = liststm->liststm_;
    }
  }
}

void ppConstant(Constant _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Efloat:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDouble(_p_->u.efloat_.double_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Echar:
    if (_i_ > 0) renderC(_L_PAREN);
    ppChar(_p_->u.echar_.char_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eunsigned:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eunsigned_.unsigned_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Elong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.elong_.long_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eunsignlong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eunsignlong_.unsignedlong_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ehexadec:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ehexadec_.hexadecimal_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ehexaunsign:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ehexaunsign_.hexunsigned_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ehexalong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ehexalong_.hexlong_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ehexaunslong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ehexaunslong_.hexunslong_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eoctal:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eoctal_.octal_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eoctalunsign:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eoctalunsign_.octalunsigned_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eoctallong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eoctallong_.octallong_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eoctalunslong:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eoctalunslong_.octalunslong_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ecdouble:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ecdouble_.cdouble_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Ecfloat:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.ecfloat_.cfloat_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eclongdouble:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(_p_->u.eclongdouble_.clongdouble_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Eint:
    if (_i_ > 0) renderC(_L_PAREN);
    ppInteger(_p_->u.eint_.integer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Elonger:
    if (_i_ > 0) renderC(_L_PAREN);
    /* Internal Category */
    ppInteger(_p_->u.elonger_.integer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Edouble:
    if (_i_ > 0) renderC(_L_PAREN);
    /* Internal Category */
    ppDouble(_p_->u.edouble_.double_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Constant!\n");
    exit(1);
  }
}

void ppConstant_expression(Constant_expression _p_, int _i_)
{
  switch(_p_->kind)
  {
  case is_Especial:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(_p_->u.especial_.exp_, 3);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Constant_expression!\n");
    exit(1);
  }
}

void ppListExp(ListExp listexp, int i)
{
  while(listexp!= 0)
  {
    if (listexp->listexp_ == 0)
    {
      ppExp(listexp->exp_, i);

      listexp = 0;
    }
    else
    {
      ppExp(listexp->exp_, i);
      renderC(',');
      listexp = listexp->listexp_;
    }
  }
}

void ppInteger(Integer n, int UNUSED i)
{
  char tmp[16];
  sprintf(tmp, "%d", n);
  bufAppendS(tmp);
}

void ppDouble(Double d, int UNUSED i)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppendS(tmp);
}

void ppChar(Char c, int UNUSED i)
{
  bufAppendC('\'');
  bufAppendC(c);
  bufAppendC('\'');
}

void ppString(String s, int UNUSED i)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}

void ppIdent(String s, int UNUSED i)
{
  renderS(s);
}

void ppUnsigned(String s, int UNUSED i)
{
  renderS(s);
}

void ppLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppUnsignedLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppHexadecimal(String s, int UNUSED i)
{
  renderS(s);
}

void ppHexUnsigned(String s, int UNUSED i)
{
  renderS(s);
}

void ppHexLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppHexUnsLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppOctal(String s, int UNUSED i)
{
  renderS(s);
}

void ppOctalUnsigned(String s, int UNUSED i)
{
  renderS(s);
}

void ppOctalLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppOctalUnsLong(String s, int UNUSED i)
{
  renderS(s);
}

void ppCDouble(String s, int UNUSED i)
{
  renderS(s);
}

void ppCFloat(String s, int UNUSED i)
{
  renderS(s);
}

void ppCLongDouble(String s, int UNUSED i)
{
  renderS(s);
}

void shExternal_declaration(External_declaration _p_)
{
  switch(_p_->kind)
  {
  case is_Class:
    bufAppendC('(');

    bufAppendS("Class");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.class_.ident_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shExtends(_p_->u.class_.extends_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListExternal_declaration(_p_->u.class_.listexternal_declaration_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Namespace:
    bufAppendC('(');

    bufAppendS("Namespace");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.namespace_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Afunc:
    bufAppendC('(');

    bufAppendS("Afunc");

    bufAppendC(' ');

    bufAppendC('[');
    shFunction_def(_p_->u.afunc_.function_def_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Global:
    bufAppendC('(');

    bufAppendS("Global");

    bufAppendC(' ');

    bufAppendC('[');
    shDec(_p_->u.global_.dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing External_declaration!\n");
    exit(1);
  }
}

void shExtends(Extends _p_)
{
  switch(_p_->kind)
  {
  case is_Inheritance:
    bufAppendC('(');

    bufAppendS("Inheritance");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.inheritance_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NoInheritance:

    bufAppendS("NoInheritance");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Extends!\n");
    exit(1);
  }
}

void shJump_stm(Jump_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SjumpFour:

    bufAppendS("SjumpFour");




    break;

  case is_SjumpFive:
    bufAppendC('(');

    bufAppendS("SjumpFive");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.sjumpfive_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SjumpOne:
    bufAppendC('(');

    bufAppendS("SjumpOne");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.sjumpone_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SjumpTwo:

    bufAppendS("SjumpTwo");




    break;

  case is_SjumpThree:

    bufAppendS("SjumpThree");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Jump_stm!\n");
    exit(1);
  }
}

void shType_specifier(Type_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_Tvoid:

    bufAppendS("Tvoid");




    break;

  case is_Tchar:

    bufAppendS("Tchar");




    break;

  case is_Tshort:

    bufAppendS("Tshort");




    break;

  case is_Tint:

    bufAppendS("Tint");




    break;

  case is_Tlong:

    bufAppendS("Tlong");




    break;

  case is_Tfloat:

    bufAppendS("Tfloat");




    break;

  case is_Tdouble:

    bufAppendS("Tdouble");




    break;

  case is_Tsigned:

    bufAppendS("Tsigned");




    break;

  case is_Tunsigned:

    bufAppendS("Tunsigned");




    break;

  case is_Tstruct:
    bufAppendC('(');

    bufAppendS("Tstruct");

    bufAppendC(' ');

    bufAppendC('[');
    shStruct_or_union_spec(_p_->u.tstruct_.struct_or_union_spec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Tenum:
    bufAppendC('(');

    bufAppendS("Tenum");

    bufAppendC(' ');

    bufAppendC('[');
    shEnum_specifier(_p_->u.tenum_.enum_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Tname:

    bufAppendS("Tname");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Type_specifier!\n");
    exit(1);
  }
}

void shStorage_class_specifier(Storage_class_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_MyType:

    bufAppendS("MyType");




    break;

  case is_GlobalPrograms:

    bufAppendS("GlobalPrograms");




    break;

  case is_LocalProgram:

    bufAppendS("LocalProgram");




    break;

  case is_LocalBlock:

    bufAppendS("LocalBlock");




    break;

  case is_LocalReg:

    bufAppendS("LocalReg");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Storage_class_specifier!\n");
    exit(1);
  }
}

void shType_qualifier(Type_qualifier _p_)
{
  switch(_p_->kind)
  {
  case is_Const:

    bufAppendS("Const");




    break;

  case is_NoOptim:

    bufAppendS("NoOptim");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Type_qualifier!\n");
    exit(1);
  }
}

void shUnary_operator(Unary_operator _p_)
{
  switch(_p_->kind)
  {
  case is_Logicalneg:

    bufAppendS("Logicalneg");




    break;

  case is_Address:

    bufAppendS("Address");




    break;

  case is_Indirection:

    bufAppendS("Indirection");




    break;

  case is_Plus:

    bufAppendS("Plus");




    break;

  case is_Negative:

    bufAppendS("Negative");




    break;

  case is_Complement:

    bufAppendS("Complement");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Unary_operator!\n");
    exit(1);
  }
}

void shAssignment_op(Assignment_op _p_)
{
  switch(_p_->kind)
  {
  case is_Assign:

    bufAppendS("Assign");




    break;

  case is_AssignMul:

    bufAppendS("AssignMul");




    break;

  case is_AssignDiv:

    bufAppendS("AssignDiv");




    break;

  case is_AssignMod:

    bufAppendS("AssignMod");




    break;

  case is_AssignAdd:

    bufAppendS("AssignAdd");




    break;

  case is_AssignSub:

    bufAppendS("AssignSub");




    break;

  case is_AssignLeft:

    bufAppendS("AssignLeft");




    break;

  case is_AssignRight:

    bufAppendS("AssignRight");




    break;

  case is_AssignAnd:

    bufAppendS("AssignAnd");




    break;

  case is_AssignXor:

    bufAppendS("AssignXor");




    break;

  case is_AssignOr:

    bufAppendS("AssignOr");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Assignment_op!\n");
    exit(1);
  }
}

void shInit_declarator(Init_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_InitDecl:
    bufAppendC('(');

    bufAppendS("InitDecl");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.initdecl_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shInitializer(_p_->u.initdecl_.initializer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OnlyDecl:
    bufAppendC('(');

    bufAppendS("OnlyDecl");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.onlydecl_.declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Init_declarator!\n");
    exit(1);
  }
}

void shEnumerator(Enumerator _p_)
{
  switch(_p_->kind)
  {
  case is_EnumInit:
    bufAppendC('(');

    bufAppendS("EnumInit");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.enuminit_.ident_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shConstant_expression(_p_->u.enuminit_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Plain:
    bufAppendC('(');

    bufAppendS("Plain");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.plain_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Enumerator!\n");
    exit(1);
  }
}

void shExp(Exp _p_)
{
  switch(_p_->kind)
  {
  case is_InitClass:
    bufAppendC('(');

    bufAppendS("InitClass");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.initclass_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shAssignment_op(_p_->u.initclass_.assignment_op_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shIdent(_p_->u.initclass_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_DestroyClass:
    bufAppendC('(');

    bufAppendS("DestroyClass");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.destroyclass_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Eassign:
    bufAppendC('(');

    bufAppendS("Eassign");

    bufAppendC(' ');

    shExp(_p_->u.eassign_.exp_1);
    bufAppendC(' ');
    bufAppendC('[');
    shAssignment_op(_p_->u.eassign_.assignment_op_);
    bufAppendC(']');
    bufAppendC(' ');
    shExp(_p_->u.eassign_.exp_2);

    bufAppendC(')');

    break;

  case is_Ecomma:
    bufAppendC('(');

    bufAppendS("Ecomma");

    bufAppendC(' ');

    shExp(_p_->u.ecomma_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ecomma_.exp_2);

    bufAppendC(')');

    break;

  case is_Econdition:
    bufAppendC('(');

    bufAppendS("Econdition");

    bufAppendC(' ');

    shExp(_p_->u.econdition_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.econdition_.exp_2);
    bufAppendC(' ');
    shExp(_p_->u.econdition_.exp_3);

    bufAppendC(')');

    break;

  case is_Elor:
    bufAppendC('(');

    bufAppendS("Elor");

    bufAppendC(' ');

    shExp(_p_->u.elor_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.elor_.exp_2);

    bufAppendC(')');

    break;

  case is_Eland:
    bufAppendC('(');

    bufAppendS("Eland");

    bufAppendC(' ');

    shExp(_p_->u.eland_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eland_.exp_2);

    bufAppendC(')');

    break;

  case is_Ebitor:
    bufAppendC('(');

    bufAppendS("Ebitor");

    bufAppendC(' ');

    shExp(_p_->u.ebitor_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ebitor_.exp_2);

    bufAppendC(')');

    break;

  case is_Ebitexor:
    bufAppendC('(');

    bufAppendS("Ebitexor");

    bufAppendC(' ');

    shExp(_p_->u.ebitexor_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ebitexor_.exp_2);

    bufAppendC(')');

    break;

  case is_Ebitand:
    bufAppendC('(');

    bufAppendS("Ebitand");

    bufAppendC(' ');

    shExp(_p_->u.ebitand_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ebitand_.exp_2);

    bufAppendC(')');

    break;

  case is_Eeq:
    bufAppendC('(');

    bufAppendS("Eeq");

    bufAppendC(' ');

    shExp(_p_->u.eeq_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eeq_.exp_2);

    bufAppendC(')');

    break;

  case is_Eneq:
    bufAppendC('(');

    bufAppendS("Eneq");

    bufAppendC(' ');

    shExp(_p_->u.eneq_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eneq_.exp_2);

    bufAppendC(')');

    break;

  case is_Elthen:
    bufAppendC('(');

    bufAppendS("Elthen");

    bufAppendC(' ');

    shExp(_p_->u.elthen_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.elthen_.exp_2);

    bufAppendC(')');

    break;

  case is_Egrthen:
    bufAppendC('(');

    bufAppendS("Egrthen");

    bufAppendC(' ');

    shExp(_p_->u.egrthen_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.egrthen_.exp_2);

    bufAppendC(')');

    break;

  case is_Ele:
    bufAppendC('(');

    bufAppendS("Ele");

    bufAppendC(' ');

    shExp(_p_->u.ele_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ele_.exp_2);

    bufAppendC(')');

    break;

  case is_Ege:
    bufAppendC('(');

    bufAppendS("Ege");

    bufAppendC(' ');

    shExp(_p_->u.ege_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ege_.exp_2);

    bufAppendC(')');

    break;

  case is_Eleft:
    bufAppendC('(');

    bufAppendS("Eleft");

    bufAppendC(' ');

    shExp(_p_->u.eleft_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eleft_.exp_2);

    bufAppendC(')');

    break;

  case is_Eright:
    bufAppendC('(');

    bufAppendS("Eright");

    bufAppendC(' ');

    shExp(_p_->u.eright_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eright_.exp_2);

    bufAppendC(')');

    break;

  case is_Eplus:
    bufAppendC('(');

    bufAppendS("Eplus");

    bufAppendC(' ');

    shExp(_p_->u.eplus_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eplus_.exp_2);

    bufAppendC(')');

    break;

  case is_Eminus:
    bufAppendC('(');

    bufAppendS("Eminus");

    bufAppendC(' ');

    shExp(_p_->u.eminus_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.eminus_.exp_2);

    bufAppendC(')');

    break;

  case is_Etimes:
    bufAppendC('(');

    bufAppendS("Etimes");

    bufAppendC(' ');

    shExp(_p_->u.etimes_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.etimes_.exp_2);

    bufAppendC(')');

    break;

  case is_Ediv:
    bufAppendC('(');

    bufAppendS("Ediv");

    bufAppendC(' ');

    shExp(_p_->u.ediv_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.ediv_.exp_2);

    bufAppendC(')');

    break;

  case is_Emod:
    bufAppendC('(');

    bufAppendS("Emod");

    bufAppendC(' ');

    shExp(_p_->u.emod_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.emod_.exp_2);

    bufAppendC(')');

    break;

  case is_Etypeconv:
    bufAppendC('(');

    bufAppendS("Etypeconv");

    bufAppendC(' ');

    bufAppendC('[');
    shType_name(_p_->u.etypeconv_.type_name_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shExp(_p_->u.etypeconv_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epreinc:
    bufAppendC('(');

    bufAppendS("Epreinc");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.epreinc_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epredec:
    bufAppendC('(');

    bufAppendS("Epredec");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.epredec_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epreop:
    bufAppendC('(');

    bufAppendS("Epreop");

    bufAppendC(' ');

    bufAppendC('[');
    shUnary_operator(_p_->u.epreop_.unary_operator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shExp(_p_->u.epreop_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Ebytesexpr:
    bufAppendC('(');

    bufAppendS("Ebytesexpr");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.ebytesexpr_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Ebytestype:
    bufAppendC('(');

    bufAppendS("Ebytestype");

    bufAppendC(' ');

    bufAppendC('[');
    shType_name(_p_->u.ebytestype_.type_name_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Earray:
    bufAppendC('(');

    bufAppendS("Earray");

    bufAppendC(' ');

    shExp(_p_->u.earray_.exp_1);
    bufAppendC(' ');
    shExp(_p_->u.earray_.exp_2);

    bufAppendC(')');

    break;

  case is_Efunk:
    bufAppendC('(');

    bufAppendS("Efunk");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.efunk_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Efunkpar:
    bufAppendC('(');

    bufAppendS("Efunkpar");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.efunkpar_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListExp(_p_->u.efunkpar_.listexp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Eselect:
    bufAppendC('(');

    bufAppendS("Eselect");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.eselect_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shIdent(_p_->u.eselect_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epoint:
    bufAppendC('(');

    bufAppendS("Epoint");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.epoint_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shIdent(_p_->u.epoint_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epostinc:
    bufAppendC('(');

    bufAppendS("Epostinc");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.epostinc_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Epostdec:
    bufAppendC('(');

    bufAppendS("Epostdec");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.epostdec_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Evar:
    bufAppendC('(');

    bufAppendS("Evar");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.evar_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Econst:
    bufAppendC('(');

    bufAppendS("Econst");

    bufAppendC(' ');

    bufAppendC('[');
    shConstant(_p_->u.econst_.constant_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Estring:
    bufAppendC('(');

    bufAppendS("Estring");

    bufAppendC(' ');

    bufAppendC('[');
    shString(_p_->u.estring_.string_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Exp!\n");
    exit(1);
  }
}

void shDeclaration_specifier(Declaration_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_DecClass:
    bufAppendC('(');

    bufAppendS("DecClass");

    bufAppendC(' ');

    shIdent(_p_->u.decclass_.ident_1);
    bufAppendC(' ');
    bufAppendC('[');
    shPointer(_p_->u.decclass_.pointer_);
    bufAppendC(']');
    bufAppendC(' ');
    shIdent(_p_->u.decclass_.ident_2);

    bufAppendC(')');

    break;

  case is_DecClassNoPoiter:
    bufAppendC('(');

    bufAppendS("DecClassNoPoiter");

    bufAppendC(' ');

    shIdent(_p_->u.decclassnopoiter_.ident_1);
    bufAppendC(' ');
    shIdent(_p_->u.decclassnopoiter_.ident_2);

    bufAppendC(')');

    break;

  case is_Type:
    bufAppendC('(');

    bufAppendS("Type");

    bufAppendC(' ');

    bufAppendC('[');
    shType_specifier(_p_->u.type_.type_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Storage:
    bufAppendC('(');

    bufAppendS("Storage");

    bufAppendC(' ');

    bufAppendC('[');
    shStorage_class_specifier(_p_->u.storage_.storage_class_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SpecProp:
    bufAppendC('(');

    bufAppendS("SpecProp");

    bufAppendC(' ');

    bufAppendC('[');
    shType_qualifier(_p_->u.specprop_.type_qualifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Declaration_specifier!\n");
    exit(1);
  }
}

void shProgram(Program _p_)
{
  switch(_p_->kind)
  {
  case is_Progr:
    bufAppendC('(');

    bufAppendS("Progr");

    bufAppendC(' ');

    bufAppendC('[');
    shListExternal_declaration(_p_->u.progr_.listexternal_declaration_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Program!\n");
    exit(1);
  }
}

void shListExternal_declaration(ListExternal_declaration listexternal_declaration)
{
  while(listexternal_declaration!= 0)
  {
    if (listexternal_declaration->listexternal_declaration_)
    {
      shExternal_declaration(listexternal_declaration->external_declaration_);
      bufAppendS(", ");
      listexternal_declaration = listexternal_declaration->listexternal_declaration_;
    }
    else
    {
      shExternal_declaration(listexternal_declaration->external_declaration_);
      listexternal_declaration = 0;
    }
  }
}

void shFunction_def(Function_def _p_)
{
  switch(_p_->kind)
  {
  case is_OldFunc:
    bufAppendC('(');

    bufAppendS("OldFunc");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.oldfunc_.listdeclaration_specifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shDeclarator(_p_->u.oldfunc_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListDec(_p_->u.oldfunc_.listdec_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shCompound_stm(_p_->u.oldfunc_.compound_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NewFunc:
    bufAppendC('(');

    bufAppendS("NewFunc");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.newfunc_.listdeclaration_specifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shDeclarator(_p_->u.newfunc_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shCompound_stm(_p_->u.newfunc_.compound_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OldFuncInt:
    bufAppendC('(');

    bufAppendS("OldFuncInt");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.oldfuncint_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListDec(_p_->u.oldfuncint_.listdec_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shCompound_stm(_p_->u.oldfuncint_.compound_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NewFuncInt:
    bufAppendC('(');

    bufAppendS("NewFuncInt");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.newfuncint_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shCompound_stm(_p_->u.newfuncint_.compound_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Function_def!\n");
    exit(1);
  }
}

void shDec(Dec _p_)
{
  switch(_p_->kind)
  {
  case is_NoDeclarator:
    bufAppendC('(');

    bufAppendS("NoDeclarator");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.nodeclarator_.listdeclaration_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Declarators:
    bufAppendC('(');

    bufAppendS("Declarators");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.declarators_.listdeclaration_specifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListInit_declarator(_p_->u.declarators_.listinit_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Dec!\n");
    exit(1);
  }
}

void shListDec(ListDec listdec)
{
  while(listdec!= 0)
  {
    if (listdec->listdec_)
    {
      shDec(listdec->dec_);
      bufAppendS(", ");
      listdec = listdec->listdec_;
    }
    else
    {
      shDec(listdec->dec_);
      listdec = 0;
    }
  }
}

void shListDeclaration_specifier(ListDeclaration_specifier listdeclaration_specifier)
{
  while(listdeclaration_specifier!= 0)
  {
    if (listdeclaration_specifier->listdeclaration_specifier_)
    {
      shDeclaration_specifier(listdeclaration_specifier->declaration_specifier_);
      bufAppendS(", ");
      listdeclaration_specifier = listdeclaration_specifier->listdeclaration_specifier_;
    }
    else
    {
      shDeclaration_specifier(listdeclaration_specifier->declaration_specifier_);
      listdeclaration_specifier = 0;
    }
  }
}

void shListInit_declarator(ListInit_declarator listinit_declarator)
{
  while(listinit_declarator!= 0)
  {
    if (listinit_declarator->listinit_declarator_)
    {
      shInit_declarator(listinit_declarator->init_declarator_);
      bufAppendS(", ");
      listinit_declarator = listinit_declarator->listinit_declarator_;
    }
    else
    {
      shInit_declarator(listinit_declarator->init_declarator_);
      listinit_declarator = 0;
    }
  }
}

void shStruct_or_union_spec(Struct_or_union_spec _p_)
{
  switch(_p_->kind)
  {
  case is_Tag:
    bufAppendC('(');

    bufAppendS("Tag");

    bufAppendC(' ');

    bufAppendC('[');
    shStruct_or_union(_p_->u.tag_.struct_or_union_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shIdent(_p_->u.tag_.ident_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListStruct_dec(_p_->u.tag_.liststruct_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Unique:
    bufAppendC('(');

    bufAppendS("Unique");

    bufAppendC(' ');

    bufAppendC('[');
    shStruct_or_union(_p_->u.unique_.struct_or_union_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListStruct_dec(_p_->u.unique_.liststruct_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_TagType:
    bufAppendC('(');

    bufAppendS("TagType");

    bufAppendC(' ');

    bufAppendC('[');
    shStruct_or_union(_p_->u.tagtype_.struct_or_union_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shIdent(_p_->u.tagtype_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Struct_or_union_spec!\n");
    exit(1);
  }
}

void shStruct_or_union(Struct_or_union _p_)
{
  switch(_p_->kind)
  {
  case is_Struct:

    bufAppendS("Struct");




    break;

  case is_Union:

    bufAppendS("Union");




    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Struct_or_union!\n");
    exit(1);
  }
}

void shListStruct_dec(ListStruct_dec liststruct_dec)
{
  while(liststruct_dec!= 0)
  {
    if (liststruct_dec->liststruct_dec_)
    {
      shStruct_dec(liststruct_dec->struct_dec_);
      bufAppendS(", ");
      liststruct_dec = liststruct_dec->liststruct_dec_;
    }
    else
    {
      shStruct_dec(liststruct_dec->struct_dec_);
      liststruct_dec = 0;
    }
  }
}

void shStruct_dec(Struct_dec _p_)
{
  switch(_p_->kind)
  {
  case is_Structen:
    bufAppendC('(');

    bufAppendS("Structen");

    bufAppendC(' ');

    bufAppendC('[');
    shListSpec_qual(_p_->u.structen_.listspec_qual_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListStruct_declarator(_p_->u.structen_.liststruct_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Struct_dec!\n");
    exit(1);
  }
}

void shListSpec_qual(ListSpec_qual listspec_qual)
{
  while(listspec_qual!= 0)
  {
    if (listspec_qual->listspec_qual_)
    {
      shSpec_qual(listspec_qual->spec_qual_);
      bufAppendS(", ");
      listspec_qual = listspec_qual->listspec_qual_;
    }
    else
    {
      shSpec_qual(listspec_qual->spec_qual_);
      listspec_qual = 0;
    }
  }
}

void shSpec_qual(Spec_qual _p_)
{
  switch(_p_->kind)
  {
  case is_TypeSpec:
    bufAppendC('(');

    bufAppendS("TypeSpec");

    bufAppendC(' ');

    bufAppendC('[');
    shType_specifier(_p_->u.typespec_.type_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_QualSpec:
    bufAppendC('(');

    bufAppendS("QualSpec");

    bufAppendC(' ');

    bufAppendC('[');
    shType_qualifier(_p_->u.qualspec_.type_qualifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Spec_qual!\n");
    exit(1);
  }
}

void shListStruct_declarator(ListStruct_declarator liststruct_declarator)
{
  while(liststruct_declarator!= 0)
  {
    if (liststruct_declarator->liststruct_declarator_)
    {
      shStruct_declarator(liststruct_declarator->struct_declarator_);
      bufAppendS(", ");
      liststruct_declarator = liststruct_declarator->liststruct_declarator_;
    }
    else
    {
      shStruct_declarator(liststruct_declarator->struct_declarator_);
      liststruct_declarator = 0;
    }
  }
}

void shStruct_declarator(Struct_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_Decl:
    bufAppendC('(');

    bufAppendS("Decl");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.decl_.declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Field:
    bufAppendC('(');

    bufAppendS("Field");

    bufAppendC(' ');

    bufAppendC('[');
    shConstant_expression(_p_->u.field_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_DecField:
    bufAppendC('(');

    bufAppendS("DecField");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.decfield_.declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shConstant_expression(_p_->u.decfield_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Struct_declarator!\n");
    exit(1);
  }
}

void shEnum_specifier(Enum_specifier _p_)
{
  switch(_p_->kind)
  {
  case is_EnumDec:
    bufAppendC('(');

    bufAppendS("EnumDec");

    bufAppendC(' ');

    bufAppendC('[');
    shListEnumerator(_p_->u.enumdec_.listenumerator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_EnumName:
    bufAppendC('(');

    bufAppendS("EnumName");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.enumname_.ident_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListEnumerator(_p_->u.enumname_.listenumerator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_EnumVar:
    bufAppendC('(');

    bufAppendS("EnumVar");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.enumvar_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Enum_specifier!\n");
    exit(1);
  }
}

void shListEnumerator(ListEnumerator listenumerator)
{
  while(listenumerator!= 0)
  {
    if (listenumerator->listenumerator_)
    {
      shEnumerator(listenumerator->enumerator_);
      bufAppendS(", ");
      listenumerator = listenumerator->listenumerator_;
    }
    else
    {
      shEnumerator(listenumerator->enumerator_);
      listenumerator = 0;
    }
  }
}

void shDeclarator(Declarator _p_)
{
  switch(_p_->kind)
  {
  case is_BeginPointer:
    bufAppendC('(');

    bufAppendS("BeginPointer");

    bufAppendC(' ');

    bufAppendC('[');
    shPointer(_p_->u.beginpointer_.pointer_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shDirect_declarator(_p_->u.beginpointer_.direct_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NoPointer:
    bufAppendC('(');

    bufAppendS("NoPointer");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.nopointer_.direct_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Declarator!\n");
    exit(1);
  }
}

void shDirect_declarator(Direct_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_Name:
    bufAppendC('(');

    bufAppendS("Name");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.name_.ident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_ParenDecl:
    bufAppendC('(');

    bufAppendS("ParenDecl");

    bufAppendC(' ');

    bufAppendC('[');
    shDeclarator(_p_->u.parendecl_.declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_InnitArray:
    bufAppendC('(');

    bufAppendS("InnitArray");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.innitarray_.direct_declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shConstant_expression(_p_->u.innitarray_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Incomplete:
    bufAppendC('(');

    bufAppendS("Incomplete");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.incomplete_.direct_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NewFuncDec:
    bufAppendC('(');

    bufAppendS("NewFuncDec");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.newfuncdec_.direct_declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shParameter_type(_p_->u.newfuncdec_.parameter_type_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OldFuncDef:
    bufAppendC('(');

    bufAppendS("OldFuncDef");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.oldfuncdef_.direct_declarator_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListIdent(_p_->u.oldfuncdef_.listident_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OldFuncDec:
    bufAppendC('(');

    bufAppendS("OldFuncDec");

    bufAppendC(' ');

    bufAppendC('[');
    shDirect_declarator(_p_->u.oldfuncdec_.direct_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Direct_declarator!\n");
    exit(1);
  }
}

void shPointer(Pointer _p_)
{
  switch(_p_->kind)
  {
  case is_Point:

    bufAppendS("Point");




    break;

  case is_PointQual:
    bufAppendC('(');

    bufAppendS("PointQual");

    bufAppendC(' ');

    bufAppendC('[');
    shListType_qualifier(_p_->u.pointqual_.listtype_qualifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_PointPoint:
    bufAppendC('(');

    bufAppendS("PointPoint");

    bufAppendC(' ');

    bufAppendC('[');
    shPointer(_p_->u.pointpoint_.pointer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_PointQualPoint:
    bufAppendC('(');

    bufAppendS("PointQualPoint");

    bufAppendC(' ');

    bufAppendC('[');
    shListType_qualifier(_p_->u.pointqualpoint_.listtype_qualifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shPointer(_p_->u.pointqualpoint_.pointer_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Pointer!\n");
    exit(1);
  }
}

void shListType_qualifier(ListType_qualifier listtype_qualifier)
{
  while(listtype_qualifier!= 0)
  {
    if (listtype_qualifier->listtype_qualifier_)
    {
      shType_qualifier(listtype_qualifier->type_qualifier_);
      bufAppendS(", ");
      listtype_qualifier = listtype_qualifier->listtype_qualifier_;
    }
    else
    {
      shType_qualifier(listtype_qualifier->type_qualifier_);
      listtype_qualifier = 0;
    }
  }
}

void shParameter_type(Parameter_type _p_)
{
  switch(_p_->kind)
  {
  case is_AllSpec:
    bufAppendC('(');

    bufAppendS("AllSpec");

    bufAppendC(' ');

    bufAppendC('[');
    shParameter_declarations(_p_->u.allspec_.parameter_declarations_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_More:
    bufAppendC('(');

    bufAppendS("More");

    bufAppendC(' ');

    bufAppendC('[');
    shParameter_declarations(_p_->u.more_.parameter_declarations_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Parameter_type!\n");
    exit(1);
  }
}

void shParameter_declarations(Parameter_declarations _p_)
{
  switch(_p_->kind)
  {
  case is_ParamDec:
    bufAppendC('(');

    bufAppendS("ParamDec");

    bufAppendC(' ');

    bufAppendC('[');
    shParameter_declaration(_p_->u.paramdec_.parameter_declaration_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_MoreParamDec:
    bufAppendC('(');

    bufAppendS("MoreParamDec");

    bufAppendC(' ');

    bufAppendC('[');
    shParameter_declarations(_p_->u.moreparamdec_.parameter_declarations_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shParameter_declaration(_p_->u.moreparamdec_.parameter_declaration_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Parameter_declarations!\n");
    exit(1);
  }
}

void shParameter_declaration(Parameter_declaration _p_)
{
  switch(_p_->kind)
  {
  case is_OnlyType:
    bufAppendC('(');

    bufAppendS("OnlyType");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.onlytype_.listdeclaration_specifier_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_TypeAndParam:
    bufAppendC('(');

    bufAppendS("TypeAndParam");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.typeandparam_.listdeclaration_specifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shDeclarator(_p_->u.typeandparam_.declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Abstract:
    bufAppendC('(');

    bufAppendS("Abstract");

    bufAppendC(' ');

    bufAppendC('[');
    shListDeclaration_specifier(_p_->u.abstract_.listdeclaration_specifier_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shAbstract_declarator(_p_->u.abstract_.abstract_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Parameter_declaration!\n");
    exit(1);
  }
}

void shListIdent(ListIdent listident)
{
  while(listident!= 0)
  {
    if (listident->listident_)
    {
      shIdent(listident->ident_);
      bufAppendS(", ");
      listident = listident->listident_;
    }
    else
    {
      shIdent(listident->ident_);
      listident = 0;
    }
  }
}

void shInitializer(Initializer _p_)
{
  switch(_p_->kind)
  {
  case is_InitExpr:
    bufAppendC('(');

    bufAppendS("InitExpr");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.initexpr_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_InitListOne:
    bufAppendC('(');

    bufAppendS("InitListOne");

    bufAppendC(' ');

    bufAppendC('[');
    shInitializers(_p_->u.initlistone_.initializers_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_InitListTwo:
    bufAppendC('(');

    bufAppendS("InitListTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shInitializers(_p_->u.initlisttwo_.initializers_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Initializer!\n");
    exit(1);
  }
}

void shInitializers(Initializers _p_)
{
  switch(_p_->kind)
  {
  case is_AnInit:
    bufAppendC('(');

    bufAppendS("AnInit");

    bufAppendC(' ');

    bufAppendC('[');
    shInitializer(_p_->u.aninit_.initializer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_MoreInit:
    bufAppendC('(');

    bufAppendS("MoreInit");

    bufAppendC(' ');

    bufAppendC('[');
    shInitializers(_p_->u.moreinit_.initializers_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shInitializer(_p_->u.moreinit_.initializer_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Initializers!\n");
    exit(1);
  }
}

void shType_name(Type_name _p_)
{
  switch(_p_->kind)
  {
  case is_PlainType:
    bufAppendC('(');

    bufAppendS("PlainType");

    bufAppendC(' ');

    bufAppendC('[');
    shListSpec_qual(_p_->u.plaintype_.listspec_qual_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_ExtendedType:
    bufAppendC('(');

    bufAppendS("ExtendedType");

    bufAppendC(' ');

    bufAppendC('[');
    shListSpec_qual(_p_->u.extendedtype_.listspec_qual_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shAbstract_declarator(_p_->u.extendedtype_.abstract_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Type_name!\n");
    exit(1);
  }
}

void shAbstract_declarator(Abstract_declarator _p_)
{
  switch(_p_->kind)
  {
  case is_PointerStart:
    bufAppendC('(');

    bufAppendS("PointerStart");

    bufAppendC(' ');

    bufAppendC('[');
    shPointer(_p_->u.pointerstart_.pointer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Advanced:
    bufAppendC('(');

    bufAppendS("Advanced");

    bufAppendC(' ');

    bufAppendC('[');
    shDir_abs_dec(_p_->u.advanced_.dir_abs_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_PointAdvanced:
    bufAppendC('(');

    bufAppendS("PointAdvanced");

    bufAppendC(' ');

    bufAppendC('[');
    shPointer(_p_->u.pointadvanced_.pointer_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shDir_abs_dec(_p_->u.pointadvanced_.dir_abs_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Abstract_declarator!\n");
    exit(1);
  }
}

void shDir_abs_dec(Dir_abs_dec _p_)
{
  switch(_p_->kind)
  {
  case is_WithinParentes:
    bufAppendC('(');

    bufAppendS("WithinParentes");

    bufAppendC(' ');

    bufAppendC('[');
    shAbstract_declarator(_p_->u.withinparentes_.abstract_declarator_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Array:

    bufAppendS("Array");




    break;

  case is_InitiatedArray:
    bufAppendC('(');

    bufAppendS("InitiatedArray");

    bufAppendC(' ');

    bufAppendC('[');
    shConstant_expression(_p_->u.initiatedarray_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_UnInitiated:
    bufAppendC('(');

    bufAppendS("UnInitiated");

    bufAppendC(' ');

    bufAppendC('[');
    shDir_abs_dec(_p_->u.uninitiated_.dir_abs_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Initiated:
    bufAppendC('(');

    bufAppendS("Initiated");

    bufAppendC(' ');

    bufAppendC('[');
    shDir_abs_dec(_p_->u.initiated_.dir_abs_dec_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shConstant_expression(_p_->u.initiated_.constant_expression_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OldFunction:

    bufAppendS("OldFunction");




    break;

  case is_NewFunction:
    bufAppendC('(');

    bufAppendS("NewFunction");

    bufAppendC(' ');

    bufAppendC('[');
    shParameter_type(_p_->u.newfunction_.parameter_type_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_OldFuncExpr:
    bufAppendC('(');

    bufAppendS("OldFuncExpr");

    bufAppendC(' ');

    bufAppendC('[');
    shDir_abs_dec(_p_->u.oldfuncexpr_.dir_abs_dec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_NewFuncExpr:
    bufAppendC('(');

    bufAppendS("NewFuncExpr");

    bufAppendC(' ');

    bufAppendC('[');
    shDir_abs_dec(_p_->u.newfuncexpr_.dir_abs_dec_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shParameter_type(_p_->u.newfuncexpr_.parameter_type_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Dir_abs_dec!\n");
    exit(1);
  }
}

void shStm(Stm _p_)
{
  switch(_p_->kind)
  {
  case is_LabelS:
    bufAppendC('(');

    bufAppendS("LabelS");

    bufAppendC(' ');

    bufAppendC('[');
    shLabeled_stm(_p_->u.labels_.labeled_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_CompS:
    bufAppendC('(');

    bufAppendS("CompS");

    bufAppendC(' ');

    bufAppendC('[');
    shCompound_stm(_p_->u.comps_.compound_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_ExprS:
    bufAppendC('(');

    bufAppendS("ExprS");

    bufAppendC(' ');

    bufAppendC('[');
    shExpression_stm(_p_->u.exprs_.expression_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SelS:
    bufAppendC('(');

    bufAppendS("SelS");

    bufAppendC(' ');

    bufAppendC('[');
    shSelection_stm(_p_->u.sels_.selection_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_IterS:
    bufAppendC('(');

    bufAppendS("IterS");

    bufAppendC(' ');

    bufAppendC('[');
    shIter_stm(_p_->u.iters_.iter_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_JumpS:
    bufAppendC('(');

    bufAppendS("JumpS");

    bufAppendC(' ');

    bufAppendC('[');
    shJump_stm(_p_->u.jumps_.jump_stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Stm!\n");
    exit(1);
  }
}

void shLabeled_stm(Labeled_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SlabelOne:
    bufAppendC('(');

    bufAppendS("SlabelOne");

    bufAppendC(' ');

    bufAppendC('[');
    shIdent(_p_->u.slabelone_.ident_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.slabelone_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SlabelTwo:
    bufAppendC('(');

    bufAppendS("SlabelTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shConstant_expression(_p_->u.slabeltwo_.constant_expression_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.slabeltwo_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SlabelThree:
    bufAppendC('(');

    bufAppendS("SlabelThree");

    bufAppendC(' ');

    bufAppendC('[');
    shStm(_p_->u.slabelthree_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Labeled_stm!\n");
    exit(1);
  }
}

void shCompound_stm(Compound_stm _p_)
{
  switch(_p_->kind)
  {
  case is_ScompOne:

    bufAppendS("ScompOne");




    break;

  case is_ScompTwo:
    bufAppendC('(');

    bufAppendS("ScompTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shListStm(_p_->u.scomptwo_.liststm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_ScompThree:
    bufAppendC('(');

    bufAppendS("ScompThree");

    bufAppendC(' ');

    bufAppendC('[');
    shListDec(_p_->u.scompthree_.listdec_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_ScompFour:
    bufAppendC('(');

    bufAppendS("ScompFour");

    bufAppendC(' ');

    bufAppendC('[');
    shListDec(_p_->u.scompfour_.listdec_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shListStm(_p_->u.scompfour_.liststm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Compound_stm!\n");
    exit(1);
  }
}

void shExpression_stm(Expression_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SexprOne:

    bufAppendS("SexprOne");




    break;

  case is_SexprTwo:
    bufAppendC('(');

    bufAppendS("SexprTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.sexprtwo_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Expression_stm!\n");
    exit(1);
  }
}

void shSelection_stm(Selection_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SselOne:
    bufAppendC('(');

    bufAppendS("SselOne");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.sselone_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.sselone_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SselTwo:
    bufAppendC('(');

    bufAppendS("SselTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.sseltwo_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    shStm(_p_->u.sseltwo_.stm_1);
    bufAppendC(' ');
    shStm(_p_->u.sseltwo_.stm_2);

    bufAppendC(')');

    break;

  case is_SselThree:
    bufAppendC('(');

    bufAppendS("SselThree");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.sselthree_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.sselthree_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Selection_stm!\n");
    exit(1);
  }
}

void shIter_stm(Iter_stm _p_)
{
  switch(_p_->kind)
  {
  case is_SiterOne:
    bufAppendC('(');

    bufAppendS("SiterOne");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.siterone_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.siterone_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SiterTwo:
    bufAppendC('(');

    bufAppendS("SiterTwo");

    bufAppendC(' ');

    bufAppendC('[');
    shStm(_p_->u.sitertwo_.stm_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shExp(_p_->u.sitertwo_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SiterThree:
    bufAppendC('(');

    bufAppendS("SiterThree");

    bufAppendC(' ');

    shExpression_stm(_p_->u.siterthree_.expression_stm_1);
    bufAppendC(' ');
    shExpression_stm(_p_->u.siterthree_.expression_stm_2);
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.siterthree_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_SiterFour:
    bufAppendC('(');

    bufAppendS("SiterFour");

    bufAppendC(' ');

    shExpression_stm(_p_->u.siterfour_.expression_stm_1);
    bufAppendC(' ');
    shExpression_stm(_p_->u.siterfour_.expression_stm_2);
    bufAppendC(' ');
    bufAppendC('[');
    shExp(_p_->u.siterfour_.exp_);
    bufAppendC(']');
    bufAppendC(' ');
    bufAppendC('[');
    shStm(_p_->u.siterfour_.stm_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Iter_stm!\n");
    exit(1);
  }
}

void shListStm(ListStm liststm)
{
  while(liststm!= 0)
  {
    if (liststm->liststm_)
    {
      shStm(liststm->stm_);
      bufAppendS(", ");
      liststm = liststm->liststm_;
    }
    else
    {
      shStm(liststm->stm_);
      liststm = 0;
    }
  }
}

void shConstant(Constant _p_)
{
  switch(_p_->kind)
  {
  case is_Efloat:
    bufAppendC('(');

    bufAppendS("Efloat");

    bufAppendC(' ');

    bufAppendC('[');
    shDouble(_p_->u.efloat_.double_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Echar:
    bufAppendC('(');

    bufAppendS("Echar");

    bufAppendC(' ');

    bufAppendC('[');
    shChar(_p_->u.echar_.char_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Eunsigned:
    bufAppendC('(');

    bufAppendS("Eunsigned");

    bufAppendC(' ');

    shIdent(_p_->u.eunsigned_.unsigned_);

    bufAppendC(')');

    break;

  case is_Elong:
    bufAppendC('(');

    bufAppendS("Elong");

    bufAppendC(' ');

    shIdent(_p_->u.elong_.long_);

    bufAppendC(')');

    break;

  case is_Eunsignlong:
    bufAppendC('(');

    bufAppendS("Eunsignlong");

    bufAppendC(' ');

    shIdent(_p_->u.eunsignlong_.unsignedlong_);

    bufAppendC(')');

    break;

  case is_Ehexadec:
    bufAppendC('(');

    bufAppendS("Ehexadec");

    bufAppendC(' ');

    shIdent(_p_->u.ehexadec_.hexadecimal_);

    bufAppendC(')');

    break;

  case is_Ehexaunsign:
    bufAppendC('(');

    bufAppendS("Ehexaunsign");

    bufAppendC(' ');

    shIdent(_p_->u.ehexaunsign_.hexunsigned_);

    bufAppendC(')');

    break;

  case is_Ehexalong:
    bufAppendC('(');

    bufAppendS("Ehexalong");

    bufAppendC(' ');

    shIdent(_p_->u.ehexalong_.hexlong_);

    bufAppendC(')');

    break;

  case is_Ehexaunslong:
    bufAppendC('(');

    bufAppendS("Ehexaunslong");

    bufAppendC(' ');

    shIdent(_p_->u.ehexaunslong_.hexunslong_);

    bufAppendC(')');

    break;

  case is_Eoctal:
    bufAppendC('(');

    bufAppendS("Eoctal");

    bufAppendC(' ');

    shIdent(_p_->u.eoctal_.octal_);

    bufAppendC(')');

    break;

  case is_Eoctalunsign:
    bufAppendC('(');

    bufAppendS("Eoctalunsign");

    bufAppendC(' ');

    shIdent(_p_->u.eoctalunsign_.octalunsigned_);

    bufAppendC(')');

    break;

  case is_Eoctallong:
    bufAppendC('(');

    bufAppendS("Eoctallong");

    bufAppendC(' ');

    shIdent(_p_->u.eoctallong_.octallong_);

    bufAppendC(')');

    break;

  case is_Eoctalunslong:
    bufAppendC('(');

    bufAppendS("Eoctalunslong");

    bufAppendC(' ');

    shIdent(_p_->u.eoctalunslong_.octalunslong_);

    bufAppendC(')');

    break;

  case is_Ecdouble:
    bufAppendC('(');

    bufAppendS("Ecdouble");

    bufAppendC(' ');

    shIdent(_p_->u.ecdouble_.cdouble_);

    bufAppendC(')');

    break;

  case is_Ecfloat:
    bufAppendC('(');

    bufAppendS("Ecfloat");

    bufAppendC(' ');

    shIdent(_p_->u.ecfloat_.cfloat_);

    bufAppendC(')');

    break;

  case is_Eclongdouble:
    bufAppendC('(');

    bufAppendS("Eclongdouble");

    bufAppendC(' ');

    shIdent(_p_->u.eclongdouble_.clongdouble_);

    bufAppendC(')');

    break;

  case is_Eint:
    bufAppendC('(');

    bufAppendS("Eint");

    bufAppendC(' ');

    bufAppendC('[');
    shInteger(_p_->u.eint_.integer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Elonger:
    bufAppendC('(');

    bufAppendS("Elonger");

    bufAppendC(' ');

    /* Internal Category */
    bufAppendC(' ');
    bufAppendC('[');
    shInteger(_p_->u.elonger_.integer_);
    bufAppendC(']');

    bufAppendC(')');

    break;

  case is_Edouble:
    bufAppendC('(');

    bufAppendS("Edouble");

    bufAppendC(' ');

    /* Internal Category */
    bufAppendC(' ');
    bufAppendC('[');
    shDouble(_p_->u.edouble_.double_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Constant!\n");
    exit(1);
  }
}

void shConstant_expression(Constant_expression _p_)
{
  switch(_p_->kind)
  {
  case is_Especial:
    bufAppendC('(');

    bufAppendS("Especial");

    bufAppendC(' ');

    bufAppendC('[');
    shExp(_p_->u.especial_.exp_);
    bufAppendC(']');

    bufAppendC(')');

    break;


  default:
    fprintf(stderr, "Error: bad kind field when showing Constant_expression!\n");
    exit(1);
  }
}

void shListExp(ListExp listexp)
{
  while(listexp!= 0)
  {
    if (listexp->listexp_)
    {
      shExp(listexp->exp_);
      bufAppendS(", ");
      listexp = listexp->listexp_;
    }
    else
    {
      shExp(listexp->exp_);
      listexp = 0;
    }
  }
}

void shInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppendS(tmp);
}
void shDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppendS(tmp);
}
void shChar(Char c)
{
  bufAppendC('\'');
  bufAppendC(c);
  bufAppendC('\'');
}
void shString(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}
void shIdent(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}

void shUnsigned(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shUnsignedLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shHexadecimal(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shHexUnsigned(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shHexLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shHexUnsLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shOctal(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shOctalUnsigned(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shOctalLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shOctalUnsLong(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shCDouble(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shCFloat(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shCLongDouble(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void bufAppendS(const char* s)
{
  int len = strlen(s);
  int n;
  while (cur_ + len > buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  for(n = 0; n < len; n++)
  {
    buf_[cur_ + n] = s[n];
  }
  cur_ += len;
  buf_[cur_] = 0;
}
void bufAppendC(const char c)
{
  if (cur_ == buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  buf_[cur_] = c;
  cur_++;
  buf_[cur_] = 0;
}
void bufReset(void)
{
  cur_ = 0;
  buf_size = BUFFER_INITIAL;
  resizeBuffer();
  memset(buf_, 0, buf_size);
}
void resizeBuffer(void)
{
  char* temp = (char*) malloc(buf_size);
  if (!temp)
  {
    fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
    exit(1);
  }
  if (buf_)
  {
    strncpy(temp, buf_, buf_size); /* peteg: strlcpy is safer, but not POSIX/ISO C. */
    free(buf_);
  }
  buf_ = temp;
}

char *buf_;
int cur_, buf_size;
