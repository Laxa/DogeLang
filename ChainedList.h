#ifndef CHAINEDLIST_H_
# define CHAINEDLIST_H_

#include "CheckDoge.h"

#define UNUSED __attribute__ ((unused))

void doHeritage(ListExternal_declaration list);
char *getClassName(ClassName class);
char *getClassInheritance(ClassName class);
void mergeClasses(ListExternal_declaration class, ListExternal_declaration extend);
ListExternal_declaration findClassPtr(ListExternal_declaration list, char *className);

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

typedef struct    s_pointer_function
{
  char                  function[50];
  struct s_pointer_function    *next;
}                 t_pointer_function;

#endif /* !CHAINEDLIST_H_ */
