#ifndef CHAINEDLIST_H_
# define CHAINEDLIST_H_

#include "CheckDoge.h"

#define UNUSED __attribute__ ((unused))

typedef struct  s_nameSpaceClassTable
{
  char                          *nameSpace;
  ListExternal_declaration      *list;
  struct s_nameSpaceClassTable  *next;
}               t_nameSpaceClassTable;


typedef struct  s_function_container
{
  char                      name[50];
  ListDeclaration_specifier     type;
  struct Declarator_ *    declarator;
  struct Compound_stm_      *content;
  struct s_function_container  *next;
}               t_function_container;

#endif /* !CHAINEDLIST_H_ */
