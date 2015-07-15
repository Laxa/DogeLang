/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse Dogeparse
#define yylex   Dogelex
#define yyerror Dogeerror
#define yylval  Dogelval
#define yychar  Dogechar
#define yydebug Dogedebug
#define yynerrs Dogenerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ERROR_ = 258,
     _SYMB_0 = 259,
     _SYMB_1 = 260,
     _SYMB_2 = 261,
     _SYMB_3 = 262,
     _SYMB_4 = 263,
     _SYMB_5 = 264,
     _SYMB_6 = 265,
     _SYMB_7 = 266,
     _SYMB_8 = 267,
     _SYMB_9 = 268,
     _SYMB_10 = 269,
     _SYMB_11 = 270,
     _SYMB_12 = 271,
     _SYMB_13 = 272,
     _SYMB_14 = 273,
     _SYMB_15 = 274,
     _SYMB_16 = 275,
     _SYMB_17 = 276,
     _SYMB_18 = 277,
     _SYMB_19 = 278,
     _SYMB_20 = 279,
     _SYMB_21 = 280,
     _SYMB_22 = 281,
     _SYMB_23 = 282,
     _SYMB_24 = 283,
     _SYMB_25 = 284,
     _SYMB_26 = 285,
     _SYMB_27 = 286,
     _SYMB_28 = 287,
     _SYMB_29 = 288,
     _SYMB_30 = 289,
     _SYMB_31 = 290,
     _SYMB_32 = 291,
     _SYMB_33 = 292,
     _SYMB_34 = 293,
     _SYMB_35 = 294,
     _SYMB_36 = 295,
     _SYMB_37 = 296,
     _SYMB_38 = 297,
     _SYMB_39 = 298,
     _SYMB_40 = 299,
     _SYMB_41 = 300,
     _SYMB_42 = 301,
     _SYMB_43 = 302,
     _SYMB_44 = 303,
     _SYMB_45 = 304,
     _SYMB_46 = 305,
     _SYMB_47 = 306,
     _SYMB_48 = 307,
     _SYMB_49 = 308,
     _SYMB_50 = 309,
     _SYMB_51 = 310,
     _SYMB_52 = 311,
     _SYMB_53 = 312,
     _SYMB_54 = 313,
     _SYMB_55 = 314,
     _SYMB_56 = 315,
     _SYMB_57 = 316,
     _SYMB_58 = 317,
     _SYMB_59 = 318,
     _SYMB_60 = 319,
     _SYMB_61 = 320,
     _SYMB_62 = 321,
     _SYMB_63 = 322,
     _SYMB_64 = 323,
     _SYMB_65 = 324,
     _SYMB_66 = 325,
     _SYMB_67 = 326,
     _SYMB_68 = 327,
     _SYMB_69 = 328,
     _SYMB_70 = 329,
     _SYMB_71 = 330,
     _SYMB_72 = 331,
     _SYMB_73 = 332,
     _SYMB_74 = 333,
     _SYMB_75 = 334,
     _SYMB_76 = 335,
     _SYMB_77 = 336,
     _SYMB_78 = 337,
     _SYMB_79 = 338,
     _SYMB_80 = 339,
     _SYMB_81 = 340,
     _SYMB_82 = 341,
     _SYMB_83 = 342,
     _SYMB_84 = 343,
     _SYMB_85 = 344,
     _SYMB_86 = 345,
     _SYMB_87 = 346,
     _SYMB_88 = 347,
     _SYMB_89 = 348,
     _SYMB_90 = 349,
     _SYMB_91 = 350,
     _SYMB_92 = 351,
     _SYMB_93 = 352,
     _SYMB_94 = 353,
     _SYMB_95 = 354,
     _SYMB_96 = 355,
     _SYMB_97 = 356,
     _STRING_ = 357,
     _CHAR_ = 358,
     _INTEGER_ = 359,
     _DOUBLE_ = 360,
     _IDENT_ = 361
   };
#endif
/* Tokens.  */
#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define _SYMB_17 276
#define _SYMB_18 277
#define _SYMB_19 278
#define _SYMB_20 279
#define _SYMB_21 280
#define _SYMB_22 281
#define _SYMB_23 282
#define _SYMB_24 283
#define _SYMB_25 284
#define _SYMB_26 285
#define _SYMB_27 286
#define _SYMB_28 287
#define _SYMB_29 288
#define _SYMB_30 289
#define _SYMB_31 290
#define _SYMB_32 291
#define _SYMB_33 292
#define _SYMB_34 293
#define _SYMB_35 294
#define _SYMB_36 295
#define _SYMB_37 296
#define _SYMB_38 297
#define _SYMB_39 298
#define _SYMB_40 299
#define _SYMB_41 300
#define _SYMB_42 301
#define _SYMB_43 302
#define _SYMB_44 303
#define _SYMB_45 304
#define _SYMB_46 305
#define _SYMB_47 306
#define _SYMB_48 307
#define _SYMB_49 308
#define _SYMB_50 309
#define _SYMB_51 310
#define _SYMB_52 311
#define _SYMB_53 312
#define _SYMB_54 313
#define _SYMB_55 314
#define _SYMB_56 315
#define _SYMB_57 316
#define _SYMB_58 317
#define _SYMB_59 318
#define _SYMB_60 319
#define _SYMB_61 320
#define _SYMB_62 321
#define _SYMB_63 322
#define _SYMB_64 323
#define _SYMB_65 324
#define _SYMB_66 325
#define _SYMB_67 326
#define _SYMB_68 327
#define _SYMB_69 328
#define _SYMB_70 329
#define _SYMB_71 330
#define _SYMB_72 331
#define _SYMB_73 332
#define _SYMB_74 333
#define _SYMB_75 334
#define _SYMB_76 335
#define _SYMB_77 336
#define _SYMB_78 337
#define _SYMB_79 338
#define _SYMB_80 339
#define _SYMB_81 340
#define _SYMB_82 341
#define _SYMB_83 342
#define _SYMB_84 343
#define _SYMB_85 344
#define _SYMB_86 345
#define _SYMB_87 346
#define _SYMB_88 347
#define _SYMB_89 348
#define _SYMB_90 349
#define _SYMB_91 350
#define _SYMB_92 351
#define _SYMB_93 352
#define _SYMB_94 353
#define _SYMB_95 354
#define _SYMB_96 355
#define _SYMB_97 356
#define _STRING_ 357
#define _CHAR_ 358
#define _INTEGER_ 359
#define _DOUBLE_ 360
#define _IDENT_ 361




/* Copy the first part of user declarations.  */
#line 2 "Doge.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Absyn.h"
#define initialize_lexer Doge_initialize_lexer
extern int yyparse(void);
extern int yylex(void);
int yy_mylinenumber;
extern int initialize_lexer(FILE * inp);
void yyerror(const char *str)
{
  extern char *Dogetext;
  fprintf(stderr,"error: line %d: %s at %s\n",
    yy_mylinenumber + 1, str, Dogetext);
}

External_declaration YY_RESULT_External_declaration_ = 0;
External_declaration pExternal_declaration(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_External_declaration_;
  }
}

Extends YY_RESULT_Extends_ = 0;
Extends pExtends(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Extends_;
  }
}

Jump_stm YY_RESULT_Jump_stm_ = 0;
Jump_stm pJump_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Jump_stm_;
  }
}

Type_specifier YY_RESULT_Type_specifier_ = 0;
Type_specifier pType_specifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_specifier_;
  }
}

Storage_class_specifier YY_RESULT_Storage_class_specifier_ = 0;
Storage_class_specifier pStorage_class_specifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Storage_class_specifier_;
  }
}

Type_qualifier YY_RESULT_Type_qualifier_ = 0;
Type_qualifier pType_qualifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_qualifier_;
  }
}

Unary_operator YY_RESULT_Unary_operator_ = 0;
Unary_operator pUnary_operator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Unary_operator_;
  }
}

Assignment_op YY_RESULT_Assignment_op_ = 0;
Assignment_op pAssignment_op(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Assignment_op_;
  }
}

Init_declarator YY_RESULT_Init_declarator_ = 0;
Init_declarator pInit_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Init_declarator_;
  }
}

Enumerator YY_RESULT_Enumerator_ = 0;
Enumerator pEnumerator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Enumerator_;
  }
}

Exp YY_RESULT_Exp_ = 0;
Exp pExp(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Declaration_specifier YY_RESULT_Declaration_specifier_ = 0;
Declaration_specifier pDeclaration_specifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declaration_specifier_;
  }
}

Program YY_RESULT_Program_ = 0;
Program pProgram(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

ListExternal_declaration YY_RESULT_ListExternal_declaration_ = 0;
ListExternal_declaration pListExternal_declaration(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExternal_declaration_;
  }
}

Function_def YY_RESULT_Function_def_ = 0;
Function_def pFunction_def(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Function_def_;
  }
}

Dec YY_RESULT_Dec_ = 0;
Dec pDec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Dec_;
  }
}

ListDec YY_RESULT_ListDec_ = 0;
ListDec pListDec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDec_;
  }
}

ListDeclaration_specifier YY_RESULT_ListDeclaration_specifier_ = 0;
ListDeclaration_specifier pListDeclaration_specifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDeclaration_specifier_;
  }
}

ListInit_declarator YY_RESULT_ListInit_declarator_ = 0;
ListInit_declarator pListInit_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListInit_declarator_;
  }
}

Struct_or_union_spec YY_RESULT_Struct_or_union_spec_ = 0;
Struct_or_union_spec pStruct_or_union_spec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Struct_or_union_spec_;
  }
}

Struct_or_union YY_RESULT_Struct_or_union_ = 0;
Struct_or_union pStruct_or_union(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Struct_or_union_;
  }
}

ListStruct_dec YY_RESULT_ListStruct_dec_ = 0;
ListStruct_dec pListStruct_dec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStruct_dec_;
  }
}

Struct_dec YY_RESULT_Struct_dec_ = 0;
Struct_dec pStruct_dec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Struct_dec_;
  }
}

ListSpec_qual YY_RESULT_ListSpec_qual_ = 0;
ListSpec_qual pListSpec_qual(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListSpec_qual_;
  }
}

Spec_qual YY_RESULT_Spec_qual_ = 0;
Spec_qual pSpec_qual(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Spec_qual_;
  }
}

ListStruct_declarator YY_RESULT_ListStruct_declarator_ = 0;
ListStruct_declarator pListStruct_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStruct_declarator_;
  }
}

Struct_declarator YY_RESULT_Struct_declarator_ = 0;
Struct_declarator pStruct_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Struct_declarator_;
  }
}

Enum_specifier YY_RESULT_Enum_specifier_ = 0;
Enum_specifier pEnum_specifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Enum_specifier_;
  }
}

ListEnumerator YY_RESULT_ListEnumerator_ = 0;
ListEnumerator pListEnumerator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListEnumerator_;
  }
}

