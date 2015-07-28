#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ChainedList.h"

static ListExternal_declaration program = NULL;

void mergeClasses(ListExternal_declaration class, ListExternal_declaration extend)
{
  ListExternal_declaration ptr;

  printf("%p:%p\n", class, extend);
  if (!extend || !class) return;
  ptr = class;
  int elem = 0;
  while (class->listexternal_declaration_)
  {
    class = class->listexternal_declaration_;
    elem++;
  }
  printf("Found %d elem\n", elem);
  class->listexternal_declaration_ = extend;
  class = ptr;
}

/* find and return pointer on ListExternal_declaration from the corresponding class */
ListExternal_declaration findClassPtr(char *className)
{
  if (!program) return NULL;
  className = NULL;
  return NULL;
}

/* Recursive function to handle inheritance */
void doHeritage(ListExternal_declaration list)
{
  /* We set the global on first call */
  if (!program) program = list;
  External_declaration cur;
  ListExternal_declaration ptr;
  ListExternal_declaration extend;

  /* saving list pointer */
  ptr = list;
  while (list)
  {
    cur = list->external_declaration_;
    if (cur->kind == is_Class)
    {
      printf("Found one class: %s:%p\n", getClassName(cur->u.class_.classname_), cur->u.class_.listexternal_declaration_);
      /* check for inheritance */
      if (cur->u.class_.extends_->kind == is_Inheritance)
      {
        printf("%s inherit from %s\n", getClassName(cur->u.class_.classname_),
               getClassInheritance(cur->u.class_.extends_->u.inheritance_.classname_));
        if (list->listexternal_declaration_)
        {
          printf("Doing inheritance now\n");
          extend = findClassPtr(getClassInheritance(cur->u.class_.extends_->u.inheritance_.classname_));
          /* maybe pass cur->list->listexternal_declaration and set it to the adress of the */
          /*   of the extend, that might work */
          mergeClasses(cur->u.class_.listexternal_declaration_, extend);
          /* No classes inside classes */
          /* doHeritage(list->listexternal_declaration_); */
        }
        else
        {
          printf("No class found to do inheritance\n");
          exit(-1);
        }
      }
    }
    else if (cur->kind == is_Namespace)
    {
      printf("Found namespace: %s\n", cur->u.namespace_.ident_);
      doHeritage(cur->u.namespace_.listexternal_declaration_);
    }
    else if (cur->kind == is_Afunc)
      printf("Found func\n");
    else
      printf("Found global\n");
    list = list->listexternal_declaration_;
  }
  /* restoring list pointer */
  list = ptr;
}

char *getClassName(ClassName class)
{
  if (class->kind == is_ClassWithNamespace)
    return class->u.classwithnamespace_.ident_2;
  else
    return class->u.classwithoutnamespace_.ident_;
}

char *getClassInheritance(ClassName class)
{
  if (class->kind == is_ClassWithNamespace)
  {
    int size = strlen(class->u.classwithnamespace_.ident_1) + strlen(class->u.classwithnamespace_.ident_2);
    char *buf = malloc(size + 1);
    snprintf(buf, size + 1, "%s::%s", class->u.classwithnamespace_.ident_1, class->u.classwithnamespace_.ident_2);
    return buf;
  }
  else
    return class->u.classwithoutnamespace_.ident_;
}
