#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Inheritance.h"

static ListExternal_declaration program = NULL;

void mergeClasses(ListExternal_declaration class,
                  ListExternal_declaration extend)
{
  ListExternal_declaration ptr;

  if (!class || !extend)
  {
    printf("Could not find a matching class for inheritance, aborting convertion\n");
    printf("Exiting...\n");
    exit(-1);
  }
  ptr = class;
  while (class->listexternal_declaration_)
    class = class->listexternal_declaration_;
  /* Need to flag the struct as extended to avoid any infinite loop */
  class->extendedFlag = 1;
  class->listexternal_declaration_ = extend;
  class = ptr;
}

ListExternal_declaration findClassPtr(ListExternal_declaration list, char *className)
{
  External_declaration cur;

  if (!list || !className) return NULL;
  /* only classes and namespace can contain classes, we ignore the rest */
  while (list)
  {
    cur = list->external_declaration_;
    if (cur->kind == is_Class)
    {
      if (!strcmp(className, getClassName(cur->u.class_.classname_)) && !list->extendedFlag)
        return cur->u.class_.listexternal_declaration_;
    }
    else if (cur->kind == is_Namespace)
      return findClassPtr(cur->u.namespace_.listexternal_declaration_, className);
    list = list->listexternal_declaration_;
  }
  return NULL;
}

/* Recursive function to handle inheritance */
void doHeritage(ListExternal_declaration list)
{
  External_declaration cur;
  ListExternal_declaration ptr;
  ListExternal_declaration extend;

  /* We set the global on first call */
  if (!program) program = list;

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
        printf("Doing inheritance now\n");
        extend = findClassPtr(program, getClassInheritance(cur->u.class_.extends_->u.inheritance_.classname_));
        /* mergeClasses will make the last listexternal_declaration pointer point onto the inherited class */
        mergeClasses(cur->u.class_.listexternal_declaration_, extend);
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
