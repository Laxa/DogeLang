#include "ChainedList.h"

// stub

t_nameSpaceClassTable init();
void addNameSpace(External_declaration n);
void addClass(External_declaration c);
t_nameSpaceClassTable *getNameSpace(char *nameSpace);
// return null if not found then we should print an error message
External_declaration getClassWithNameSpace(char *class, char *nameSpace);
// return null if not found then we should print an error message
External_declaration getClass(char *class);
void freeChain();
