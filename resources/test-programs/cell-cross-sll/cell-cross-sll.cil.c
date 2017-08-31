/* Generated by CIL v. 1.7.2 */
/* print_CIL_Input is true */

typedef int ElementType;
struct Linkage_Struct;
typedef struct Linkage_Struct *LinkPtr;
struct Linkage_Struct {
   LinkPtr Next ;
   ElementType Load ;
};
typedef struct Linkage_Struct Link;
struct Weiss_SLL_Node {
   ElementType Load01 ;
   Link Link01 ;
   ElementType Load02 ;
   Link Link02 ;
};
typedef struct Weiss_SLL_Node Node;
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
  Node node01 ;
  Node node02 ;
  LinkPtr head ;

  {
  logComment("Function Entered");
  logBlockEntry("cell-cross-sll.c", 34);
  head = & node01.Link01;
  logAssignNoOffset("cell-cross-sll.c", 34, & head, "struct Linkage_Struct *", "head",
                    head, "struct Linkage_Struct", "& node01.Link01", 0);
  node01.Link01.Next = & node02.Link02;
  logAssignOffset("cell-cross-sll.c", 36, & node01, "struct Weiss_SLL_Node", "node01",
                  & node01.Link01.Next, "struct Linkage_Struct *", "node01.Link01.Next",
                  node01.Link01.Next, "struct Linkage_Struct", "& node02.Link02",
                  0);
  node01.Link02.Next = & node02.Link01;
  logAssignOffset("cell-cross-sll.c", 37, & node01, "struct Weiss_SLL_Node", "node01",
                  & node01.Link02.Next, "struct Linkage_Struct *", "node01.Link02.Next",
                  node01.Link02.Next, "struct Linkage_Struct", "& node02.Link01",
                  0);
  node02.Link02.Next = (LinkPtr )((void *)0);
  logAssignOffset("cell-cross-sll.c", 38, & node02, "struct Weiss_SLL_Node", "node02",
                  & node02.Link02.Next, "struct Linkage_Struct *", "node02.Link02.Next",
                  node02.Link02.Next, "struct Linkage_Struct", "(LinkPtr )((void *)0)",
                  0);
  node02.Link01.Next = (LinkPtr )((void *)0);
  logAssignOffset("cell-cross-sll.c", 39, & node02, "struct Weiss_SLL_Node", "node02",
                  & node02.Link01.Next, "struct Linkage_Struct *", "node02.Link01.Next",
                  node02.Link01.Next, "struct Linkage_Struct", "(LinkPtr )((void *)0)",
                  0);
  logBlockExit("cell-cross-sll.c", 39);
  {
  logVarOutOfScope("argv", & argv);
  logVarOutOfScope("node01", & node01);
  logVarOutOfScope("node02", & node02);
  logVarOutOfScope("head", & head);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