Declarator YY_RESULT_Declarator_ = 0;
Declarator pDeclarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declarator_;
  }
}

Direct_declarator YY_RESULT_Direct_declarator_ = 0;
Direct_declarator pDirect_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Direct_declarator_;
  }
}

Pointer YY_RESULT_Pointer_ = 0;
Pointer pPointer(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Pointer_;
  }
}

ListType_qualifier YY_RESULT_ListType_qualifier_ = 0;
ListType_qualifier pListType_qualifier(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_qualifier_;
  }
}

Parameter_type YY_RESULT_Parameter_type_ = 0;
Parameter_type pParameter_type(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Parameter_type_;
  }
}

Parameter_declarations YY_RESULT_Parameter_declarations_ = 0;
Parameter_declarations pParameter_declarations(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Parameter_declarations_;
  }
}

Parameter_declaration YY_RESULT_Parameter_declaration_ = 0;
Parameter_declaration pParameter_declaration(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Parameter_declaration_;
  }
}

ListIdent YY_RESULT_ListIdent_ = 0;
ListIdent pListIdent(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListIdent_;
  }
}

Initializer YY_RESULT_Initializer_ = 0;
Initializer pInitializer(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Initializer_;
  }
}

Initializers YY_RESULT_Initializers_ = 0;
Initializers pInitializers(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Initializers_;
  }
}

Type_name YY_RESULT_Type_name_ = 0;
Type_name pType_name(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_name_;
  }
}

Abstract_declarator YY_RESULT_Abstract_declarator_ = 0;
Abstract_declarator pAbstract_declarator(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Abstract_declarator_;
  }
}

Dir_abs_dec YY_RESULT_Dir_abs_dec_ = 0;
Dir_abs_dec pDir_abs_dec(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Dir_abs_dec_;
  }
}

Stm YY_RESULT_Stm_ = 0;
Stm pStm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stm_;
  }
}

Labeled_stm YY_RESULT_Labeled_stm_ = 0;
Labeled_stm pLabeled_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Labeled_stm_;
  }
}

Compound_stm YY_RESULT_Compound_stm_ = 0;
Compound_stm pCompound_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Compound_stm_;
  }
}

Expression_stm YY_RESULT_Expression_stm_ = 0;
Expression_stm pExpression_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expression_stm_;
  }
}

Selection_stm YY_RESULT_Selection_stm_ = 0;
Selection_stm pSelection_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Selection_stm_;
  }
}

Iter_stm YY_RESULT_Iter_stm_ = 0;
Iter_stm pIter_stm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Iter_stm_;
  }
}

ListStm YY_RESULT_ListStm_ = 0;
ListStm pListStm(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStm_;
  }
}

Constant YY_RESULT_Constant_ = 0;
Constant pConstant(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Constant_;
  }
}

Constant_expression YY_RESULT_Constant_expression_ = 0;
Constant_expression pConstant_expression(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Constant_expression_;
  }
}

ListExp YY_RESULT_ListExp_ = 0;
ListExp pListExp(FILE *inp)
{
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}


