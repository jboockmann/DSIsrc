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
struct node *node_malloc(int item ) ;
void list_add(struct list *l , struct node *new ) ;
int list_remove(struct list *l ) ;
void list_dispose(struct list *l ) ;
void list_add(struct list *l , struct node *new ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "struct list *", & l);
  logVarInScope("formal", "new", "struct node *", & new);
  if ((unsigned long )l->head == (unsigned long )((struct node *)0)) {
    logBlockEntry("sll_5.c", 23);
    l->head = new;
    logAssignOffset("sll_5.c", 23, l, "struct list", "*l", & l->head, "struct node *",
                    "l->head", l->head, "struct node", "new", 0);
    logBlockExit("sll_5.c", 23);
  } else {
    logBlockEntry("sll_5.c", 25);
    new->next = l->head;
    logAssignOffset("sll_5.c", 25, new, "struct node", "*new", & new->next, "struct node *",
                    "new->next", new->next, "struct node", "l->head", 0);
    l->head = new;
    logAssignOffset("sll_5.c", 26, l, "struct list", "*l", & l->head, "struct node *",
                    "l->head", l->head, "struct node", "new", 0);
    logBlockExit("sll_5.c", 26);
  }
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("new", & new);
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
  logBlockEntry("sll_5.c", 32);
  tmp = malloc(sizeof(struct list ));
  logAssignNoOffset("sll_5.c", 32, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct list )", sizeof(struct list ));
  l = (struct list *)tmp;
  logAssignNoOffset("sll_5.c", 32, & l, "struct list *", "l", l, "struct list", "(struct list *)tmp",
                    0);
  logBlockExit("sll_5.c", 32);
  if ((unsigned long )l == (unsigned long )((struct list *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_5.c", 34);
  l->head = (struct node *)0;
  logAssignOffset("sll_5.c", 34, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "(struct node *)0", 0);
  logBlockExit("sll_5.c", 34);
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
  logBlockEntry("sll_5.c", 40);
  current = l->head;
  logAssignNoOffset("sll_5.c", 40, & current, "struct node *", "current", current,
                    "struct node", "l->head", 0);
  logBlockExit("sll_5.c", 40);
  while ((unsigned long )current != (unsigned long )((struct node *)0)) {
    logComment("Loop-iteration-start_sll_5.c_41");
    {
    logBlockEntry("sll_5.c", 43);
    oldcurrent = current;
    logAssignNoOffset("sll_5.c", 43, & oldcurrent, "struct node *", "oldcurrent",
                      oldcurrent, "struct node", "current", 0);
    current = current->next;
    logAssignNoOffset("sll_5.c", 44, & current, "struct node *", "current", current,
                      "struct node", "current->next", 0);
    logFree("sll_5.c", 45, "(void *)oldcurrent", (void *)oldcurrent);
    free((void *)oldcurrent);
    logBlockExit("sll_5.c", 45);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("", -1);
  logFree("sll_5.c", 47, "(void *)l", (void *)l);
  free((void *)l);
  logBlockExit("sll_5.c", 47);
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
  logBlockEntry("sll_5.c", 53);
  n = l->head;
  logAssignNoOffset("sll_5.c", 53, & n, "struct node *", "n", n, "struct node", "l->head",
                    0);
  i = n->value;
  l->head = n->next;
  logAssignOffset("sll_5.c", 55, l, "struct list", "*l", & l->head, "struct node *",
                  "l->head", l->head, "struct node", "n->next", 0);
  logFree("sll_5.c", 56, "(void *)n", (void *)n);
  free((void *)n);
  logBlockExit("sll_5.c", 56);
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
struct node *node_malloc(int item ) 
{ 
  struct node *new ;
  void *tmp ;

  {
  logComment("Function Entered");
  logVarInScope("local", "new", "struct node *", & new);
  logVarInScope("local", "tmp", "void *", & tmp);
  logBlockEntry("sll_5.c", 62);
  tmp = malloc(sizeof(struct node ));
  logAssignNoOffset("sll_5.c", 62, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(struct node )", sizeof(struct node ));
  new = (struct node *)tmp;
  logAssignNoOffset("sll_5.c", 62, & new, "struct node *", "new", new, "struct node",
                    "(struct node *)tmp", 0);
  logBlockExit("sll_5.c", 62);
  if ((unsigned long )new == (unsigned long )((struct node *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_5.c", 64);
  new->next = (struct node *)0;
  logAssignOffset("sll_5.c", 64, new, "struct node", "*new", & new->next, "struct node *",
                  "new->next", new->next, "struct node", "(struct node *)0", 0);
  new->value = item;
  logBlockExit("sll_5.c", 65);
  {
  logVarOutOfScope("new", & new);
  logVarOutOfScope("tmp", & tmp);
  {
  logComment("Function Exited");
  return (new);
  }
  }
}
}
int main(void) 
{ 
  int i ;
  struct list *l ;
  struct list *tmp ;
  struct node *n1 ;
  struct node *tmp___0 ;
  struct node *n2 ;
  struct node *tmp___1 ;
  struct node *n3 ;
  struct node *tmp___2 ;

  {
  logComment("Function Entered");
  logVarInScope("local", "l", "struct list *", & l);
  logVarInScope("local", "tmp", "struct list *", & tmp);
  logVarInScope("local", "n1", "struct node *", & n1);
  logVarInScope("local", "tmp___0", "struct node *", & tmp___0);
  logVarInScope("local", "n2", "struct node *", & n2);
  logVarInScope("local", "tmp___1", "struct node *", & tmp___1);
  logVarInScope("local", "n3", "struct node *", & n3);
  logVarInScope("local", "tmp___2", "struct node *", & tmp___2);
  tmp = list_create();
  logBlockEntry("sll_5.c", 74);
  logAssignNoOffset("sll_5.c", 74, & tmp, "struct list *", "tmp", tmp, "struct list",
                    "list_create", 0);
  dumpVarsOutOfScope();
  l = tmp;
  logAssignNoOffset("sll_5.c", 74, & l, "struct list *", "l", l, "struct list", "tmp",
                    0);
  logBlockExit("sll_5.c", 75);
  tmp___0 = node_malloc(1);
  logBlockEntry("sll_5.c", 75);
  logAssignNoOffset("sll_5.c", 75, & tmp___0, "struct node *", "tmp___0", tmp___0,
                    "struct node", "node_malloc", 0);
  dumpVarsOutOfScope();
  n1 = tmp___0;
  logAssignNoOffset("sll_5.c", 75, & n1, "struct node *", "n1", n1, "struct node",
                    "tmp___0", 0);
  logBlockExit("sll_5.c", 76);
  tmp___1 = node_malloc(2);
  logBlockEntry("sll_5.c", 76);
  logAssignNoOffset("sll_5.c", 76, & tmp___1, "struct node *", "tmp___1", tmp___1,
                    "struct node", "node_malloc", 0);
  dumpVarsOutOfScope();
  n2 = tmp___1;
  logAssignNoOffset("sll_5.c", 76, & n2, "struct node *", "n2", n2, "struct node",
                    "tmp___1", 0);
  logBlockExit("sll_5.c", 77);
  tmp___2 = node_malloc(3);
  logBlockEntry("sll_5.c", 77);
  logAssignNoOffset("sll_5.c", 77, & tmp___2, "struct node *", "tmp___2", tmp___2,
                    "struct node", "node_malloc", 0);
  dumpVarsOutOfScope();
  n3 = tmp___2;
  logAssignNoOffset("sll_5.c", 77, & n3, "struct node *", "n3", n3, "struct node",
                    "tmp___2", 0);
  logBlockExit("sll_5.c", 78);
  list_add(l, n1);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_5.c", 79);
  list_add(l, n2);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_5.c", 80);
  list_add(l, n3);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_5.c", 81);
  i = list_remove(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("sll_5.c", 82);
  list_dispose(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("", -1);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("tmp", & tmp);
  logVarOutOfScope("n1", & n1);
  logVarOutOfScope("tmp___0", & tmp___0);
  logVarOutOfScope("n2", & n2);
  logVarOutOfScope("tmp___1", & tmp___1);
  logVarOutOfScope("n3", & n3);
  logVarOutOfScope("tmp___2", & tmp___2);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
