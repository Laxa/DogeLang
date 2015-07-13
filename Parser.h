#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include "Absyn.h"

typedef union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  External_declaration external_declaration_;
  Extends extends_;
  Permission permission_;
  Jump_stm jump_stm_;
  Type_specifier type_specifier_;
  Storage_class_specifier storage_class_specifier_;
  Type_qualifier type_qualifier_;
  Unary_operator unary_operator_;
  Assignment_op assignment_op_;
  Init_declarator init_declarator_;
  Enumerator enumerator_;
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
  Exp exp_;
  Constant constant_;
  Constant_expression constant_expression_;
} YYSTYPE;

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
#define _SYMB_98 357
#define _SYMB_99 358
#define _SYMB_100 359
#define _STRING_ 360
#define _CHAR_ 361
#define _INTEGER_ 362
#define _DOUBLE_ 363
#define _IDENT_ 364

extern YYSTYPE yylval;
Program pProgram(FILE *inp);
Stm pStm(FILE *inp);
Exp pExp(FILE *inp);


#endif
