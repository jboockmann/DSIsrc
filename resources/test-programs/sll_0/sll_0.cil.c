/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct node {
   struct node *next ;
   int value ;
};
struct list {
   struct node *head ;
};
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
struct list *list_create(void) ;
void list_add(struct list *l , int item ) ;
int list_remove(struct list *l ) ;
void list_dispose(struct list *l ) ;
void list_add(struct list *l , int item ) 
{ 
  struct node *new ;
  void *tmp ;
  struct node *n ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "struct list *", & l);
  logVarInScope("local", "new", "struct node *", & new);
  logVarInScope("local", "tmp", "void *", & tmp);
  logVarInScope("local", "n", "struct node *", & n);
  logBlockEntry("sll_0.c", 21);
  tmp = malloc(sizeof(struct node ));
  logAssignNoOffset("sll_0.c", 21, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct node )", sizeof(struct node ));
  new = (struct node *)tmp;
  logAssignNoOffset("sll_0.c", 21, & new, "struct node *", "new", new, "struct node",
                    "(struct node *)tmp", 0);
  logBlockExit("sll_0.c", 21);
  if ((unsigned long )new == (unsigned long )((struct node *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_0.c", 23);
  new->next = (struct node *)0;
  logAssignOffset("sll_0.c", 23, new, "struct node", "*new", & new->next, "struct node *",
                  "new->next", new->next, "struct node", "(struct node *)0", 0);
  new->value = item;
  n = l->head;
  logAssignNoOffset("sll_0.c", 26, & n, "struct node *", "n", n, "struct node", "l->head",
                    0);
  logBlockExit("sll_0.c", 26);
  if ((unsigned long )n == (unsigned long )((struct node *)0)) {
    logBlockEntry("sll_0.c", 28);
    l->head = new;
    logAssignOffset("sll_0.c", 28, l, "struct list", "*l", & l->head, "struct node *",
                    "l->head", l->head, "struct node", "new", 0);
    logBlockExit("sll_0.c", 28);
  } else {
    while ((unsigned long )n->next != (unsigned long )((struct node *)0)) {
      logComment("Loop-iteration-start_sll_0.c_30");
      {
      logBlockEntry("sll_0.c", 32);
      n = n->next;
      logAssignNoOffset("sll_0.c", 32, & n, "struct node *", "n", n, "struct node",
                        "n->next", 0);
      logBlockExit("sll_0.c", 32);
      }
      logComment("Loop-iteration-end");
    }
    logBlockEntry("sll_0.c", 34);
    n->next = new;
    logAssignOffset("sll_0.c", 34, n, "struct node", "*n", & n->next, "struct node *",
                    "n->next", n->next, "struct node", "new", 0);
    logBlockExit("sll_0.c", 34);
  }
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("new", & new);
  logVarOutOfScope("tmp", & tmp);
  logVarOutOfScope("n", & n);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
struct list *list_create(void) 
{ 
  struct list *l ;
  void *tmp ;

  {
  logComment("Function Entered");
  logVarInScope("local", "l", "struct list *", & l);
  logVarInScope("local", "tmp", "void *", & tmp);
  logBlockEntry("sll_0.c", 40);
  tmp = malloc(sizeof(struct list ));
  logAssignNoOffset("sll_0.c", 40, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct list )", sizeof(struct list ));
  l = (struct list *)tmp;
  logAssignNoOffset("sll_0.c", 40, & l, "struct list *", "l", l, "struct list", "(struct list *)tmp",
                    0);
  logBlockExit("sll_0.c", 40);
  if ((unsigned long )l == (unsigned long )((struct list *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_0.c", 42);
  l->head = (struct node *)0;
  logAssignOffset("sll_0.c", 42, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "(struct node *)0", 0);
  logBlockExit("sll_0.c", 42);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("tmp", & tmp);
  {
  logComment("Function Exited");
  return (l);
  }
  }
}
}
void list_dispose(struct list *l ) 
{ 
  struct node *current ;
  struct node *oldcurrent ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "struct list *", & l);
  logVarInScope("local", "current", "struct node *", & current);
  logVarInScope("local", "oldcurrent", "struct node *", & oldcurrent);
  logBlockEntry("sll_0.c", 48);
  current = l->head;
  logAssignNoOffset("sll_0.c", 48, & current, "struct node *", "current", current,
                    "struct node", "l->head", 0);
  logBlockExit("sll_0.c", 48);
  while ((unsigned long )current != (unsigned long )((struct node *)0)) {
    logComment("Loop-iteration-start_sll_0.c_49");
    {
    logBlockEntry("sll_0.c", 51);
    oldcurrent = current;
    logAssignNoOffset("sll_0.c", 51, & oldcurrent, "struct node *", "oldcurrent",
                      oldcurrent, "struct node", "current", 0);
    current = current->next;
    logAssignNoOffset("sll_0.c", 52, & current, "struct node *", "current", current,
                      "struct node", "current->next", 0);
    logFree("sll_0.c", 53, "(void *)oldcurrent", (void *)oldcurrent);
    free((void *)oldcurrent);
    logBlockExit("sll_0.c", 53);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("", -1);
  logFree("sll_0.c", 55, "(void *)l", (void *)l);
  free((void *)l);
  logBlockExit("sll_0.c", 55);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("current", & current);
  logVarOutOfScope("oldcurrent", & oldcurrent);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
int list_remove(struct list *l ) 
{ 
  struct node *n ;
  int i ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "struct list *", & l);
  logVarInScope("local", "n", "struct node *", & n);
  logBlockEntry("sll_0.c", 61);
  n = l->head;
  logAssignNoOffset("sll_0.c", 61, & n, "struct node *", "n", n, "struct node", "l->head",
                    0);
  i = n->value;
  l->head = n->next;
  logAssignOffset("sll_0.c", 63, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "n->next", 0);
  logFree("sll_0.c", 64, "(void *)n", (void *)n);
  free((void *)n);
  logBlockExit("sll_0.c", 64);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("n", & n);
  {
  logComment("Function Exited");
  return (i);
  }
  }
}
}
int main(void) 
{ 
  int i ;
  struct list *l ;
  struct list *tmp ;

  {
  logComment("Function Entered");
  logVarInScope("local", "l", "struct list *", & l);
  logVarInScope("local", "tmp", "struct list *", & tmp);
  tmp = list_create();
  logBlockEntry("sll_0.c", 73);
  logAssignNoOffset("sll_0.c", 73, & tmp, "struct list *", "tmp", tmp, "struct list",
                    "list_create", 0);
  dumpVarsOutOfScope();
  l = tmp;
  logAssignNoOffset("sll_0.c", 73, & l, "struct list *", "l", l, "struct list", "tmp",
                    0);
  logBlockExit("sll_0.c", 74);
  list_add(l, 1);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_0.c", 75);
  list_add(l, 2);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_0.c", 76);
  list_add(l, 3);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_0.c", 77);
  i = list_remove(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_0.c", 78);
  list_dispose(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("", -1);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("tmp", & tmp);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
