#ifndef DOGE_H_
# define DOGE_H_

#include "CheckDoge.h"

#define UNUSED __attribute__ ((unused))
#define FUNCTION_BUFFER_SIZE 128
#define INDENT_WIDTH 2
#define MANGLING_START "_Z"
#define NAMESPACE_MAX_LENGTH 128
#define CLASSNAME_MAX_LENGTH 128
#define HEADER_SIZE 4096
#define STRUCT_BUFFER_SIZE 1024
#define STANDARD_BUFFER_SIZE 512

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
  char                      name[FUNCTION_BUFFER_SIZE];
  ListDeclaration_specifier     type;
  int                           number;
  struct Declarator_     *declarator;
  struct Compound_stm_      *content;
  struct s_function_container  *next;
}               t_function_container;

typedef struct    s_pointer_function
{
  char                  function[FUNCTION_BUFFER_SIZE];
  struct s_pointer_function    *next;
}                 t_pointer_function;

#endif /* !DOGE_H_ */
