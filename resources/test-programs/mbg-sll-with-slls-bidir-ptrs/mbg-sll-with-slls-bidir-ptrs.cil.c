/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct SLL;
struct SLL;
struct Child_SLL {
   int payload ;
   struct Child_SLL *next ;
   struct SLL *parent ;
};
struct SLL {
   struct SLL *next ;
   struct Child_SLL *child ;
};
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
int const   NUM_OPS_WEISS_STACK  ;
int const   INSERT_PROB_WEISS_STACK  ;
int const   DELETE_PROB_WEISS_STACK  ;
int const   NUM_OPS_GALILEO_QUEUE  ;
int const   INSERT_PROB_GALILEO_QUEUE  ;
int const   DELETE_PROB_GALILEO_QUEUE  ;
int const   OPID_SLL_INSERT  ;
int const   OPID_SLL_REMOVE  ;
int const   OPID_DLL_INSERT  ;
int const   OPID_DLL_REMOVE  ;
int const   OPID_SLL_INSERT_FRONT  ;
int const   OPID_SLL_INSERT_MIDDLE  ;
int const   OPID_SLL_INSERT_BACK  ;
int const   OPID_SLL_INSERT_FRONT_DH  ;
int const   OPID_SLL_REMOVE_FRONT  ;
int const   OPID_SLL_REMOVE_MIDDLE  ;
int const   OPID_SLL_REMOVE_BACK  ;
int const   OPID_SLL_REMOVE_FRONT_DH  ;
int const   OPID_DLL_INSERT_FRONT  ;
int const   OPID_DLL_INSERT_MIDDLE  ;
int const   OPID_DLL_INSERT_BACK  ;
int const   OPID_DLL_INSERT_FRONT_DH  ;
int const   OPID_DLL_REMOVE_FRONT  ;
int const   OPID_DLL_REMOVE_MIDDLE  ;
int const   OPID_DLL_REMOVE_BACK  ;
int const   OPID_DLL_REMOVE_FRONT_DH  ;
int const   OPID_BTREE_INSERT  ;
int const   OPID_BTREE_REMOVE  ;
char const   *operationLocationStrings[5]  ;
int main(int argc , char **argv ) 
{ 
  struct SLL *head ;
  struct SLL *iter ;
  void *tmp ;
  int i ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "argv", "char **", & argv);
  logVarInScope("local", "head", "struct SLL *", & head);
  logVarInScope("local", "iter", "struct SLL *", & iter);
  logVarInScope("local", "tmp", "void *", & tmp);
  logVarInScope("local", "tmp___0", "void *", & tmp___0);
  logVarInScope("local", "tmp___1", "void *", & tmp___1);
  logVarInScope("local", "tmp___2", "void *", & tmp___2);
  logBlockEntry("mbg-sll-with-slls-bidir-ptrs.c", 29);
  tmp = malloc(sizeof(*head));
  logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 29, & tmp, "void *", "tmp",
                    tmp, "void", "malloc", 1);
  logMallocInfo("sizeof(*head)", sizeof(*head));
  head = (struct SLL *)tmp;
  logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 29, & head, "struct SLL *",
                    "head", head, "struct SLL", "(struct SLL *)tmp", 0);
  head->next = (struct SLL *)((void *)0);
  logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 30, head, "struct SLL", "*head",
                  & head->next, "struct SLL *", "head->next", head->next, "struct SLL",
                  "(struct SLL *)((void *)0)", 0);
  iter = head;
  logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 32, & iter, "struct SLL *",
                    "iter", iter, "struct SLL", "head", 0);
  i = 0;
  logBlockExit("mbg-sll-with-slls-bidir-ptrs.c", 34);
  while (i < 3) {
    logComment("Loop-iteration-start_mbg-sll-with-slls-bidir-ptrs.c_34");
    {
    logBlockEntry("mbg-sll-with-slls-bidir-ptrs.c", 35);
    tmp___0 = malloc(sizeof(*iter));
    logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 35, & tmp___0, "void *", "tmp___0",
                      tmp___0, "void", "malloc", 1);
    logMallocInfo("sizeof(*iter)", sizeof(*iter));
    iter->next = (struct SLL *)tmp___0;
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 35, iter, "struct SLL", "*iter",
                    & iter->next, "struct SLL *", "iter->next", iter->next, "struct SLL",
                    "(struct SLL *)tmp___0", 0);
    iter = iter->next;
    logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 36, & iter, "struct SLL *",
                      "iter", iter, "struct SLL", "iter->next", 0);
    iter->next = (struct SLL *)((void *)0);
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 37, iter, "struct SLL", "*iter",
                    & iter->next, "struct SLL *", "iter->next", iter->next, "struct SLL",
                    "(struct SLL *)((void *)0)", 0);
    i ++;
    logBlockExit("mbg-sll-with-slls-bidir-ptrs.c", 34);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("mbg-sll-with-slls-bidir-ptrs.c", 41);
  iter = head;
  logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 41, & iter, "struct SLL *",
                    "iter", iter, "struct SLL", "head", 0);
  logBlockExit("mbg-sll-with-slls-bidir-ptrs.c", 41);
  while ((unsigned long )iter != (unsigned long )((void *)0)) {
    logComment("Loop-iteration-start_mbg-sll-with-slls-bidir-ptrs.c_41");
    {
    logBlockEntry("mbg-sll-with-slls-bidir-ptrs.c", 43);
    tmp___1 = malloc(sizeof(*(iter->child)));
    logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 43, & tmp___1, "void *", "tmp___1",
                      tmp___1, "void", "malloc", 1);
    logMallocInfo("sizeof(*(iter->child))", sizeof(*(iter->child)));
    iter->child = (struct Child_SLL *)tmp___1;
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 43, iter, "struct SLL", "*iter",
                    & iter->child, "struct Child_SLL *", "iter->child", iter->child,
                    "struct Child_SLL", "(struct Child_SLL *)tmp___1", 0);
    tmp___2 = malloc(sizeof(*(iter->child)));
    logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 45, & tmp___2, "void *", "tmp___2",
                      tmp___2, "void", "malloc", 1);
    logMallocInfo("sizeof(*(iter->child))", sizeof(*(iter->child)));
    (iter->child)->next = (struct Child_SLL *)tmp___2;
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 45, iter->child, "struct Child_SLL",
                    "*(iter->child)", & (iter->child)->next, "struct Child_SLL *",
                    "(iter->child)->next", (iter->child)->next, "struct Child_SLL",
                    "(struct Child_SLL *)tmp___2", 0);
    ((iter->child)->next)->next = (struct Child_SLL *)((void *)0);
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 47, (iter->child)->next, "struct Child_SLL",
                    "*((iter->child)->next)", & ((iter->child)->next)->next, "struct Child_SLL *",
                    "((iter->child)->next)->next", ((iter->child)->next)->next, "struct Child_SLL",
                    "(struct Child_SLL *)((void *)0)", 0);
    (iter->child)->parent = iter;
    logAssignOffset("mbg-sll-with-slls-bidir-ptrs.c", 49, iter->child, "struct Child_SLL",
                    "*(iter->child)", & (iter->child)->parent, "struct SLL *", "(iter->child)->parent",
                    (iter->child)->parent, "struct SLL", "iter", 0);
    iter = iter->next;
    logAssignNoOffset("mbg-sll-with-slls-bidir-ptrs.c", 41, & iter, "struct SLL *",
                      "iter", iter, "struct SLL", "iter->next", 0);
    logBlockExit("mbg-sll-with-slls-bidir-ptrs.c", 41);
    }
    logComment("Loop-iteration-end");
  }
  {
  logVarOutOfScope("argv", & argv);
  logVarOutOfScope("head", & head);
  logVarOutOfScope("iter", & iter);
  logVarOutOfScope("tmp", & tmp);
  logVarOutOfScope("tmp___0", & tmp___0);
  logVarOutOfScope("tmp___1", & tmp___1);
  logVarOutOfScope("tmp___2", & tmp___2);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
