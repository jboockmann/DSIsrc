/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

struct child {
   struct child *next ;
};
struct sll {
   struct sll *next ;
   struct child child ;
};
struct big_mem_chunk {
   struct sll sll_elem_01 ;
   struct child first_child_01 ;
   struct child first_child_02 ;
   struct sll sll_elem_02 ;
   struct child second_child_01 ;
   struct child second_child_02 ;
};
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
  struct big_mem_chunk mem ;
  struct sll *iter ;

  {
  logComment("Function Entered");
  logVarInScope("formal", "argv", "char **", & argv);
  logVarInScope("local", "mem", "struct big_mem_chunk", & mem);
  logVarInScope("local", "iter", "struct sll *", & iter);
  logBlockEntry("big-mem-chunk-ovl.c", 29);
  mem.sll_elem_01.next = & mem.sll_elem_02;
  logAssignOffset("big-mem-chunk-ovl.c", 29, & mem, "struct big_mem_chunk", "mem",
                  & mem.sll_elem_01.next, "struct sll *", "mem.sll_elem_01.next",
                  mem.sll_elem_01.next, "struct sll", "& mem.sll_elem_02", 0);
  mem.sll_elem_02.next = (struct sll *)((void *)0);
  logAssignOffset("big-mem-chunk-ovl.c", 30, & mem, "struct big_mem_chunk", "mem",
                  & mem.sll_elem_02.next, "struct sll *", "mem.sll_elem_02.next",
                  mem.sll_elem_02.next, "struct sll", "(struct sll *)((void *)0)",
                  0);
  mem.sll_elem_01.child.next = & mem.first_child_01;
  logAssignOffset("big-mem-chunk-ovl.c", 33, & mem, "struct big_mem_chunk", "mem",
                  & mem.sll_elem_01.child.next, "struct child *", "mem.sll_elem_01.child.next",
                  mem.sll_elem_01.child.next, "struct child", "& mem.first_child_01",
                  0);
  mem.first_child_01.next = & mem.first_child_02;
  logAssignOffset("big-mem-chunk-ovl.c", 35, & mem, "struct big_mem_chunk", "mem",
                  & mem.first_child_01.next, "struct child *", "mem.first_child_01.next",
                  mem.first_child_01.next, "struct child", "& mem.first_child_02",
                  0);
  mem.sll_elem_02.child.next = & mem.second_child_01;
  logAssignOffset("big-mem-chunk-ovl.c", 38, & mem, "struct big_mem_chunk", "mem",
                  & mem.sll_elem_02.child.next, "struct child *", "mem.sll_elem_02.child.next",
                  mem.sll_elem_02.child.next, "struct child", "& mem.second_child_01",
                  0);
  mem.second_child_01.next = & mem.second_child_02;
  logAssignOffset("big-mem-chunk-ovl.c", 40, & mem, "struct big_mem_chunk", "mem",
                  & mem.second_child_01.next, "struct child *", "mem.second_child_01.next",
                  mem.second_child_01.next, "struct child", "& mem.second_child_02",
                  0);
  iter = & mem.sll_elem_01;
  logAssignNoOffset("big-mem-chunk-ovl.c", 43, & iter, "struct sll *", "iter", iter,
                    "struct sll", "& mem.sll_elem_01", 0);
  logBlockExit("big-mem-chunk-ovl.c", 43);
  while ((unsigned long )iter != (unsigned long )((void *)0)) {
    logComment("Loop-iteration-start_big-mem-chunk-ovl.c_44");
    {
    logBlockEntry("big-mem-chunk-ovl.c", 44);
    iter = iter->next;
    logAssignNoOffset("big-mem-chunk-ovl.c", 44, & iter, "struct sll *", "iter", iter,
                      "struct sll", "iter->next", 0);
    logBlockExit("big-mem-chunk-ovl.c", 44);
    }
    logComment("Loop-iteration-end");
  }
  {
  logVarOutOfScope("argv", & argv);
  logVarOutOfScope("mem", & mem);
  logVarOutOfScope("iter", & iter);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
