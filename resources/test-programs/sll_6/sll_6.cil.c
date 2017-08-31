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

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "struct list *", & l);
  logVarInScope("local", "new", "struct node *", & new);
  logVarInScope("local", "tmp", "void *", & tmp);
  logBlockEntry("sll_6.c", 21);
  tmp = malloc(sizeof(struct node ));
  logAssignNoOffset("sll_6.c", 21, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct node )", sizeof(struct node ));
  new = (struct node *)tmp;
  logAssignNoOffset("sll_6.c", 21, & new, "struct node *", "new", new, "struct node",
                    "(struct node *)tmp", 0);
  logBlockExit("sll_6.c", 21);
  if ((unsigned long )new == (unsigned long )((struct node *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_6.c", 23);
  new->next = (struct node *)0;
  logAssignOffset("sll_6.c", 23, new, "struct node", "*new", & new->next, "struct node *",
                  "new->next", new->next, "struct node", "(struct node *)0", 0);
  new->value = item;
  logBlockExit("sll_6.c", 24);
  if ((unsigned long )l->head == (unsigned long )((struct node *)0)) {
    logBlockEntry("sll_6.c", 26);
    l->head = new;
    logAssignOffset("sll_6.c", 26, l, "struct list", "*l", & l->head, "struct node *",
                    "l->head", l->head, "struct node", "new", 0);
    logBlockExit("sll_6.c", 26);
  } else {
    logBlockEntry("sll_6.c", 28);
    new->next = l->head;
    logAssignOffset("sll_6.c", 28, new, "struct node", "*new", & new->next, "struct node *",
                    "new->next", new->next, "struct node", "l->head", 0);
    l->head = new;
    logAssignOffset("sll_6.c", 29, l, "struct list", "*l", & l->head, "struct node *",
                    "l->head", l->head, "struct node", "new", 0);
    logBlockExit("sll_6.c", 29);
  }
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("new", & new);
  logVarOutOfScope("tmp", & tmp);
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
  logBlockEntry("sll_6.c", 35);
  tmp = malloc(sizeof(struct list ));
  logAssignNoOffset("sll_6.c", 35, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct list )", sizeof(struct list ));
  l = (struct list *)tmp;
  logAssignNoOffset("sll_6.c", 35, & l, "struct list *", "l", l, "struct list", "(struct list *)tmp",
                    0);
  logBlockExit("sll_6.c", 35);
  if ((unsigned long )l == (unsigned long )((struct list *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_6.c", 37);
  l->head = (struct node *)0;
  logAssignOffset("sll_6.c", 37, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "(struct node *)0", 0);
  logBlockExit("sll_6.c", 37);
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
  logBlockEntry("sll_6.c", 43);
  current = l->head;
  logAssignNoOffset("sll_6.c", 43, & current, "struct node *", "current", current,
                    "struct node", "l->head", 0);
  logBlockExit("sll_6.c", 43);
  while ((unsigned long )current != (unsigned long )((struct node *)0)) {
    logComment("Loop-iteration-start_sll_6.c_44");
    {
    logBlockEntry("sll_6.c", 46);
    oldcurrent = current;
    logAssignNoOffset("sll_6.c", 46, & oldcurrent, "struct node *", "oldcurrent",
                      oldcurrent, "struct node", "current", 0);
    current = current->next;
    logAssignNoOffset("sll_6.c", 47, & current, "struct node *", "current", current,
                      "struct node", "current->next", 0);
    logFree("sll_6.c", 48, "(void *)oldcurrent", (void *)oldcurrent);
    free((void *)oldcurrent);
    logBlockExit("sll_6.c", 48);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("", -1);
  logFree("sll_6.c", 50, "(void *)l", (void *)l);
  free((void *)l);
  logBlockExit("sll_6.c", 50);
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
  logBlockEntry("sll_6.c", 56);
  n = l->head;
  logAssignNoOffset("sll_6.c", 56, & n, "struct node *", "n", n, "struct node", "l->head",
                    0);
  i = n->value;
  l->head = n->next;
  logAssignOffset("sll_6.c", 58, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "n->next", 0);
  logFree("sll_6.c", 59, "(void *)n", (void *)n);
  free((void *)n);
  logBlockExit("sll_6.c", 59);
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
  logBlockEntry("sll_6.c", 68);
  logAssignNoOffset("sll_6.c", 68, & tmp, "struct list *", "tmp", tmp, "struct list",
                    "list_create", 0);
  dumpVarsOutOfScope();
  l = tmp;
  logAssignNoOffset("sll_6.c", 68, & l, "struct list *", "l", l, "struct list", "tmp",
                    0);
  logBlockExit("sll_6.c", 69);
  list_add(l, 1);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_6.c", 70);
  list_add(l, 2);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_6.c", 71);
  list_add(l, 3);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_6.c", 72);
  i = list_remove(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_6.c", 73);
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
