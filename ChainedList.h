#ifndef CHAINEDLIST_H_
# define CHAINEDLIST_H_

#include "CheckDoge.h"

#define UNUSED __attribute__ ((unused))

typedef struct  s_nameSpaceClassTable
{
  char                          *nameSpace;
  int                           bufPos;
  ListExternal_declaration      *list;
  struct s_nameSpaceClassTable  *next;
}               t_nameSpaceClassTable;

#endif /* !CHAINEDLIST_H_ */
