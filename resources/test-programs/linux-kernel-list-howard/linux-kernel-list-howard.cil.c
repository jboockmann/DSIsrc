/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
struct __anonstruct_inner1_t_29 {
   int yy ;
   int zz ;
   struct list_head list ;
};
typedef struct __anonstruct_inner1_t_29 inner1_t;
struct __anonstruct_inner2_t_30 {
   int xx ;
   inner1_t inner1 ;
};
typedef struct __anonstruct_inner2_t_30 inner2_t;
struct __anonstruct_list_element_31 {
   int payload ;
   inner2_t inner2 ;
};
typedef struct __anonstruct_list_element_31 list_element;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rand)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
__inline static void INIT_LIST_HEAD(struct list_head *list ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "list", "struct list_head *", & list);
  logBlockEntry("list.h", 51);
  list->next = list;
  logAssignOffset("list.h", 51, list, "struct list_head", "*list", & list->next, "struct list_head *",
                  "list->next", list->next, "struct list_head", "list", 0);
  list->prev = list;
  logAssignOffset("list.h", 52, list, "struct list_head", "*list", & list->prev, "struct list_head *",
                  "list->prev", list->prev, "struct list_head", "list", 0);
  logBlockExit("list.h", 52);
  {
  logVarOutOfScope("list", & list);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
__inline static void __list_add(struct list_head *new , struct list_head *prev , struct list_head *next ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "new", "struct list_head *", & new);
  logVarInScope("formal", "prev", "struct list_head *", & prev);
  logVarInScope("formal", "next", "struct list_head *", & next);
  logBlockEntry("list.h", 66);
  next->prev = new;
  logAssignOffset("list.h", 66, next, "struct list_head", "*next", & next->prev, "struct list_head *",
                  "next->prev", next->prev, "struct list_head", "new", 0);
  new->next = next;
  logAssignOffset("list.h", 67, new, "struct list_head", "*new", & new->next, "struct list_head *",
                  "new->next", new->next, "struct list_head", "next", 0);
  new->prev = prev;
  logAssignOffset("list.h", 68, new, "struct list_head", "*new", & new->prev, "struct list_head *",
                  "new->prev", new->prev, "struct list_head", "prev", 0);
  prev->next = new;
  logAssignOffset("list.h", 69, prev, "struct list_head", "*prev", & prev->next, "struct list_head *",
                  "prev->next", prev->next, "struct list_head", "new", 0);
  logBlockExit("list.h", 69);
  {
  logVarOutOfScope("new", & new);
  logVarOutOfScope("prev", & prev);
  logVarOutOfScope("next", & next);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
__inline static void list_add(struct list_head *new , struct list_head *head ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "new", "struct list_head *", & new);
  logVarInScope("formal", "head", "struct list_head *", & head);
  __list_add(new, head, head->next);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("", -1);
  {
  logVarOutOfScope("new", & new);
  logVarOutOfScope("head", & head);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
__inline static void __list_del(struct list_head *prev , struct list_head *next ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "prev", "struct list_head *", & prev);
  logVarInScope("formal", "next", "struct list_head *", & next);
  logBlockEntry("list.h", 113);
  next->prev = prev;
  logAssignOffset("list.h", 113, next, "struct list_head", "*next", & next->prev,
                  "struct list_head *", "next->prev", next->prev, "struct list_head",
                  "prev", 0);
  prev->next = next;
  logAssignOffset("list.h", 114, prev, "struct list_head", "*prev", & prev->next,
                  "struct list_head *", "prev->next", prev->next, "struct list_head",
                  "next", 0);
  logBlockExit("list.h", 114);
  {
  logVarOutOfScope("prev", & prev);
  logVarOutOfScope("next", & next);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
__inline static void list_del(struct list_head *entry ) 
{ 


  {
  logComment("Function Entered");
  logVarInScope("formal", "entry", "struct list_head *", & entry);
  __list_del(entry->prev, entry->next);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  entry->next = (struct list_head *)((void *)1048832 + 0);
  logAssignOffset("list.h", 132, entry, "struct list_head", "*entry", & entry->next,
                  "struct list_head *", "entry->next", entry->next, "struct list_head",
                  "(struct list_head *)((void *)1048832 + 0)", 0);
  entry->prev = (struct list_head *)((void *)2097664 + 0);
  logAssignOffset("list.h", 133, entry, "struct list_head", "*entry", & entry->prev,
                  "struct list_head *", "entry->prev", entry->prev, "struct list_head",
                  "(struct list_head *)((void *)2097664 + 0)", 0);
  logBlockExit("list.h", 133);
  {
  logVarOutOfScope("entry", & entry);
  {
  logComment("Function Exited");
  return;
  }
  }
}
}
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
int alloc_and_link(int yy , int zz , int xx , int payload , struct list_head *head ) 
{ 
  list_element *pitem ;
  void *tmp ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "head", "struct list_head *", & head);
  logVarInScope("local", "pitem", "list_element *", & pitem);
  logVarInScope("local", "tmp", "void *", & tmp);
  logBlockEntry("linux-kernel-list-howard.c", 41);
  tmp = malloc(sizeof(list_element ));
  logAssignNoOffset("linux-kernel-list-howard.c", 41, & tmp, "void *", "tmp", tmp,
                    "void", "malloc", 1);
  logMallocInfo("sizeof(list_element )", sizeof(list_element ));
  pitem = (list_element *)tmp;
  logAssignNoOffset("linux-kernel-list-howard.c", 41, & pitem, "struct __anonstruct_list_element_31 *",
                    "pitem", pitem, "struct __anonstruct_list_element_31", "(list_element *)tmp",
                    0);
  pitem->payload = payload;
  pitem->inner2.xx = xx;
  pitem->inner2.inner1.yy = yy;
  pitem->inner2.inner1.zz = zz;
  logBlockExit("linux-kernel-list-howard.c", 47);
  list_add(& pitem->inner2.inner1.list, head);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  logBlockExit("", -1);
  {
  logVarOutOfScope("head", & head);
  logVarOutOfScope("pitem", & pitem);
  logVarOutOfScope("tmp", & tmp);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
int main(int argc , char **argv ) 
{ 
  int i ;
  int payload02 ;
  inner1_t *pinner1 ;
  inner2_t *pinner2 ;
  list_element *pelem ;
  unsigned int offset ;
  struct list_head *pnext ;
  struct list_head phead ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int sum ;
  struct list_head  const  *__mptr ;
  inner1_t const   *__mptr___0 ;
  inner2_t const   *__mptr___1 ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "argv", "char **", & argv);
  logVarInScope("local", "pinner1", "inner1_t *", & pinner1);
  logVarInScope("local", "pinner2", "inner2_t *", & pinner2);
  logVarInScope("local", "pelem", "list_element *", & pelem);
  logVarInScope("local", "pnext", "struct list_head *", & pnext);
  logVarInScope("local", "phead", "struct list_head", & phead);
  logVarInScope("local", "__mptr", "struct list_head  const  *", & __mptr);
  logVarInScope("local", "__mptr___0", "inner1_t const   *", & __mptr___0);
  logVarInScope("local", "__mptr___1", "inner2_t const   *", & __mptr___1);
  logBlockEntry("linux-kernel-list-howard.c", 54);
  payload02 = 2;
  logBlockExit("linux-kernel-list-howard.c", 64);
  INIT_LIST_HEAD(& phead);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  i = 0;
  logBlockExit("linux-kernel-list-howard.c", 66);
  while (i < 100) {
    logComment("Loop-iteration-start_linux-kernel-list-howard.c_66");
    {
    tmp = rand();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("linux-kernel-list-howard.c", 67);
    tmp___0 = rand();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("linux-kernel-list-howard.c", 67);
    tmp___1 = rand();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("linux-kernel-list-howard.c", 67);
    tmp___2 = rand();
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logBlockExit("linux-kernel-list-howard.c", 67);
    alloc_and_link(tmp___2 % 10, tmp___1 % 10, tmp___0 % 10, tmp % 10, & phead);
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    i ++;
    logBlockExit("linux-kernel-list-howard.c", 66);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("linux-kernel-list-howard.c", 70);
  sum = 0;
  pnext = phead.next;
  logAssignNoOffset("linux-kernel-list-howard.c", 71, & pnext, "struct list_head *",
                    "pnext", pnext, "struct list_head", "phead.next", 0);
  logBlockExit("linux-kernel-list-howard.c", 71);
  while ((unsigned long )pnext != (unsigned long )(& phead)) {
    logComment("Loop-iteration-start_linux-kernel-list-howard.c_71");
    {
    logBlockEntry("linux-kernel-list-howard.c", 72);
    __mptr = (struct list_head  const  *)pnext;
    logAssignNoOffset("linux-kernel-list-howard.c", 72, & __mptr, "struct list_head  const  *",
                      "__mptr", __mptr, "struct list_head  const", "(struct list_head  const  *)pnext",
                      0);
    pinner1 = (inner1_t *)((char *)__mptr - (size_t )(& ((inner1_t *)0)->list));
    logAssignNoOffset("linux-kernel-list-howard.c", 72, & pinner1, "struct __anonstruct_inner1_t_29 *",
                      "pinner1", pinner1, "struct __anonstruct_inner1_t_29", "(inner1_t *)((char *)__mptr - (size_t )(& ((inner1_t *)0)->list))",
                      0);
    __mptr___0 = (inner1_t const   *)pinner1;
    logAssignNoOffset("linux-kernel-list-howard.c", 73, & __mptr___0, "struct __anonstruct_inner1_t_29  const  *",
                      "__mptr___0", __mptr___0, "struct __anonstruct_inner1_t_29  const",
                      "(inner1_t const   *)pinner1", 0);
    pinner2 = (inner2_t *)((char *)__mptr___0 - (size_t )(& ((inner2_t *)0)->inner1));
    logAssignNoOffset("linux-kernel-list-howard.c", 73, & pinner2, "struct __anonstruct_inner2_t_30 *",
                      "pinner2", pinner2, "struct __anonstruct_inner2_t_30", "(inner2_t *)((char *)__mptr___0 - (size_t )(& ((inner2_t *)0)->inner1))",
                      0);
    __mptr___1 = (inner2_t const   *)pinner2;
    logAssignNoOffset("linux-kernel-list-howard.c", 74, & __mptr___1, "struct __anonstruct_inner2_t_30  const  *",
                      "__mptr___1", __mptr___1, "struct __anonstruct_inner2_t_30  const",
                      "(inner2_t const   *)pinner2", 0);
    pelem = (list_element *)((char *)__mptr___1 - (size_t )(& ((list_element *)0)->inner2));
    logAssignNoOffset("linux-kernel-list-howard.c", 74, & pelem, "struct __anonstruct_list_element_31 *",
                      "pelem", pelem, "struct __anonstruct_list_element_31", "(list_element *)((char *)__mptr___1 - (size_t )(& ((list_element *)0)->inner2))",
                      0);
    offset = (unsigned int )((unsigned long )pnext - (unsigned long )pelem);
    logBlockExit("linux-kernel-list-howard.c", 76);
    printf((char const   * __restrict  )"offset : %lx, pnext : %lx, pelem  : %lx\n",
           offset, pnext, pelem);
    logBlockEntry("linux-kernel-list-howard.c", 77);
    sum += ((pelem->payload + pinner2->xx) + pinner1->yy) + pinner1->zz;
    pnext = pnext->next;
    logAssignNoOffset("linux-kernel-list-howard.c", 71, & pnext, "struct list_head *",
                      "pnext", pnext, "struct list_head", "pnext->next", 0);
    logBlockExit("linux-kernel-list-howard.c", 71);
    }
    logComment("Loop-iteration-end");
  }
  logBlockEntry("linux-kernel-list-howard.c", 79);
  pnext = phead.next;
  logAssignNoOffset("linux-kernel-list-howard.c", 79, & pnext, "struct list_head *",
                    "pnext", pnext, "struct list_head", "phead.next", 0);
  logBlockExit("linux-kernel-list-howard.c", 79);
  while ((unsigned long )pnext != (unsigned long )(& phead)) {
    logComment("Loop-iteration-start_linux-kernel-list-howard.c_80");
    {
    logBlockEntry("linux-kernel-list-howard.c", 81);
    pelem = (list_element *)((unsigned long )pnext - (unsigned long )offset);
    logAssignNoOffset("linux-kernel-list-howard.c", 81, & pelem, "struct __anonstruct_list_element_31 *",
                      "pelem", pelem, "struct __anonstruct_list_element_31", "(list_element *)((unsigned long )pnext - (unsigned long )offset)",
                      0);
    logBlockExit("linux-kernel-list-howard.c", 82);
    printf((char const   * __restrict  )"New, offset : %lx, pnext : %lx, pelem : %lx\n",
           offset, pnext, pelem);
    logBlockEntry("linux-kernel-list-howard.c", 86);
    pnext = pnext->next;
    logAssignNoOffset("linux-kernel-list-howard.c", 86, & pnext, "struct list_head *",
                      "pnext", pnext, "struct list_head", "pnext->next", 0);
    logBlockExit("linux-kernel-list-howard.c", 87);
    list_del(& pelem->inner2.inner1.list);
    logBlockEntry("", -1);
    dumpVarsOutOfScope();
    logFree("linux-kernel-list-howard.c", 88, "(void *)pelem", (void *)pelem);
    free((void *)pelem);
    logBlockExit("linux-kernel-list-howard.c", 88);
    }
    logComment("Loop-iteration-end");
  }
  printf((char const   * __restrict  )"sum %d\n", sum);
  {
  logVarOutOfScope("argv", & argv);
  logVarOutOfScope("pinner1", & pinner1);
  logVarOutOfScope("pinner2", & pinner2);
  logVarOutOfScope("pelem", & pelem);
  logVarOutOfScope("pnext", & pnext);
  logVarOutOfScope("phead", & phead);
  logVarOutOfScope("__mptr", & __mptr);
  logVarOutOfScope("__mptr___0", & __mptr___0);
  logVarOutOfScope("__mptr___1", & __mptr___1);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
