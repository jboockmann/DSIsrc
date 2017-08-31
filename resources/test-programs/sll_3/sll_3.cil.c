/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct node {
   struct node *next ;
   int value ;
};
typedef struct node node;
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
node *list_add(node *l , int item ) ;
node *list_remove(node *l ) ;
void list_dispose(node *current ) ;
node *list_add(node *l , int item ) 
{ 
  node *new ;
  void *tmp ;
  node *n ;
  node *head ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "node *", & l);
  logVarInScope("local", "new", "node *", & new);
  logVarInScope("local", "tmp", "void *", & tmp);
  logVarInScope("local", "n", "node *", & n);
  logVarInScope("local", "head", "node *", & head);
  logBlockEntry("sll_3.c", 17);
  tmp = malloc(sizeof(node ));
  logAssignNoOffset("sll_3.c", 17, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(node )", sizeof(node ));
  new = (node *)tmp;
  logAssignNoOffset("sll_3.c", 17, & new, "struct node *", "new", new, "struct node",
                    "(node *)tmp", 0);
  logBlockExit("sll_3.c", 17);
  if ((unsigned long )new == (unsigned long )((node *)0)) {
    abort();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("", -1);
  }
  logBlockEntry("sll_3.c", 19);
  new->next = (struct node *)0;
  logAssignOffset("sll_3.c", 19, new, "struct node", "*new", & new->next, "struct node *",
                  "new->next", new->next, "struct node", "(struct node *)0", 0);
  new->value = item;
  logBlockExit("sll_3.c", 20);
  if ((unsigned long )l == (unsigned long )((node *)0)) {
    {
    logVarOutOfScope("l", & l);
    logVarOutOfScope("new", & new);
    logVarOutOfScope("tmp", & tmp);
    logVarOutOfScope("n", & n);
    logVarOutOfScope("head", & head);
    {
    logComment("Function Exited");
    return (new);
    }
    }
  } else {
    logBlockEntry("sll_3.c", 25);
    n = l;
    logAssignNoOffset("sll_3.c", 25, & n, "struct node *", "n", n, "struct node",
                      "l", 0);
    head = l;
    logAssignNoOffset("sll_3.c", 26, & head, "struct node *", "head", head, "struct node",
                      "l", 0);
    logBlockExit("sll_3.c", 26);
    while ((unsigned long )n->next != (unsigned long )((struct node *)0)) {
      logComment("Loop-iteration-start_sll_3.c_27");
      {
      logBlockEntry("sll_3.c", 29);
      n = n->next;
      logAssignNoOffset("sll_3.c", 29, & n, "struct node *", "n", n, "struct node",
                        "n->next", 0);
      logBlockExit("sll_3.c", 29);
      }
      logComment("Loop-iteration-end");
    }
    logBlockEntry("sll_3.c", 31);
    n->next = new;
    logAssignOffset("sll_3.c", 31, n, "struct node", "*n", & n->next, "struct node *",
                    "n->next", n->next, "struct node", "new", 0);
    logBlockExit("sll_3.c", 31);
    {
    logVarOutOfScope("l", & l);
    logVarOutOfScope("new", & new);
    logVarOutOfScope("tmp", & tmp);
    logVarOutOfScope("n", & n);
    logVarOutOfScope("head", & head);
    {
    logComment("Function Exited");
    return (head);
    }
    }
  }
}
}
void list_dispose(node *current ) 
{ 
  node *oldcurrent ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "current", "node *", & current);
  logVarInScope("local", "oldcurrent", "node *", & oldcurrent);
  while ((unsigned long )current != (unsigned long )((node *)0)) {
    logComment("Loop-iteration-start_sll_3.c_38");
    {
    logBlockEntry("sll_3.c", 40);
    oldcurrent = current;
    logAssignNoOffset("sll_3.c", 40, & oldcurrent, "struct node *", "oldcurrent",
                      oldcurrent, "struct node", "current", 0);
    current = current->next;
    logAssignNoOffset("sll_3.c", 41, & current, "struct node *", "current", current,
                      "struct node", "current->next", 0);
    logFree("sll_3.c", 42, "(void *)oldcurrent", (void *)oldcurrent);
    free((void *)oldcurrent);
    logBlockExit("sll_3.c", 42);
    }
    logComment("Loop-iteration-end");
  }
  {
  logVarOutOfScope("current", & current);
  logVarOutOfScope("oldcurrent", & oldcurrent);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
node *list_remove(node *l ) 
{ 
  node *n ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "l", "node *", & l);
  logVarInScope("local", "n", "node *", & n);
  logBlockEntry("sll_3.c", 49);
  n = l;
  logAssignNoOffset("sll_3.c", 49, & n, "struct node *", "n", n, "struct node", "l",
                    0);
  l = l->next;
  logAssignNoOffset("sll_3.c", 50, & l, "struct node *", "l", l, "struct node", "l->next",
                    0);
  logFree("sll_3.c", 51, "(void *)n", (void *)n);
  free((void *)n);
  logBlockExit("sll_3.c", 51);
  {
  logVarOutOfScope("l", & l);
  logVarOutOfScope("n", & n);
  {
  logComment("Function Exited");
  return (l);
  }
  }
}
}
int main(void) 
{ 
  node *l ;

  {
  logComment("Function Entered");
  logVarInScope("local", "l", "node *", & l);
  logBlockEntry("sll_3.c", 59);
  l = (node *)((void *)0);
  logAssignNoOffset("sll_3.c", 59, & l, "struct node *", "l", l, "struct node", "(node *)((void *)0)",
                    0);
  logBlockExit("sll_3.c", 60);
  l = list_add(l, 1);
  logBlockEntry("sll_3.c", 60);
  logAssignNoOffset("sll_3.c", 60, & l, "struct node *", "l", l, "struct node", "list_add",
                    0);
  dumpVarsOutOfScope();
  logBlockExit("sll_3.c", 61);
  l = list_add(l, 2);
  logBlockEntry("sll_3.c", 61);
  logAssignNoOffset("sll_3.c", 61, & l, "struct node *", "l", l, "struct node", "list_add",
                    0);
  dumpVarsOutOfScope();
  logBlockExit("sll_3.c", 62);
  l = list_add(l, 3);
  logBlockEntry("sll_3.c", 62);
  logAssignNoOffset("sll_3.c", 62, & l, "struct node *", "l", l, "struct node", "list_add",
                    0);
  dumpVarsOutOfScope();
  logBlockExit("sll_3.c", 63);
  l = list_remove(l);
  logBlockEntry("sll_3.c", 63);
  logAssignNoOffset("sll_3.c", 63, & l, "struct node *", "l", l, "struct node", "list_remove",
                    0);
  dumpVarsOutOfScope();
  logBlockExit("sll_3.c", 64);
  list_dispose(l);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("", -1);
  {
  logVarOutOfScope("l", & l);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