ListExternal_declaration reverseListExternal_declaration(ListExternal_declaration l)
{
  ListExternal_declaration prev = 0;
  ListExternal_declaration tmp = 0;
  while (l)
  {
    tmp = l->listexternal_declaration_;
    l->listexternal_declaration_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListDec reverseListDec(ListDec l)
{
  ListDec prev = 0;
  ListDec tmp = 0;
  while (l)
  {
    tmp = l->listdec_;
    l->listdec_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListDeclaration_specifier reverseListDeclaration_specifier(ListDeclaration_specifier l)
{
  ListDeclaration_specifier prev = 0;
  ListDeclaration_specifier tmp = 0;
  while (l)
  {
    tmp = l->listdeclaration_specifier_;
    l->listdeclaration_specifier_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListInit_declarator reverseListInit_declarator(ListInit_declarator l)
{
  ListInit_declarator prev = 0;
  ListInit_declarator tmp = 0;
  while (l)
  {
    tmp = l->listinit_declarator_;
    l->listinit_declarator_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStruct_dec reverseListStruct_dec(ListStruct_dec l)
{
  ListStruct_dec prev = 0;
  ListStruct_dec tmp = 0;
  while (l)
  {
    tmp = l->liststruct_dec_;
    l->liststruct_dec_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListSpec_qual reverseListSpec_qual(ListSpec_qual l)
{
  ListSpec_qual prev = 0;
  ListSpec_qual tmp = 0;
  while (l)
  {
    tmp = l->listspec_qual_;
    l->listspec_qual_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStruct_declarator reverseListStruct_declarator(ListStruct_declarator l)
{
  ListStruct_declarator prev = 0;
  ListStruct_declarator tmp = 0;
  while (l)
  {
    tmp = l->liststruct_declarator_;
    l->liststruct_declarator_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListEnumerator reverseListEnumerator(ListEnumerator l)
{
  ListEnumerator prev = 0;
  ListEnumerator tmp = 0;
  while (l)
  {
    tmp = l->listenumerator_;
    l->listenumerator_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListType_qualifier reverseListType_qualifier(ListType_qualifier l)
{
  ListType_qualifier prev = 0;
  ListType_qualifier tmp = 0;
  while (l)
  {
    tmp = l->listtype_qualifier_;
    l->listtype_qualifier_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListIdent reverseListIdent(ListIdent l)
{
  ListIdent prev = 0;
  ListIdent tmp = 0;
  while (l)
  {
    tmp = l->listident_;
    l->listident_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStm reverseListStm(ListStm l)
{
  ListStm prev = 0;
  ListStm tmp = 0;
  while (l)
  {
    tmp = l->liststm_;
    l->liststm_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExp reverseListExp(ListExp l)
{
  ListExp prev = 0;
  ListExp tmp = 0;
  while (l)
  {
    tmp = l->listexp_;
    l->listexp_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 908 "Doge.y"
{
  int int_;
  char char_;
  double double_;
  char* string_;
  External_declaration external_declaration_;
  Extends extends_;
  Jump_stm jump_stm_;
  Type_specifier type_specifier_;
  Storage_class_specifier storage_class_specifier_;
  Type_qualifier type_qualifier_;
  Unary_operator unary_operator_;
  Assignment_op assignment_op_;
  Init_declarator init_declarator_;
  Enumerator enumerator_;
  Exp exp_;
  Declaration_specifier declaration_specifier_;
  Program program_;
  ListExternal_declaration listexternal_declaration_;
  Function_def function_def_;
  Dec dec_;
  ListDec listdec_;
  ListDeclaration_specifier listdeclaration_specifier_;
  ListInit_declarator listinit_declarator_;
  Struct_or_union_spec struct_or_union_spec_;
  Struct_or_union struct_or_union_;
  ListStruct_dec liststruct_dec_;
  Struct_dec struct_dec_;
  ListSpec_qual listspec_qual_;
  Spec_qual spec_qual_;
  ListStruct_declarator liststruct_declarator_;
  Struct_declarator struct_declarator_;
  Enum_specifier enum_specifier_;
  ListEnumerator listenumerator_;
  Declarator declarator_;
  Direct_declarator direct_declarator_;
  Pointer pointer_;
  ListType_qualifier listtype_qualifier_;
  Parameter_type parameter_type_;
  Parameter_declarations parameter_declarations_;
  Parameter_declaration parameter_declaration_;
  ListIdent listident_;
  Initializer initializer_;
  Initializers initializers_;
  Type_name type_name_;
  Abstract_declarator abstract_declarator_;
  Dir_abs_dec dir_abs_dec_;
  Stm stm_;
  Labeled_stm labeled_stm_;
  Compound_stm compound_stm_;
  Expression_stm expression_stm_;
  Selection_stm selection_stm_;
  Iter_stm iter_stm_;
  ListStm liststm_;
  Constant constant_;
  Constant_expression constant_expression_;
  ListExp listexp_;

}
/* Line 193 of yacc.c.  */
#line 1281 "Parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1294 "Parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1912

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  385

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    14,    16,    18,    21,    22,    25,
      29,    33,    36,    39,    41,    43,    45,    47,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    67,    69,    71,
      73,    75,    77,    79,    81,    83,    85,    87,    89,    91,
      93,    95,    97,    99,   101,   103,   105,   107,   109,   111,
     115,   117,   121,   123,   128,   132,   134,   139,   143,   145,
     147,   149,   151,   153,   156,   161,   165,   169,   172,   175,
     179,   181,   184,   186,   189,   191,   195,   201,   206,   209,
     211,   213,   215,   218,   222,   224,   227,   229,   231,   233,
     237,   239,   242,   246,   251,   257,   260,   262,   266,   269,
     271,   273,   277,   282,   286,   291,   296,   300,   302,   305,
     308,   312,   314,   317,   319,   323,   325,   329,   331,   334,
     337,   339,   343,   345,   349,   354,   356,   360,   362,   365,
     367,   369,   372,   376,   379,   383,   387,   392,   395,   399,
     403,   408,   410,   412,   414,   416,   418,   420,   424,   429,
     433,   436,   440,   444,   449,   451,   454,   460,   468,   474,
     480,   488,   495,   503,   505,   508,   512,   514,   520,   522,
     526,   528,   532,   534,   538,   540,   544,   546,   550,   552,
     556,   560,   562,   566,   570,   574,   578,   580,   584,   588,
     590,   594,   598,   600,   604,   608,   612,   614,   619,   621,
     624,   627,   630,   633,   638,   640,   645,   649,   654,   658,
     662,   665,   668,   670,   672,   674,   676,   680,   682,   684,
     686,   688,   690,   692,   694,   696,   698,   700,   702,   704,
     706,   708,   710,   712,   714,   716,   718
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,    67,   106,   109,     4,   121,     5,    -1,
      60,   106,     6,    -1,   122,    -1,   123,    -1,    84,   106,
      -1,    -1,    87,     6,    -1,    87,   157,     6,    -1,    72,
     106,     6,    -1,    64,     6,    -1,    62,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,   127,    -1,   135,
      -1,    59,    -1,    16,    -1,    70,    -1,    79,    -1,    61,
      -1,    77,    -1,    17,    -1,    85,    -1,    76,    -1,    31,
      -1,    24,    -1,    40,    -1,    41,    -1,    48,    -1,    74,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,   137,    74,   145,    -1,   137,    -1,   106,    74,   174,
      -1,   106,    -1,   170,   115,    75,   106,    -1,   170,   115,
     118,    -1,   158,    -1,    81,   106,   139,   106,    -1,    81,
     106,   106,    -1,   111,    -1,   112,    -1,   113,    -1,   121,
      -1,   108,    -1,   108,   121,    -1,   125,   137,   124,   152,
      -1,   125,   137,   152,    -1,   137,   124,   152,    -1,   137,
     152,    -1,   125,     6,    -1,   125,   126,     6,    -1,   123,
      -1,   123,   124,    -1,   119,    -1,   119,   125,    -1,   116,
      -1,   116,    18,   126,    -1,   128,   106,     4,   129,     5,
      -1,   128,     4,   129,     5,    -1,   128,   106,    -1,    80,
      -1,    83,    -1,   130,    -1,   130,   129,    -1,   131,   133,
       6,    -1,   132,    -1,   132,   131,    -1,   111,    -1,   113,
      -1,   134,    -1,   134,    18,   133,    -1,   137,    -1,    19,
     174,    -1,   137,    19,   174,    -1,    69,     4,   136,     5,
      -1,    69,   106,     4,   136,     5,    -1,    69,   106,    -1,
     117,    -1,   117,    18,   136,    -1,   139,   138,    -1,   138,
      -1,   106,    -1,    20,   137,    21,    -1,   138,    22,   174,
      23,    -1,   138,    22,    23,    -1,   138,    20,   141,    21,
      -1,   138,    20,   144,    21,    -1,   138,    20,    21,    -1,
      24,    -1,    24,   140,    -1,    24,   139,    -1,    24,   140,
     139,    -1,   113,    -1,   113,   140,    -1,   142,    -1,   142,
      18,    25,    -1,   143,    -1,   142,    18,   143,    -1,   125,
      -1,   125,   137,    -1,   125,   148,    -1,   106,    -1,   106,
      18,   144,    -1,   118,    -1,     4,   146,     5,    -1,     4,
     146,    18,     5,    -1,   145,    -1,   146,    18,   145,    -1,
     131,    -1,   131,   148,    -1,   139,    -1,   149,    -1,   139,
     149,    -1,    20,   148,    21,    -1,    22,    23,    -1,    22,
     174,    23,    -1,   149,    22,    23,    -1,   149,    22,   174,
      23,    -1,    20,    21,    -1,    20,   141,    21,    -1,   149,
      20,    21,    -1,   149,    20,   141,    21,    -1,   151,    -1,
     152,    -1,   153,    -1,   154,    -1,   155,    -1,   110,    -1,
     106,    19,   150,    -1,    63,   174,    19,   150,    -1,    65,
      19,   150,    -1,     4,     5,    -1,     4,   156,     5,    -1,
       4,   124,     5,    -1,     4,   124,   156,     5,    -1,     6,
      -1,   157,     6,    -1,    73,    20,   157,    21,   150,    -1,
      73,    20,   157,    21,   150,    68,   150,    -1,    82,    20,
     157,    21,   150,    -1,    86,    20,   157,    21,   150,    -1,
      66,   150,    86,    20,   157,    21,     6,    -1,    71,    20,
     153,   153,    21,   150,    -1,    71,    20,   153,   153,   157,
      21,   150,    -1,   150,    -1,   150,   156,    -1,   157,    18,
     118,    -1,   118,    -1,   159,    26,   157,    19,   158,    -1,
     159,    -1,   159,    27,   160,    -1,   160,    -1,   160,    28,
     161,    -1,   161,    -1,   161,    29,   162,    -1,   162,    -1,
     162,    30,   163,    -1,   163,    -1,   163,    31,   164,    -1,
     164,    -1,   164,    32,   165,    -1,   164,    33,   165,    -1,
     165,    -1,   165,    34,   166,    -1,   165,    35,   166,    -1,
     165,    36,   166,    -1,   165,    37,   166,    -1,   166,    -1,
     166,    38,   167,    -1,   166,    39,   167,    -1,   167,    -1,
     167,    40,   168,    -1,   167,    41,   168,    -1,   168,    -1,
     168,    24,   169,    -1,   168,    42,   169,    -1,   168,    43,
     169,    -1,   169,    -1,    20,   147,    21,   169,    -1,   170,
      -1,    44,   170,    -1,    45,   170,    -1,   114,   169,    -1,
      78,   170,    -1,    78,    20,   147,    21,    -1,   171,    -1,
     171,    22,   157,    23,    -1,   171,    20,    21,    -1,   171,
      20,   175,    21,    -1,   171,    46,   106,    -1,   171,    47,
     106,    -1,   171,    44,    -1,   171,    45,    -1,   172,    -1,
     106,    -1,   173,    -1,   102,    -1,    20,   157,    21,    -1,
     105,    -1,   103,    -1,    88,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,    -1,
     101,    -1,   104,    -1,   158,    -1,   118,    -1,   118,    18,
     175,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1145,  1145,  1146,  1147,  1148,  1150,  1151,  1153,  1154,
    1155,  1156,  1157,  1159,  1160,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1172,  1173,  1174,  1175,  1176,
    1178,  1179,  1181,  1182,  1183,  1184,  1185,  1186,  1188,  1189,
    1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1200,
    1201,  1203,  1204,  1206,  1207,  1208,  1210,  1211,  1212,  1213,
    1214,  1216,  1218,  1219,  1221,  1222,  1223,  1224,  1226,  1227,
    1229,  1230,  1232,  1233,  1235,  1236,  1238,  1239,  1240,  1242,
    1243,  1245,  1246,  1248,  1250,  1251,  1253,  1254,  1256,  1257,
    1259,  1260,  1261,  1263,  1264,  1265,  1267,  1268,  1270,  1271,
    1273,  1274,  1275,  1276,  1277,  1278,  1279,  1281,  1282,  1283,
    1284,  1286,  1287,  1289,  1290,  1292,  1293,  1295,  1296,  1297,
    1299,  1300,  1302,  1303,  1304,  1306,  1307,  1309,  1310,  1312,
    1313,  1314,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1326,  1327,  1328,  1329,  1330,  1331,  1333,  1334,  1335,
    1337,  1338,  1339,  1340,  1342,  1343,  1345,  1346,  1347,  1349,
    1350,  1351,  1352,  1354,  1355,  1357,  1358,  1360,  1361,  1363,
    1364,  1366,  1367,  1369,  1370,  1372,  1373,  1375,  1376,  1378,
    1379,  1380,  1382,  1383,  1384,  1385,  1386,  1388,  1389,  1390,
    1392,  1393,  1394,  1396,  1397,  1398,  1399,  1401,  1402,  1404,
    1405,  1406,  1407,  1408,  1409,  1411,  1412,  1413,  1414,  1415,
    1416,  1417,  1418,  1420,  1421,  1422,  1423,  1425,  1426,  1427,
    1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1438,  1439,  1440,  1441,  1443,  1445,  1446
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_SYMB_0", "_SYMB_1",
  "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6", "_SYMB_7",
  "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12", "_SYMB_13",
  "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18", "_SYMB_19",
  "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24", "_SYMB_25",
  "_SYMB_26", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30", "_SYMB_31",
  "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36", "_SYMB_37",
  "_SYMB_38", "_SYMB_39", "_SYMB_40", "_SYMB_41", "_SYMB_42", "_SYMB_43",
  "_SYMB_44", "_SYMB_45", "_SYMB_46", "_SYMB_47", "_SYMB_48", "_SYMB_49",
  "_SYMB_50", "_SYMB_51", "_SYMB_52", "_SYMB_53", "_SYMB_54", "_SYMB_55",
  "_SYMB_56", "_SYMB_57", "_SYMB_58", "_SYMB_59", "_SYMB_60", "_SYMB_61",
  "_SYMB_62", "_SYMB_63", "_SYMB_64", "_SYMB_65", "_SYMB_66", "_SYMB_67",
  "_SYMB_68", "_SYMB_69", "_SYMB_70", "_SYMB_71", "_SYMB_72", "_SYMB_73",
  "_SYMB_74", "_SYMB_75", "_SYMB_76", "_SYMB_77", "_SYMB_78", "_SYMB_79",
  "_SYMB_80", "_SYMB_81", "_SYMB_82", "_SYMB_83", "_SYMB_84", "_SYMB_85",
  "_SYMB_86", "_SYMB_87", "_SYMB_88", "_SYMB_89", "_SYMB_90", "_SYMB_91",
  "_SYMB_92", "_SYMB_93", "_SYMB_94", "_SYMB_95", "_SYMB_96", "_SYMB_97",
  "_STRING_", "_CHAR_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "External_declaration", "Extends", "Jump_stm", "Type_specifier",
  "Storage_class_specifier", "Type_qualifier", "Unary_operator",
  "Assignment_op", "Init_declarator", "Enumerator", "Exp2",
  "Declaration_specifier", "Program", "ListExternal_declaration",
  "Function_def", "Dec", "ListDec", "ListDeclaration_specifier",
  "ListInit_declarator", "Struct_or_union_spec", "Struct_or_union",
  "ListStruct_dec", "Struct_dec", "ListSpec_qual", "Spec_qual",
  "ListStruct_declarator", "Struct_declarator", "Enum_specifier",
  "ListEnumerator", "Declarator", "Direct_declarator", "Pointer",
  "ListType_qualifier", "Parameter_type", "Parameter_declarations",
  "Parameter_declaration", "ListIdent", "Initializer", "Initializers",
  "Type_name", "Abstract_declarator", "Dir_abs_dec", "Stm", "Labeled_stm",
  "Compound_stm", "Expression_stm", "Selection_stm", "Iter_stm", "ListStm",
  "Exp", "Exp3", "Exp4", "Exp5", "Exp6", "Exp7", "Exp8", "Exp9", "Exp10",
  "Exp11", "Exp12", "Exp13", "Exp14", "Exp15", "Exp16", "Exp17",
  "Constant", "Constant_expression", "ListExp2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   119,   119,   119,   119,
     119,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   129,   129,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   164,   165,   165,   165,   165,   165,   166,   166,   166,
     167,   167,   167,   168,   168,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   170,   171,   171,   171,   171,   171,
     171,   171,   171,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   175,   175
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     1,     1,     2,     0,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     4,     3,     1,     4,     3,     1,     1,
       1,     1,     1,     2,     4,     3,     3,     2,     2,     3,
       1,     2,     1,     2,     1,     3,     5,     4,     2,     1,
       1,     1,     2,     3,     1,     2,     1,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     2,     1,
       1,     3,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     1,     2,     2,
       1,     3,     1,     3,     4,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     4,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     1,     2,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     2,
       2,     2,     2,     4,     1,     4,     3,     4,     3,     3,
       2,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      25,    30,     0,   107,    24,     0,    28,     0,     0,    26,
      29,    27,    79,     0,    80,    31,   100,    62,    58,    59,
      60,    72,     0,    61,     4,     5,     0,    22,     0,    23,
       0,    99,     0,     0,   111,   109,   108,     0,     7,     0,
      95,     0,    63,    73,     1,    68,    74,     0,    50,     0,
      78,     0,    70,     0,     0,    67,     0,     0,    98,   101,
     112,   110,     3,     0,     0,    52,    96,     0,     0,    57,
       0,     0,    69,     0,     0,    65,    86,    87,     0,    81,
       0,    84,     0,   150,   154,     0,    34,    33,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     215,   218,   233,   217,   213,   146,     0,   166,     0,   163,
     141,   142,   143,   144,   145,     0,     0,    55,   168,   170,
     172,   174,   176,   178,   181,   186,   189,   192,   196,   198,
     204,   212,   214,    71,    66,    50,   106,   120,   117,     0,
     113,   115,     0,   103,   213,   234,   198,     0,     6,     0,
       0,     0,    93,     0,    56,    75,     0,   122,    49,    64,
      77,    82,     0,     0,    88,    90,    85,     0,   127,     0,
       0,     0,   199,   200,    12,     0,    11,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     8,     0,     0,   201,
     152,     0,   164,   151,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    38,     0,     0,     0,   210,
     211,     0,     0,     0,     0,     0,   118,   129,   119,   130,
     104,     0,   105,   102,     0,    51,    97,    94,   125,     0,
      91,    83,     0,     0,    76,     0,   129,   128,     0,   216,
       0,   149,     0,     0,    10,     0,     0,     0,     0,     9,
     147,   153,   165,     0,   169,   171,   173,   175,   177,   179,
     180,   182,   183,   184,   185,   187,   188,   190,   191,   193,
     194,   195,     0,    54,   206,   235,     0,     0,   208,   209,
     121,   137,     0,     0,   133,     0,   131,     0,     0,   114,
     116,     2,   123,     0,    89,    92,   197,   148,     0,     0,
       0,   203,     0,     0,     0,    53,     0,   207,   205,   138,
     132,   134,   139,     0,   135,     0,   124,   126,     0,     0,
       0,   156,   158,   159,   167,   236,   140,   136,     0,   161,
       0,     0,   160,   162,   157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    74,   135,    28,    29,    30,   136,   256,    56,
      76,   137,    31,    32,    33,    34,    62,    63,   168,    57,
      37,    38,    88,    89,    90,    91,   193,   194,    39,    77,
      40,    41,    42,    46,   332,   170,   171,   172,   188,   279,
     199,   333,   269,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   177,   326
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
     740,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,    32,    23,  -202,   -78,  -202,   -56,    12,  -202,
    -202,  -202,  -202,   -35,  -202,  -202,  -202,   740,  -202,  -202,
    -202,  1827,    94,  -202,  -202,  -202,     5,  -202,    14,  -202,
    1714,    83,    -7,    95,    43,  -202,   106,   117,    50,    48,
     155,    11,  -202,  -202,  -202,  -202,   173,   213,  1697,  1082,
     193,   289,  1827,   227,     5,  -202,  1067,  1090,    83,  -202,
    -202,  -202,  -202,   126,   229,   177,   230,   247,    48,  -202,
     150,    32,  -202,   637,   227,  -202,  -202,  -202,   248,  1082,
       0,  1082,  1082,  -202,  -202,   939,  -202,  -202,  -202,  -202,
    1468,  1468,  -202,   251,  1555,   252,   240,   495,   241,   154,
     243,  -202,  1594,   244,   245,   738,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,   249,  -202,  1555,  -202,   392,   495,
    -202,  -202,  -202,  -202,  -202,   264,    59,  -202,    56,   242,
     250,   246,   253,   115,   105,   147,   174,    46,  -202,   188,
      99,  -202,  -202,  -202,  -202,   207,  -202,   265,    31,   261,
     267,  -202,   268,  -202,  -202,  -202,  -202,   263,  -202,   740,
    1555,    48,  -202,   285,  -202,  -202,   637,  -202,  -202,  -202,
    -202,  -202,  1555,   301,   273,   291,  -202,   303,   109,   290,
       9,  1555,  -202,  -202,  -202,   293,  -202,   495,   228,   839,
     309,  1555,   939,  -202,  1555,  1555,  -202,    62,   495,  -202,
    -202,   311,  -202,  -202,  -202,  1555,  1555,  1555,  1555,  1555,
    1555,  1555,  1555,  1555,  1555,  1555,  1555,  1555,  1555,  1555,
    1555,  1555,  1555,  1555,  1555,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  1177,  1216,  1555,  -202,
    -202,   211,   212,   215,  1039,  1303,  -202,    -8,  -202,   102,
    -202,   841,  -202,  -202,   314,  -202,  -202,  -202,  -202,    54,
    -202,  -202,     0,  1555,  -202,  1731,   198,  -202,  1555,  -202,
     495,  -202,   302,   839,  -202,   184,   304,   185,   190,  -202,
    -202,  -202,  -202,   204,   242,   250,   246,   253,   115,   105,
     105,   147,   147,   147,   147,   174,   174,    46,    46,  -202,
    -202,  -202,   217,  -202,  -202,   306,   307,    78,  -202,  -202,
    -202,  -202,   310,   315,  -202,   312,   102,  1810,  1342,  -202,
    -202,  -202,  -202,   598,  -202,  -202,  -202,  -202,  1555,  1429,
     495,  -202,   495,   495,  1555,  -202,  1555,  -202,  -202,  -202,
    -202,  -202,  -202,   317,  -202,   316,  -202,  -202,   191,   495,
     192,   272,  -202,  -202,  -202,  -202,  -202,  -202,   326,  -202,
     495,   495,  -202,  -202,  -202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,  -202,  -202,   -28,  -202,    -5,  -202,  -202,  -202,
    -202,   -76,  -202,  -202,    16,  -202,    15,    74,    17,   260,
    -202,  -202,     3,  -202,   -85,  -202,    60,  -202,  -202,   -69,
      10,   -37,   -10,   299,   -64,  -202,    73,    82,  -160,  -202,
     134,  -136,  -201,  -103,  -202,    18,  -186,  -202,  -202,    86,
     -22,   -66,  -202,   120,   121,   127,   133,   142,    -6,   -84,
      -4,   -12,   -87,   -67,  -202,  -202,  -202,   -83,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     176,   175,   169,    45,   208,    68,   196,   187,    44,   183,
     198,    55,   264,    12,   265,    35,    49,    36,    59,   192,
      12,   205,    43,   293,    13,    12,   278,   225,    47,    13,
     289,    86,   268,   202,   203,    13,    71,   176,   175,    44,
      11,    80,    35,    52,    36,   213,    58,    13,    53,   219,
      48,   264,    12,   265,    87,    13,    13,    64,    65,   342,
      11,    86,   287,    86,    86,   224,   336,    86,   299,   176,
     242,    51,   343,   200,   165,    64,    85,   225,    64,    64,
     225,   164,   226,   227,    87,   336,    87,    87,   243,   244,
      87,   165,   191,   217,    54,   197,   225,   275,    26,    26,
     195,   358,   189,    66,   291,    67,    26,   349,    25,   280,
     187,    26,   276,   176,   175,   300,    69,    79,    50,   257,
      60,   258,   337,    72,   338,   176,   175,   198,    25,   285,
      13,   265,    84,    13,    73,   138,   163,    26,    26,   234,
     235,   236,   237,   259,   260,   261,   262,   232,   233,   302,
     311,   312,   313,   314,    75,   319,   320,   321,   267,    78,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   266,   200,
     323,   325,   335,   367,    86,   238,   239,   347,   286,   295,
     200,    81,   297,   298,    35,   274,    36,    92,   176,   175,
     345,   346,   225,   225,   303,   350,   352,    87,   225,   225,
     225,   353,   378,   380,   240,   241,   176,   175,   285,    82,
     265,   176,   225,   354,   221,   222,   309,   310,   317,   318,
      68,    61,   178,   179,   315,   316,   327,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   371,   181,   372,
     373,   180,   182,   190,   267,   365,   184,   204,   206,   207,
     210,   209,   255,   211,   214,   215,   379,   187,   218,   223,
     228,   176,   175,   363,    43,   286,   230,   383,   384,   229,
     325,    83,   270,   263,   231,   271,   273,   176,   374,   272,
     277,   282,   195,    61,    93,    94,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   281,   284,    95,
     283,   288,   290,    96,   292,   294,   301,   328,   329,   341,
      97,   167,   348,   355,   356,   351,   368,   370,   357,    98,
      99,   359,   382,   100,   101,   361,   360,   102,   376,   377,
     381,   185,   344,    70,   340,   330,   296,   304,    14,   305,
      16,   103,   104,   105,   106,   107,   306,   375,    18,    19,
     108,   109,   110,   307,     0,   111,    20,   112,    21,    22,
      23,   113,    24,   308,    25,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    61,   220,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,     0,     0,   100,   101,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,   111,     0,
     112,     0,     0,     0,   113,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    61,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,     0,     0,   100,
     101,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,   111,     0,   112,     0,     0,     0,   113,     0,     0,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   186,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
       0,   186,   100,   101,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   111,     0,   112,    98,    99,     0,
       0,   100,   101,     0,     0,   102,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   174,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   174,   216,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    95,     0,
      12,     0,    96,     0,    13,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
       0,     0,   100,   101,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,     0,     0,     0,     0,     0,    17,     0,    18,
      19,     0,     0,     0,   111,     0,   112,    20,     0,    21,
      22,    23,     0,    24,     0,    25,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   174,    94,    26,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    95,
       0,     0,     0,    96,     0,     0,   339,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,     0,     0,   100,   101,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    16,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     0,     0,     0,   111,     0,   112,    20,     0,
      21,    22,    23,     0,    24,     0,    25,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   174,     1,     2,     3,     4,
       5,     6,     7,     8,     9,     0,    11,     0,     0,    95,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,     0,     0,   100,   101,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,    22,
       0,     0,    24,     0,    25,     0,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   174,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,   264,
     331,   265,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   166,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    14,    11,
      16,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      95,     0,     0,   173,    96,     0,    20,     0,    21,    22,
      23,    97,    24,     0,    25,     0,    14,     0,    16,     0,
      98,    99,     0,     0,   100,   101,    18,    19,   102,     0,
       0,    14,     0,     0,    20,    26,    21,    22,    23,     0,
      24,    18,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    24,   111,    25,   112,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   174,    95,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,     0,
       0,   100,   101,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,   324,     0,     0,
      96,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,   322,   111,     0,   112,    98,    99,     0,     0,
     100,   101,     0,     0,   102,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   174,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   174,    95,     0,     0,   334,    96,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,     0,     0,   100,   101,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,   364,    96,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,   111,
       0,   112,    98,    99,     0,     0,   100,   101,     0,     0,
     102,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   174,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   174,    95,
     369,     0,     0,    96,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,     0,     0,   100,   101,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,   111,     0,   112,    98,    99,
       0,     0,   100,   101,     0,     0,   102,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   174,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   174,    95,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,     0,     0,   100,
     101,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,   111,     0,   112,    98,    99,     0,     0,   100,   101,
       0,     0,   102,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   174,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     174,    61,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    61,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,   285,   331,   265,     0,    13,    14,     0,    16,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     0,     0,
       0,    83,     0,    14,    20,    16,    21,    22,    23,     0,
      24,     0,    25,    18,    19,     0,     0,     0,     0,     0,
      14,    20,    16,    21,    22,    23,     0,    24,     0,    25,
      18,    19,     0,     0,     0,     0,     0,     0,    20,     0,
      21,    22,    23,     0,    24,     0,    25,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   362,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    18,
      19,     0,     0,     0,     0,     0,    14,    20,    16,    21,
      22,    23,     0,    24,     0,    25,    18,    19,     0,     0,
       0,     0,     0,     0,    20,     0,    21,    22,    23,     0,
      24,     0,    25
};

static const yytype_int16 yycheck[] =
{
      67,    67,    66,    13,   107,    42,    91,    83,    13,    78,
      95,     6,    20,    20,    22,     0,     4,     0,     4,    19,
      20,   104,    12,   209,    24,    20,   186,    18,   106,    24,
      21,    59,   168,   100,   101,    24,    46,   104,   104,    44,
      17,    51,    27,    27,    27,   112,    36,    24,    31,   136,
     106,    20,    20,    22,    59,    24,    24,    40,    40,     5,
      17,    89,   198,    91,    92,     6,   267,    95,     6,   136,
      24,   106,    18,    95,    64,    58,    58,    18,    61,    62,
      18,    63,    26,    27,    89,   286,    91,    92,    42,    43,
      95,    81,    89,   115,     0,    92,    18,   180,   106,   106,
      90,    23,    84,    20,   207,    22,   106,   293,    85,   192,
     186,   106,   181,   180,   180,   218,    21,   106,   106,    20,
     106,    22,    20,     6,    22,   192,   192,   212,    85,    20,
      24,    22,    58,    24,    84,    61,    62,   106,   106,    34,
      35,    36,    37,    44,    45,    46,    47,    32,    33,   225,
     234,   235,   236,   237,   106,   242,   243,   244,   168,     4,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   168,   201,
     256,   257,   265,   343,   212,    38,    39,   290,   198,   211,
     212,    18,   214,   215,   179,   179,   179,     4,   265,   265,
     283,   288,    18,    18,   226,    21,    21,   212,    18,    18,
      18,    21,    21,    21,    40,    41,   283,   283,    20,     6,
      22,   288,    18,    19,   138,   139,   232,   233,   240,   241,
     267,     4,   106,     4,   238,   239,   258,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,   350,    18,   352,
     353,    74,     5,     5,   264,   338,   106,     6,     6,    19,
     106,    20,    74,    20,    20,    20,   369,   343,    19,     5,
      28,   338,   338,   337,   264,   285,    30,   380,   381,    29,
     356,    74,    21,    18,    31,    18,    23,   354,   354,    21,
       5,    18,   282,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     6,     5,    20,
      19,    21,    19,    24,    86,     6,     5,   106,   106,     5,
      31,   106,    20,   106,    18,    21,   348,   349,    21,    40,
      41,    21,     6,    44,    45,    23,    21,    48,    21,    23,
      68,    81,   282,    44,   271,   263,   212,   227,    59,   228,
      61,    62,    63,    64,    65,    66,   229,   356,    69,    70,
      71,    72,    73,   230,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,   231,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,     4,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,     6,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    20,    -1,
      20,    -1,    24,    -1,    24,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    76,    -1,    78,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    85,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     6,   106,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    20,
      -1,    -1,    -1,    24,    -1,    -1,    25,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    76,    -1,    78,    77,    -1,
      79,    80,    81,    -1,    83,    -1,    85,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    83,    -1,    85,    -1,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    59,    17,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      20,    -1,    -1,    23,    24,    -1,    77,    -1,    79,    80,
      81,    31,    83,    -1,    85,    -1,    59,    -1,    61,    -1,
      40,    41,    -1,    -1,    44,    45,    69,    70,    48,    -1,
      -1,    59,    -1,    -1,    77,   106,    79,    80,    81,    -1,
      83,    69,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    76,    85,    78,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      48,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    48,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    -1,    24,    59,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    74,    -1,    59,    77,    61,    79,    80,    81,    -1,
      83,    -1,    85,    69,    70,    -1,    -1,    -1,    -1,    -1,
      59,    77,    61,    79,    80,    81,    -1,    83,    -1,    85,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    80,    81,    -1,    83,    -1,    85,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    59,    77,    61,    79,
      80,    81,    -1,    83,    -1,    85,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    80,    81,    -1,
      83,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    20,    24,    59,    60,    61,    67,    69,    70,
      77,    79,    80,    81,    83,    85,   106,   108,   111,   112,
     113,   119,   120,   121,   122,   123,   125,   127,   128,   135,
     137,   138,   139,   137,   113,   139,   140,   106,   106,     4,
     106,   106,   121,   125,     0,     6,   116,   126,   137,     4,
     106,     4,   123,   124,   125,   152,    20,    22,   138,    21,
     140,   139,     6,    84,   109,   106,   117,   136,     4,   106,
     139,    18,     6,    74,   124,   152,   111,   113,   129,   130,
     131,   132,     4,     5,     6,    20,    24,    31,    40,    41,
      44,    45,    48,    62,    63,    64,    65,    66,    71,    72,
      73,    76,    78,    82,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   110,   114,   118,   124,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   124,   152,   137,    21,   106,   125,   141,
     142,   143,   144,    23,   106,   158,   170,   174,   106,     4,
      74,    18,     5,   136,   106,   126,     4,   118,   145,   152,
       5,   129,    19,   133,   134,   137,   131,   129,   131,   147,
     157,    20,   170,   170,     6,   174,     6,    19,   150,    20,
     106,    20,    20,   170,    20,    20,     6,   157,    19,   169,
       5,   156,   156,     5,     6,    18,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    24,    42,    43,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    74,   115,    20,    22,    44,
      45,    46,    47,    18,    20,    22,   137,   139,   148,   149,
      21,    18,    21,    23,   121,   174,   136,     5,   145,   146,
     174,     6,    18,    19,     5,    20,   139,   148,    21,    21,
      19,   150,    86,   153,     6,   157,   147,   157,   157,     6,
     150,     5,   118,   157,   160,   161,   162,   163,   164,   165,
     165,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   169,    75,   118,    21,   118,   175,   157,   106,   106,
     144,    21,   141,   148,    23,   174,   149,    20,    22,    25,
     143,     5,     5,    18,   133,   174,   169,   150,    20,   153,
      21,    21,    21,    21,    19,   106,    18,    21,    23,    21,
      21,    23,    21,   141,    23,   174,     5,   145,   157,    21,
     157,   150,   150,   150,   158,   175,    21,    23,    21,   150,
      21,    68,     6,   150,   150
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1145 "Doge.y"
    { (yyval.external_declaration_) = make_Class((yyvsp[(2) - (6)].string_), (yyvsp[(3) - (6)].extends_), (yyvsp[(5) - (6)].listexternal_declaration_));  ;}
    break;

  case 3:
#line 1146 "Doge.y"
    { (yyval.external_declaration_) = make_Namespace((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 4:
#line 1147 "Doge.y"
    { (yyval.external_declaration_) = make_Afunc((yyvsp[(1) - (1)].function_def_));  ;}
    break;

  case 5:
#line 1148 "Doge.y"
    { (yyval.external_declaration_) = make_Global((yyvsp[(1) - (1)].dec_));  ;}
    break;

  case 6:
#line 1150 "Doge.y"
    { (yyval.extends_) = make_Inheritance((yyvsp[(2) - (2)].string_));  ;}
    break;

  case 7:
#line 1151 "Doge.y"
    { (yyval.extends_) = make_NoInheritance();  ;}
    break;

  case 8:
#line 1153 "Doge.y"
    { (yyval.jump_stm_) = make_SjumpFour();  ;}
    break;

  case 9:
#line 1154 "Doge.y"
    { (yyval.jump_stm_) = make_SjumpFive((yyvsp[(2) - (3)].exp_));  ;}
    break;

  case 10:
#line 1155 "Doge.y"
    { (yyval.jump_stm_) = make_SjumpOne((yyvsp[(2) - (3)].string_));  ;}
    break;

  case 11:
#line 1156 "Doge.y"
    { (yyval.jump_stm_) = make_SjumpTwo();  ;}
    break;

  case 12:
#line 1157 "Doge.y"
    { (yyval.jump_stm_) = make_SjumpThree();  ;}
    break;

  case 13:
#line 1159 "Doge.y"
    { (yyval.type_specifier_) = make_Tvoid();  ;}
    break;

  case 14:
#line 1160 "Doge.y"
    { (yyval.type_specifier_) = make_Tchar();  ;}
    break;

  case 15:
#line 1161 "Doge.y"
    { (yyval.type_specifier_) = make_Tshort();  ;}
    break;

  case 16:
#line 1162 "Doge.y"
    { (yyval.type_specifier_) = make_Tint();  ;}
    break;

  case 17:
#line 1163 "Doge.y"
    { (yyval.type_specifier_) = make_Tlong();  ;}
    break;

  case 18:
#line 1164 "Doge.y"
    { (yyval.type_specifier_) = make_Tfloat();  ;}
    break;

  case 19:
#line 1165 "Doge.y"
    { (yyval.type_specifier_) = make_Tdouble();  ;}
    break;

  case 20:
#line 1166 "Doge.y"
    { (yyval.type_specifier_) = make_Tsigned();  ;}
    break;

  case 21:
#line 1167 "Doge.y"
    { (yyval.type_specifier_) = make_Tunsigned();  ;}
    break;

  case 22:
#line 1168 "Doge.y"
    { (yyval.type_specifier_) = make_Tstruct((yyvsp[(1) - (1)].struct_or_union_spec_));  ;}
    break;

  case 23:
#line 1169 "Doge.y"
    { (yyval.type_specifier_) = make_Tenum((yyvsp[(1) - (1)].enum_specifier_));  ;}
    break;

  case 24:
#line 1170 "Doge.y"
    { (yyval.type_specifier_) = make_Tname();  ;}
    break;

  case 25:
#line 1172 "Doge.y"
    { (yyval.storage_class_specifier_) = make_MyType();  ;}
    break;

  case 26:
#line 1173 "Doge.y"
    { (yyval.storage_class_specifier_) = make_GlobalPrograms();  ;}
    break;

  case 27:
#line 1174 "Doge.y"
    { (yyval.storage_class_specifier_) = make_LocalProgram();  ;}
    break;

  case 28:
#line 1175 "Doge.y"
    { (yyval.storage_class_specifier_) = make_LocalBlock();  ;}
    break;

  case 29:
#line 1176 "Doge.y"
    { (yyval.storage_class_specifier_) = make_LocalReg();  ;}
    break;

  case 30:
#line 1178 "Doge.y"
    { (yyval.type_qualifier_) = make_Const();  ;}
    break;

  case 31:
#line 1179 "Doge.y"
    { (yyval.type_qualifier_) = make_NoOptim();  ;}
    break;

  case 32:
#line 1181 "Doge.y"
    { (yyval.unary_operator_) = make_Logicalneg();  ;}
    break;

  case 33:
#line 1182 "Doge.y"
    { (yyval.unary_operator_) = make_Address();  ;}
    break;

  case 34:
#line 1183 "Doge.y"
    { (yyval.unary_operator_) = make_Indirection();  ;}
    break;

  case 35:
#line 1184 "Doge.y"
    { (yyval.unary_operator_) = make_Plus();  ;}
    break;

  case 36:
#line 1185 "Doge.y"
    { (yyval.unary_operator_) = make_Negative();  ;}
    break;

  case 37:
#line 1186 "Doge.y"
    { (yyval.unary_operator_) = make_Complement();  ;}
    break;

  case 38:
#line 1188 "Doge.y"
    { (yyval.assignment_op_) = make_Assign();  ;}
    break;

  case 39:
#line 1189 "Doge.y"
    { (yyval.assignment_op_) = make_AssignMul();  ;}
    break;

  case 40:
#line 1190 "Doge.y"
    { (yyval.assignment_op_) = make_AssignDiv();  ;}
    break;

  case 41:
#line 1191 "Doge.y"
    { (yyval.assignment_op_) = make_AssignMod();  ;}
    break;

  case 42:
#line 1192 "Doge.y"
    { (yyval.assignment_op_) = make_AssignAdd();  ;}
    break;

  case 43:
#line 1193 "Doge.y"
    { (yyval.assignment_op_) = make_AssignSub();  ;}
    break;

  case 44:
#line 1194 "Doge.y"
    { (yyval.assignment_op_) = make_AssignLeft();  ;}
    break;

  case 45:
#line 1195 "Doge.y"
    { (yyval.assignment_op_) = make_AssignRight();  ;}
    break;

  case 46:
#line 1196 "Doge.y"
    { (yyval.assignment_op_) = make_AssignAnd();  ;}
    break;

  case 47:
#line 1197 "Doge.y"
    { (yyval.assignment_op_) = make_AssignXor();  ;}
    break;

  case 48:
#line 1198 "Doge.y"
    { (yyval.assignment_op_) = make_AssignOr();  ;}
    break;

  case 49:
#line 1200 "Doge.y"
    { (yyval.init_declarator_) = make_InitDecl((yyvsp[(1) - (3)].declarator_), (yyvsp[(3) - (3)].initializer_));  ;}
    break;

  case 50:
#line 1201 "Doge.y"
    { (yyval.init_declarator_) = make_OnlyDecl((yyvsp[(1) - (1)].declarator_));  ;}
    break;

  case 51:
#line 1203 "Doge.y"
    { (yyval.enumerator_) = make_EnumInit((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].constant_expression_));  ;}
    break;

  case 52:
#line 1204 "Doge.y"
    { (yyval.enumerator_) = make_Plain((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 53:
#line 1206 "Doge.y"
    { (yyval.exp_) = make_InitClass((yyvsp[(1) - (4)].exp_), (yyvsp[(2) - (4)].assignment_op_), (yyvsp[(4) - (4)].string_));  ;}
    break;

  case 54:
#line 1207 "Doge.y"
    { (yyval.exp_) = make_Eassign((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].assignment_op_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 55:
#line 1208 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 56:
#line 1210 "Doge.y"
    { (yyval.declaration_specifier_) = make_DecClass((yyvsp[(2) - (4)].string_), (yyvsp[(3) - (4)].pointer_), (yyvsp[(4) - (4)].string_));  ;}
    break;

  case 57:
#line 1211 "Doge.y"
    { (yyval.declaration_specifier_) = make_DecClassNoPoiter((yyvsp[(2) - (3)].string_), (yyvsp[(3) - (3)].string_));  ;}
    break;

  case 58:
#line 1212 "Doge.y"
    { (yyval.declaration_specifier_) = make_Type((yyvsp[(1) - (1)].type_specifier_));  ;}
    break;

  case 59:
#line 1213 "Doge.y"
    { (yyval.declaration_specifier_) = make_Storage((yyvsp[(1) - (1)].storage_class_specifier_));  ;}
    break;

  case 60:
#line 1214 "Doge.y"
    { (yyval.declaration_specifier_) = make_SpecProp((yyvsp[(1) - (1)].type_qualifier_));  ;}
    break;

  case 61:
#line 1216 "Doge.y"
    { (yyval.program_) = make_Progr((yyvsp[(1) - (1)].listexternal_declaration_)); YY_RESULT_Program_= (yyval.program_); ;}
    break;

  case 62:
#line 1218 "Doge.y"
    { (yyval.listexternal_declaration_) = make_ListExternal_declaration((yyvsp[(1) - (1)].external_declaration_), 0);  ;}
    break;

  case 63:
#line 1219 "Doge.y"
    { (yyval.listexternal_declaration_) = make_ListExternal_declaration((yyvsp[(1) - (2)].external_declaration_), (yyvsp[(2) - (2)].listexternal_declaration_));  ;}
    break;

  case 64:
#line 1221 "Doge.y"
    { (yyval.function_def_) = make_OldFunc((yyvsp[(1) - (4)].listdeclaration_specifier_), (yyvsp[(2) - (4)].declarator_), (yyvsp[(3) - (4)].listdec_), (yyvsp[(4) - (4)].compound_stm_));  ;}
    break;

  case 65:
#line 1222 "Doge.y"
    { (yyval.function_def_) = make_NewFunc((yyvsp[(1) - (3)].listdeclaration_specifier_), (yyvsp[(2) - (3)].declarator_), (yyvsp[(3) - (3)].compound_stm_));  ;}
    break;

  case 66:
#line 1223 "Doge.y"
    { (yyval.function_def_) = make_OldFuncInt((yyvsp[(1) - (3)].declarator_), (yyvsp[(2) - (3)].listdec_), (yyvsp[(3) - (3)].compound_stm_));  ;}
    break;

  case 67:
#line 1224 "Doge.y"
    { (yyval.function_def_) = make_NewFuncInt((yyvsp[(1) - (2)].declarator_), (yyvsp[(2) - (2)].compound_stm_));  ;}
    break;

  case 68:
#line 1226 "Doge.y"
    { (yyval.dec_) = make_NoDeclarator((yyvsp[(1) - (2)].listdeclaration_specifier_));  ;}
    break;

  case 69:
#line 1227 "Doge.y"
    { (yyval.dec_) = make_Declarators((yyvsp[(1) - (3)].listdeclaration_specifier_), (yyvsp[(2) - (3)].listinit_declarator_));  ;}
    break;

  case 70:
#line 1229 "Doge.y"
    { (yyval.listdec_) = make_ListDec((yyvsp[(1) - (1)].dec_), 0);  ;}
    break;

  case 71:
#line 1230 "Doge.y"
    { (yyval.listdec_) = make_ListDec((yyvsp[(1) - (2)].dec_), (yyvsp[(2) - (2)].listdec_));  ;}
    break;

  case 72:
#line 1232 "Doge.y"
    { (yyval.listdeclaration_specifier_) = make_ListDeclaration_specifier((yyvsp[(1) - (1)].declaration_specifier_), 0);  ;}
    break;

  case 73:
#line 1233 "Doge.y"
    { (yyval.listdeclaration_specifier_) = make_ListDeclaration_specifier((yyvsp[(1) - (2)].declaration_specifier_), (yyvsp[(2) - (2)].listdeclaration_specifier_));  ;}
    break;

  case 74:
#line 1235 "Doge.y"
    { (yyval.listinit_declarator_) = make_ListInit_declarator((yyvsp[(1) - (1)].init_declarator_), 0);  ;}
    break;

  case 75:
#line 1236 "Doge.y"
    { (yyval.listinit_declarator_) = make_ListInit_declarator((yyvsp[(1) - (3)].init_declarator_), (yyvsp[(3) - (3)].listinit_declarator_));  ;}
    break;

  case 76:
#line 1238 "Doge.y"
    { (yyval.struct_or_union_spec_) = make_Tag((yyvsp[(1) - (5)].struct_or_union_), (yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].liststruct_dec_));  ;}
    break;

  case 77:
#line 1239 "Doge.y"
    { (yyval.struct_or_union_spec_) = make_Unique((yyvsp[(1) - (4)].struct_or_union_), (yyvsp[(3) - (4)].liststruct_dec_));  ;}
    break;

  case 78:
#line 1240 "Doge.y"
    { (yyval.struct_or_union_spec_) = make_TagType((yyvsp[(1) - (2)].struct_or_union_), (yyvsp[(2) - (2)].string_));  ;}
    break;

  case 79:
#line 1242 "Doge.y"
    { (yyval.struct_or_union_) = make_Struct();  ;}
    break;

  case 80:
#line 1243 "Doge.y"
    { (yyval.struct_or_union_) = make_Union();  ;}
    break;

  case 81:
#line 1245 "Doge.y"
    { (yyval.liststruct_dec_) = make_ListStruct_dec((yyvsp[(1) - (1)].struct_dec_), 0);  ;}
    break;

  case 82:
#line 1246 "Doge.y"
    { (yyval.liststruct_dec_) = make_ListStruct_dec((yyvsp[(1) - (2)].struct_dec_), (yyvsp[(2) - (2)].liststruct_dec_));  ;}
    break;

  case 83:
#line 1248 "Doge.y"
    { (yyval.struct_dec_) = make_Structen((yyvsp[(1) - (3)].listspec_qual_), (yyvsp[(2) - (3)].liststruct_declarator_));  ;}
    break;

  case 84:
#line 1250 "Doge.y"
    { (yyval.listspec_qual_) = make_ListSpec_qual((yyvsp[(1) - (1)].spec_qual_), 0);  ;}
    break;

  case 85:
#line 1251 "Doge.y"
    { (yyval.listspec_qual_) = make_ListSpec_qual((yyvsp[(1) - (2)].spec_qual_), (yyvsp[(2) - (2)].listspec_qual_));  ;}
    break;

  case 86:
#line 1253 "Doge.y"
    { (yyval.spec_qual_) = make_TypeSpec((yyvsp[(1) - (1)].type_specifier_));  ;}
    break;

  case 87:
#line 1254 "Doge.y"
    { (yyval.spec_qual_) = make_QualSpec((yyvsp[(1) - (1)].type_qualifier_));  ;}
    break;

  case 88:
#line 1256 "Doge.y"
    { (yyval.liststruct_declarator_) = make_ListStruct_declarator((yyvsp[(1) - (1)].struct_declarator_), 0);  ;}
    break;

  case 89:
#line 1257 "Doge.y"
    { (yyval.liststruct_declarator_) = make_ListStruct_declarator((yyvsp[(1) - (3)].struct_declarator_), (yyvsp[(3) - (3)].liststruct_declarator_));  ;}
    break;

  case 90:
#line 1259 "Doge.y"
    { (yyval.struct_declarator_) = make_Decl((yyvsp[(1) - (1)].declarator_));  ;}
    break;

  case 91:
#line 1260 "Doge.y"
    { (yyval.struct_declarator_) = make_Field((yyvsp[(2) - (2)].constant_expression_));  ;}
    break;

  case 92:
#line 1261 "Doge.y"
    { (yyval.struct_declarator_) = make_DecField((yyvsp[(1) - (3)].declarator_), (yyvsp[(3) - (3)].constant_expression_));  ;}
    break;

  case 93:
#line 1263 "Doge.y"
    { (yyval.enum_specifier_) = make_EnumDec((yyvsp[(3) - (4)].listenumerator_));  ;}
    break;

  case 94:
#line 1264 "Doge.y"
    { (yyval.enum_specifier_) = make_EnumName((yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].listenumerator_));  ;}
    break;

  case 95:
#line 1265 "Doge.y"
    { (yyval.enum_specifier_) = make_EnumVar((yyvsp[(2) - (2)].string_));  ;}
    break;

  case 96:
#line 1267 "Doge.y"
    { (yyval.listenumerator_) = make_ListEnumerator((yyvsp[(1) - (1)].enumerator_), 0);  ;}
    break;

  case 97:
#line 1268 "Doge.y"
    { (yyval.listenumerator_) = make_ListEnumerator((yyvsp[(1) - (3)].enumerator_), (yyvsp[(3) - (3)].listenumerator_));  ;}
    break;

  case 98:
#line 1270 "Doge.y"
    { (yyval.declarator_) = make_BeginPointer((yyvsp[(1) - (2)].pointer_), (yyvsp[(2) - (2)].direct_declarator_));  ;}
    break;

  case 99:
#line 1271 "Doge.y"
    { (yyval.declarator_) = make_NoPointer((yyvsp[(1) - (1)].direct_declarator_));  ;}
    break;

  case 100:
#line 1273 "Doge.y"
    { (yyval.direct_declarator_) = make_Name((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 101:
#line 1274 "Doge.y"
    { (yyval.direct_declarator_) = make_ParenDecl((yyvsp[(2) - (3)].declarator_));  ;}
    break;

  case 102:
#line 1275 "Doge.y"
    { (yyval.direct_declarator_) = make_InnitArray((yyvsp[(1) - (4)].direct_declarator_), (yyvsp[(3) - (4)].constant_expression_));  ;}
    break;

  case 103:
#line 1276 "Doge.y"
    { (yyval.direct_declarator_) = make_Incomplete((yyvsp[(1) - (3)].direct_declarator_));  ;}
    break;

  case 104:
#line 1277 "Doge.y"
    { (yyval.direct_declarator_) = make_NewFuncDec((yyvsp[(1) - (4)].direct_declarator_), (yyvsp[(3) - (4)].parameter_type_));  ;}
    break;

  case 105:
#line 1278 "Doge.y"
    { (yyval.direct_declarator_) = make_OldFuncDef((yyvsp[(1) - (4)].direct_declarator_), (yyvsp[(3) - (4)].listident_));  ;}
    break;

  case 106:
#line 1279 "Doge.y"
    { (yyval.direct_declarator_) = make_OldFuncDec((yyvsp[(1) - (3)].direct_declarator_));  ;}
    break;

  case 107:
#line 1281 "Doge.y"
    { (yyval.pointer_) = make_Point();  ;}
    break;

  case 108:
#line 1282 "Doge.y"
    { (yyval.pointer_) = make_PointQual((yyvsp[(2) - (2)].listtype_qualifier_));  ;}
    break;

  case 109:
#line 1283 "Doge.y"
    { (yyval.pointer_) = make_PointPoint((yyvsp[(2) - (2)].pointer_));  ;}
    break;

  case 110:
#line 1284 "Doge.y"
    { (yyval.pointer_) = make_PointQualPoint((yyvsp[(2) - (3)].listtype_qualifier_), (yyvsp[(3) - (3)].pointer_));  ;}
    break;

  case 111:
#line 1286 "Doge.y"
    { (yyval.listtype_qualifier_) = make_ListType_qualifier((yyvsp[(1) - (1)].type_qualifier_), 0);  ;}
    break;

  case 112:
#line 1287 "Doge.y"
    { (yyval.listtype_qualifier_) = make_ListType_qualifier((yyvsp[(1) - (2)].type_qualifier_), (yyvsp[(2) - (2)].listtype_qualifier_));  ;}
    break;

  case 113:
#line 1289 "Doge.y"
    { (yyval.parameter_type_) = make_AllSpec((yyvsp[(1) - (1)].parameter_declarations_));  ;}
    break;

  case 114:
#line 1290 "Doge.y"
    { (yyval.parameter_type_) = make_More((yyvsp[(1) - (3)].parameter_declarations_));  ;}
    break;

  case 115:
#line 1292 "Doge.y"
    { (yyval.parameter_declarations_) = make_ParamDec((yyvsp[(1) - (1)].parameter_declaration_));  ;}
    break;

  case 116:
#line 1293 "Doge.y"
    { (yyval.parameter_declarations_) = make_MoreParamDec((yyvsp[(1) - (3)].parameter_declarations_), (yyvsp[(3) - (3)].parameter_declaration_));  ;}
    break;

  case 117:
#line 1295 "Doge.y"
    { (yyval.parameter_declaration_) = make_OnlyType((yyvsp[(1) - (1)].listdeclaration_specifier_));  ;}
    break;

  case 118:
#line 1296 "Doge.y"
    { (yyval.parameter_declaration_) = make_TypeAndParam((yyvsp[(1) - (2)].listdeclaration_specifier_), (yyvsp[(2) - (2)].declarator_));  ;}
    break;

  case 119:
#line 1297 "Doge.y"
    { (yyval.parameter_declaration_) = make_Abstract((yyvsp[(1) - (2)].listdeclaration_specifier_), (yyvsp[(2) - (2)].abstract_declarator_));  ;}
    break;

  case 120:
#line 1299 "Doge.y"
    { (yyval.listident_) = make_ListIdent((yyvsp[(1) - (1)].string_), 0);  ;}
    break;

  case 121:
#line 1300 "Doge.y"
    { (yyval.listident_) = make_ListIdent((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].listident_));  ;}
    break;

  case 122:
#line 1302 "Doge.y"
    { (yyval.initializer_) = make_InitExpr((yyvsp[(1) - (1)].exp_));  ;}
    break;

  case 123:
#line 1303 "Doge.y"
    { (yyval.initializer_) = make_InitListOne((yyvsp[(2) - (3)].initializers_));  ;}
    break;

  case 124:
#line 1304 "Doge.y"
    { (yyval.initializer_) = make_InitListTwo((yyvsp[(2) - (4)].initializers_));  ;}
    break;

  case 125:
#line 1306 "Doge.y"
    { (yyval.initializers_) = make_AnInit((yyvsp[(1) - (1)].initializer_));  ;}
    break;

  case 126:
#line 1307 "Doge.y"
    { (yyval.initializers_) = make_MoreInit((yyvsp[(1) - (3)].initializers_), (yyvsp[(3) - (3)].initializer_));  ;}
    break;

  case 127:
#line 1309 "Doge.y"
    { (yyval.type_name_) = make_PlainType((yyvsp[(1) - (1)].listspec_qual_));  ;}
    break;

  case 128:
#line 1310 "Doge.y"
    { (yyval.type_name_) = make_ExtendedType((yyvsp[(1) - (2)].listspec_qual_), (yyvsp[(2) - (2)].abstract_declarator_));  ;}
    break;

  case 129:
#line 1312 "Doge.y"
    { (yyval.abstract_declarator_) = make_PointerStart((yyvsp[(1) - (1)].pointer_));  ;}
    break;

  case 130:
#line 1313 "Doge.y"
    { (yyval.abstract_declarator_) = make_Advanced((yyvsp[(1) - (1)].dir_abs_dec_));  ;}
    break;

  case 131:
#line 1314 "Doge.y"
    { (yyval.abstract_declarator_) = make_PointAdvanced((yyvsp[(1) - (2)].pointer_), (yyvsp[(2) - (2)].dir_abs_dec_));  ;}
    break;

  case 132:
#line 1316 "Doge.y"
    { (yyval.dir_abs_dec_) = make_WithinParentes((yyvsp[(2) - (3)].abstract_declarator_));  ;}
    break;

  case 133:
#line 1317 "Doge.y"
    { (yyval.dir_abs_dec_) = make_Array();  ;}
    break;

  case 134:
#line 1318 "Doge.y"
    { (yyval.dir_abs_dec_) = make_InitiatedArray((yyvsp[(2) - (3)].constant_expression_));  ;}
    break;

  case 135:
#line 1319 "Doge.y"
    { (yyval.dir_abs_dec_) = make_UnInitiated((yyvsp[(1) - (3)].dir_abs_dec_));  ;}
    break;

  case 136:
#line 1320 "Doge.y"
    { (yyval.dir_abs_dec_) = make_Initiated((yyvsp[(1) - (4)].dir_abs_dec_), (yyvsp[(3) - (4)].constant_expression_));  ;}
    break;

  case 137:
#line 1321 "Doge.y"
    { (yyval.dir_abs_dec_) = make_OldFunction();  ;}
    break;

  case 138:
#line 1322 "Doge.y"
    { (yyval.dir_abs_dec_) = make_NewFunction((yyvsp[(2) - (3)].parameter_type_));  ;}
    break;

  case 139:
#line 1323 "Doge.y"
    { (yyval.dir_abs_dec_) = make_OldFuncExpr((yyvsp[(1) - (3)].dir_abs_dec_));  ;}
    break;

  case 140:
#line 1324 "Doge.y"
    { (yyval.dir_abs_dec_) = make_NewFuncExpr((yyvsp[(1) - (4)].dir_abs_dec_), (yyvsp[(3) - (4)].parameter_type_));  ;}
    break;

  case 141:
#line 1326 "Doge.y"
    { (yyval.stm_) = make_LabelS((yyvsp[(1) - (1)].labeled_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 142:
#line 1327 "Doge.y"
    { (yyval.stm_) = make_CompS((yyvsp[(1) - (1)].compound_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 143:
#line 1328 "Doge.y"
    { (yyval.stm_) = make_ExprS((yyvsp[(1) - (1)].expression_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 144:
#line 1329 "Doge.y"
    { (yyval.stm_) = make_SelS((yyvsp[(1) - (1)].selection_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 145:
#line 1330 "Doge.y"
    { (yyval.stm_) = make_IterS((yyvsp[(1) - (1)].iter_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 146:
#line 1331 "Doge.y"
    { (yyval.stm_) = make_JumpS((yyvsp[(1) - (1)].jump_stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 147:
#line 1333 "Doge.y"
    { (yyval.labeled_stm_) = make_SlabelOne((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].stm_));  ;}
    break;

  case 148:
#line 1334 "Doge.y"
    { (yyval.labeled_stm_) = make_SlabelTwo((yyvsp[(2) - (4)].constant_expression_), (yyvsp[(4) - (4)].stm_));  ;}
    break;

  case 149:
#line 1335 "Doge.y"
    { (yyval.labeled_stm_) = make_SlabelThree((yyvsp[(3) - (3)].stm_));  ;}
    break;

  case 150:
#line 1337 "Doge.y"
    { (yyval.compound_stm_) = make_ScompOne();  ;}
    break;

  case 151:
#line 1338 "Doge.y"
    { (yyval.compound_stm_) = make_ScompTwo((yyvsp[(2) - (3)].liststm_));  ;}
    break;

  case 152:
#line 1339 "Doge.y"
    { (yyval.compound_stm_) = make_ScompThree((yyvsp[(2) - (3)].listdec_));  ;}
    break;

  case 153:
#line 1340 "Doge.y"
    { (yyval.compound_stm_) = make_ScompFour((yyvsp[(2) - (4)].listdec_), (yyvsp[(3) - (4)].liststm_));  ;}
    break;

  case 154:
#line 1342 "Doge.y"
    { (yyval.expression_stm_) = make_SexprOne();  ;}
    break;

  case 155:
#line 1343 "Doge.y"
    { (yyval.expression_stm_) = make_SexprTwo((yyvsp[(1) - (2)].exp_));  ;}
    break;

  case 156:
#line 1345 "Doge.y"
    { (yyval.selection_stm_) = make_SselOne((yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].stm_));  ;}
    break;

  case 157:
#line 1346 "Doge.y"
    { (yyval.selection_stm_) = make_SselTwo((yyvsp[(3) - (7)].exp_), (yyvsp[(5) - (7)].stm_), (yyvsp[(7) - (7)].stm_));  ;}
    break;

  case 158:
#line 1347 "Doge.y"
    { (yyval.selection_stm_) = make_SselThree((yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].stm_));  ;}
    break;

  case 159:
#line 1349 "Doge.y"
    { (yyval.iter_stm_) = make_SiterOne((yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].stm_));  ;}
    break;

  case 160:
#line 1350 "Doge.y"
    { (yyval.iter_stm_) = make_SiterTwo((yyvsp[(2) - (7)].stm_), (yyvsp[(5) - (7)].exp_));  ;}
    break;

  case 161:
#line 1351 "Doge.y"
    { (yyval.iter_stm_) = make_SiterThree((yyvsp[(3) - (6)].expression_stm_), (yyvsp[(4) - (6)].expression_stm_), (yyvsp[(6) - (6)].stm_));  ;}
    break;

  case 162:
#line 1352 "Doge.y"
    { (yyval.iter_stm_) = make_SiterFour((yyvsp[(3) - (7)].expression_stm_), (yyvsp[(4) - (7)].expression_stm_), (yyvsp[(5) - (7)].exp_), (yyvsp[(7) - (7)].stm_));  ;}
    break;

  case 163:
#line 1354 "Doge.y"
    { (yyval.liststm_) = make_ListStm((yyvsp[(1) - (1)].stm_), 0);  ;}
    break;

  case 164:
#line 1355 "Doge.y"
    { (yyval.liststm_) = make_ListStm((yyvsp[(1) - (2)].stm_), (yyvsp[(2) - (2)].liststm_));  ;}
    break;

  case 165:
#line 1357 "Doge.y"
    { (yyval.exp_) = make_Ecomma((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 166:
#line 1358 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 167:
#line 1360 "Doge.y"
    { (yyval.exp_) = make_Econdition((yyvsp[(1) - (5)].exp_), (yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].exp_));  ;}
    break;

  case 168:
#line 1361 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 169:
#line 1363 "Doge.y"
    { (yyval.exp_) = make_Elor((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 170:
#line 1364 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 171:
#line 1366 "Doge.y"
    { (yyval.exp_) = make_Eland((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 172:
#line 1367 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 173:
#line 1369 "Doge.y"
    { (yyval.exp_) = make_Ebitor((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 174:
#line 1370 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 175:
#line 1372 "Doge.y"
    { (yyval.exp_) = make_Ebitexor((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 176:
#line 1373 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 177:
#line 1375 "Doge.y"
    { (yyval.exp_) = make_Ebitand((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 178:
#line 1376 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 179:
#line 1378 "Doge.y"
    { (yyval.exp_) = make_Eeq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 180:
#line 1379 "Doge.y"
    { (yyval.exp_) = make_Eneq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 181:
#line 1380 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 182:
#line 1382 "Doge.y"
    { (yyval.exp_) = make_Elthen((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 183:
#line 1383 "Doge.y"
    { (yyval.exp_) = make_Egrthen((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 184:
#line 1384 "Doge.y"
    { (yyval.exp_) = make_Ele((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 185:
#line 1385 "Doge.y"
    { (yyval.exp_) = make_Ege((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 186:
#line 1386 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 187:
#line 1388 "Doge.y"
    { (yyval.exp_) = make_Eleft((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 188:
#line 1389 "Doge.y"
    { (yyval.exp_) = make_Eright((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 189:
#line 1390 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 190:
#line 1392 "Doge.y"
    { (yyval.exp_) = make_Eplus((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 191:
#line 1393 "Doge.y"
    { (yyval.exp_) = make_Eminus((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 192:
#line 1394 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 193:
#line 1396 "Doge.y"
    { (yyval.exp_) = make_Etimes((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 194:
#line 1397 "Doge.y"
    { (yyval.exp_) = make_Ediv((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 195:
#line 1398 "Doge.y"
    { (yyval.exp_) = make_Emod((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_));  ;}
    break;

  case 196:
#line 1399 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 197:
#line 1401 "Doge.y"
    { (yyval.exp_) = make_Etypeconv((yyvsp[(2) - (4)].type_name_), (yyvsp[(4) - (4)].exp_));  ;}
    break;

  case 198:
#line 1402 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 199:
#line 1404 "Doge.y"
    { (yyval.exp_) = make_Epreinc((yyvsp[(2) - (2)].exp_));  ;}
    break;

  case 200:
#line 1405 "Doge.y"
    { (yyval.exp_) = make_Epredec((yyvsp[(2) - (2)].exp_));  ;}
    break;

  case 201:
#line 1406 "Doge.y"
    { (yyval.exp_) = make_Epreop((yyvsp[(1) - (2)].unary_operator_), (yyvsp[(2) - (2)].exp_));  ;}
    break;

  case 202:
#line 1407 "Doge.y"
    { (yyval.exp_) = make_Ebytesexpr((yyvsp[(2) - (2)].exp_));  ;}
    break;

  case 203:
#line 1408 "Doge.y"
    { (yyval.exp_) = make_Ebytestype((yyvsp[(3) - (4)].type_name_));  ;}
    break;

  case 204:
#line 1409 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 205:
#line 1411 "Doge.y"
    { (yyval.exp_) = make_Earray((yyvsp[(1) - (4)].exp_), (yyvsp[(3) - (4)].exp_));  ;}
    break;

  case 206:
#line 1412 "Doge.y"
    { (yyval.exp_) = make_Efunk((yyvsp[(1) - (3)].exp_));  ;}
    break;

  case 207:
#line 1413 "Doge.y"
    { (yyval.exp_) = make_Efunkpar((yyvsp[(1) - (4)].exp_), (yyvsp[(3) - (4)].listexp_));  ;}
    break;

  case 208:
#line 1414 "Doge.y"
    { (yyval.exp_) = make_Eselect((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].string_));  ;}
    break;

  case 209:
#line 1415 "Doge.y"
    { (yyval.exp_) = make_Epoint((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].string_));  ;}
    break;

  case 210:
#line 1416 "Doge.y"
    { (yyval.exp_) = make_Epostinc((yyvsp[(1) - (2)].exp_));  ;}
    break;

  case 211:
#line 1417 "Doge.y"
    { (yyval.exp_) = make_Epostdec((yyvsp[(1) - (2)].exp_));  ;}
    break;

  case 212:
#line 1418 "Doge.y"
    { (yyval.exp_) = (yyvsp[(1) - (1)].exp_);  ;}
    break;

  case 213:
#line 1420 "Doge.y"
    { (yyval.exp_) = make_Evar((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 214:
#line 1421 "Doge.y"
    { (yyval.exp_) = make_Econst((yyvsp[(1) - (1)].constant_));  ;}
    break;

  case 215:
#line 1422 "Doge.y"
    { (yyval.exp_) = make_Estring((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 216:
#line 1423 "Doge.y"
    { (yyval.exp_) = (yyvsp[(2) - (3)].exp_);  ;}
    break;

  case 217:
#line 1425 "Doge.y"
    { (yyval.constant_) = make_Efloat((yyvsp[(1) - (1)].double_));  ;}
    break;

  case 218:
#line 1426 "Doge.y"
    { (yyval.constant_) = make_Echar((yyvsp[(1) - (1)].char_));  ;}
    break;

  case 219:
#line 1427 "Doge.y"
    { (yyval.constant_) = make_Eunsigned((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 220:
#line 1428 "Doge.y"
    { (yyval.constant_) = make_Elong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 221:
#line 1429 "Doge.y"
    { (yyval.constant_) = make_Eunsignlong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 222:
#line 1430 "Doge.y"
    { (yyval.constant_) = make_Ehexadec((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 223:
#line 1431 "Doge.y"
    { (yyval.constant_) = make_Ehexaunsign((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 224:
#line 1432 "Doge.y"
    { (yyval.constant_) = make_Ehexalong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 225:
#line 1433 "Doge.y"
    { (yyval.constant_) = make_Ehexaunslong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 226:
#line 1434 "Doge.y"
    { (yyval.constant_) = make_Eoctal((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 227:
#line 1435 "Doge.y"
    { (yyval.constant_) = make_Eoctalunsign((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 228:
#line 1436 "Doge.y"
    { (yyval.constant_) = make_Eoctallong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 229:
#line 1437 "Doge.y"
    { (yyval.constant_) = make_Eoctalunslong((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 230:
#line 1438 "Doge.y"
    { (yyval.constant_) = make_Ecdouble((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 231:
#line 1439 "Doge.y"
    { (yyval.constant_) = make_Ecfloat((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 232:
#line 1440 "Doge.y"
    { (yyval.constant_) = make_Eclongdouble((yyvsp[(1) - (1)].string_));  ;}
    break;

  case 233:
#line 1441 "Doge.y"
    { (yyval.constant_) = make_Eint((yyvsp[(1) - (1)].int_));  ;}
    break;

  case 234:
#line 1443 "Doge.y"
    { (yyval.constant_expression_) = make_Especial((yyvsp[(1) - (1)].exp_));  ;}
    break;

  case 235:
#line 1445 "Doge.y"
    { (yyval.listexp_) = make_ListExp((yyvsp[(1) - (1)].exp_), 0);  ;}
    break;

  case 236:
#line 1446 "Doge.y"
    { (yyval.listexp_) = make_ListExp((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].listexp_));  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4373 "Parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



