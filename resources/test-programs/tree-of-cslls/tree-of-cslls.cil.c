/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct TListNode {
   struct TListNode *next ;
};
typedef struct TListNode ListNode;
struct TTreeNode {
   struct TTreeNode *left ;
   struct TTreeNode *right ;
   ListNode *list ;
};
typedef struct TTreeNode TreeNode;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rand)(void) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
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
int main(void) 
{ 
  int i ;
  int e ;
  TreeNode *tree ;
  void *tmp ;
  TreeNode *tmp___0 ;
  ListNode *tmpList ;
  void *tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;
  TreeNode *newNode ;
  void *tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  TreeNode *pred ;

  {
  logComment("Function Entered");
  logVarInScope("local", "tree", "TreeNode *", & tree);
  logVarInScope("local", "tmp", "void *", & tmp);
  logVarInScope("local", "tmp___0", "TreeNode *", & tmp___0);
  logVarInScope("local", "tmpList", "ListNode *", & tmpList);
  logVarInScope("local", "tmp___1", "void *", & tmp___1);
  logVarInScope("local", "tmp___2", "void *", & tmp___2);
  logVarInScope("local", "newNode", "TreeNode *", & newNode);
  logVarInScope("local", "tmp___4", "void *", & tmp___4);
  logVarInScope("local", "tmp___5", "void *", & tmp___5);
  logVarInScope("local", "tmp___8", "void *", & tmp___8);
  logVarInScope("local", "tmp___9", "void *", & tmp___9);
  logVarInScope("local", "pred", "TreeNode *", & pred);
  logBlockEntry("tree-of-cslls.c", 31);
  tmp = malloc(sizeof(*tree));
  logAssignNoOffset("tree-of-cslls.c", 31, & tmp, "void *", "tmp", tmp, "void", "malloc",
                    1);
  logMallocInfo("sizeof(*tree)", sizeof(*tree));
  tree = (TreeNode *)tmp;
  logAssignNoOffset("tree-of-cslls.c", 31, & tree, "struct TTreeNode *", "tree", tree,
                    "struct TTreeNode", "(TreeNode *)tmp", 0);
  tree->left = (struct TTreeNode *)((void *)0);
  logAssignOffset("tree-of-cslls.c", 35, tree, "struct TTreeNode", "*tree", & tree->left,
                  "struct TTreeNode *", "tree->left", tree->left, "struct TTreeNode",
                  "(struct TTreeNode *)((void *)0)", 0);
  tree->right = (struct TTreeNode *)((void *)0);
  logAssignOffset("tree-of-cslls.c", 36, tree, "struct TTreeNode", "*tree", & tree->right,
                  "struct TTreeNode *", "tree->right", tree->right, "struct TTreeNode",
                  "(struct TTreeNode *)((void *)0)", 0);
  tmp___1 = malloc(sizeof(ListNode ));
  logAssignNoOffset("tree-of-cslls.c", 37, & tmp___1, "void *", "tmp___1", tmp___1,
                    "void", "malloc", 1);
  logMallocInfo("sizeof(ListNode )", sizeof(ListNode ));
  tree->list = (ListNode *)tmp___1;
  logAssignOffset("tree-of-cslls.c", 37, tree, "struct TTreeNode", "*tree", & tree->list,
                  "struct TListNode *", "tree->list", tree->list, "struct TListNode",
                  "(ListNode *)tmp___1", 0);
  (tree->list)->next = tree->list;
  logAssignOffset("tree-of-cslls.c", 38, tree->list, "struct TListNode", "*(tree->list)",
                  & (tree->list)->next, "struct TListNode *", "(tree->list)->next",
                  (tree->list)->next, "struct TListNode", "tree->list", 0);
  logBlockExit("tree-of-cslls.c", 41);
  srand(567386U);
  logBlockEntry("", -1);
  dumpVarsOutOfScope();
  e = 0;
  logBlockExit("tree-of-cslls.c", 44);
  while (e < 7) {
    logComment("Loop-iteration-start_tree-of-cslls.c_44");
    {
    logBlockEntry("tree-of-cslls.c", 46);
    tmp___2 = malloc(sizeof(ListNode ));
    logAssignNoOffset("tree-of-cslls.c", 46, & tmp___2, "void *", "tmp___2", tmp___2,
                      "void", "malloc", 1);
    logMallocInfo("sizeof(ListNode )", sizeof(ListNode ));
    tmpList = (ListNode *)tmp___2;
    logAssignNoOffset("tree-of-cslls.c", 46, & tmpList, "struct TListNode *", "tmpList",
                      tmpList, "struct TListNode", "(ListNode *)tmp___2", 0);
    tmpList->next = (tree->list)->next;
    logAssignOffset("tree-of-cslls.c", 47, tmpList, "struct TListNode", "*tmpList",
                    & tmpList->next, "struct TListNode *", "tmpList->next", tmpList->next,
                    "struct TListNode", "(tree->list)->next", 0);
    (tree->list)->next = tmpList;
    logAssignOffset("tree-of-cslls.c", 48, tree->list, "struct TListNode", "*(tree->list)",
                    & (tree->list)->next, "struct TListNode *", "(tree->list)->next",
                    (tree->list)->next, "struct TListNode", "tmpList", 0);
    e ++;
    logBlockExit("tree-of-cslls.c", 44);
    }
    logComment("Loop-iteration-end");
  }
  while (i < 20) {
    logComment("Loop-iteration-start_tree-of-cslls.c_53");
    {
    logBlockEntry("tree-of-cslls.c", 55);
    tmp___0 = tree;
    logAssignNoOffset("tree-of-cslls.c", 55, & tmp___0, "struct TTreeNode *", "tmp___0",
                      tmp___0, "struct TTreeNode", "tree", 0);
    logBlockExit("tree-of-cslls.c", 55);
    while (1) {
      if ((unsigned long )((void *)0) != (unsigned long )tmp___0->left) {
        if (! ((unsigned long )((void *)0) != (unsigned long )tmp___0->right)) {
          {
          logComment("Loop-iteration-end");
          break;
          }
        }
      } else {
        {
        logComment("Loop-iteration-end");
        break;
        }
      }
      tmp___3 = rand();
      logBlockEntry("", -1);
      dumpVarsOutOfScope();
      logBlockExit("", -1);
      if (tmp___3 % 2) {
        logBlockEntry("tree-of-cslls.c", 62);
        tmp___0 = tmp___0->left;
        logAssignNoOffset("tree-of-cslls.c", 62, & tmp___0, "struct TTreeNode *",
                          "tmp___0", tmp___0, "struct TTreeNode", "tmp___0->left",
                          0);
        logBlockExit("tree-of-cslls.c", 62);
      } else {
        logBlockEntry("tree-of-cslls.c", 66);
        tmp___0 = tmp___0->right;
        logAssignNoOffset("tree-of-cslls.c", 66, & tmp___0, "struct TTreeNode *",
                          "tmp___0", tmp___0, "struct TTreeNode", "tmp___0->right",
                          0);
        logBlockExit("tree-of-cslls.c", 66);
      }
    }
    if ((unsigned long )((void *)0) == (unsigned long )tmp___0->left) {
      tmp___7 = rand();
      logBlockEntry("", -1);
      dumpVarsOutOfScope();
      logBlockExit("", -1);
      if (tmp___7 % 2) {
        logBlockEntry("tree-of-cslls.c", 74);
        tmp___4 = malloc(sizeof(*newNode));
        logAssignNoOffset("tree-of-cslls.c", 74, & tmp___4, "void *", "tmp___4", tmp___4,
                          "void", "malloc", 1);
        logMallocInfo("sizeof(*newNode)", sizeof(*newNode));
        newNode = (TreeNode *)tmp___4;
        logAssignNoOffset("tree-of-cslls.c", 74, & newNode, "struct TTreeNode *",
                          "newNode", newNode, "struct TTreeNode", "(TreeNode *)tmp___4",
                          0);
        tmp___0->left = newNode;
        logAssignOffset("tree-of-cslls.c", 75, tmp___0, "struct TTreeNode", "*tmp___0",
                        & tmp___0->left, "struct TTreeNode *", "tmp___0->left", tmp___0->left,
                        "struct TTreeNode", "newNode", 0);
        logBlockExit("tree-of-cslls.c", 75);
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if ((unsigned long )((void *)0) == (unsigned long )tmp___0->right) {
      tmp___6 = rand();
      logBlockEntry("", -1);
      dumpVarsOutOfScope();
      logBlockExit("", -1);
      if (tmp___6 % 2) {
        logBlockEntry("tree-of-cslls.c", 80);
        tmp___5 = malloc(sizeof(*newNode));
        logAssignNoOffset("tree-of-cslls.c", 80, & tmp___5, "void *", "tmp___5", tmp___5,
                          "void", "malloc", 1);
        logMallocInfo("sizeof(*newNode)", sizeof(*newNode));
        newNode = (TreeNode *)tmp___5;
        logAssignNoOffset("tree-of-cslls.c", 80, & newNode, "struct TTreeNode *",
                          "newNode", newNode, "struct TTreeNode", "(TreeNode *)tmp___5",
                          0);
        tmp___0->right = newNode;
        logAssignOffset("tree-of-cslls.c", 81, tmp___0, "struct TTreeNode", "*tmp___0",
                        & tmp___0->right, "struct TTreeNode *", "tmp___0->right",
                        tmp___0->right, "struct TTreeNode", "newNode", 0);
        logBlockExit("tree-of-cslls.c", 81);
      } else {
        {
        logComment("Loop-iteration-end");
        continue;
        }
      }
    } else {
      {
      logComment("Loop-iteration-end");
      continue;
      }
    }
    logBlockEntry("tree-of-cslls.c", 89);
    i ++;
    newNode->left = (struct TTreeNode *)((void *)0);
    logAssignOffset("tree-of-cslls.c", 91, newNode, "struct TTreeNode", "*newNode",
                    & newNode->left, "struct TTreeNode *", "newNode->left", newNode->left,
                    "struct TTreeNode", "(struct TTreeNode *)((void *)0)", 0);
    newNode->right = (struct TTreeNode *)((void *)0);
    logAssignOffset("tree-of-cslls.c", 92, newNode, "struct TTreeNode", "*newNode",
                    & newNode->right, "struct TTreeNode *", "newNode->right", newNode->right,
                    "struct TTreeNode", "(struct TTreeNode *)((void *)0)", 0);
    tmp___8 = malloc(sizeof(*(newNode->list)));
    logAssignNoOffset("tree-of-cslls.c", 93, & tmp___8, "void *", "tmp___8", tmp___8,
                      "void", "malloc", 1);
    logMallocInfo("sizeof(*(newNode->list))", sizeof(*(newNode->list)));
    newNode->list = (ListNode *)tmp___8;
    logAssignOffset("tree-of-cslls.c", 93, newNode, "struct TTreeNode", "*newNode",
                    & newNode->list, "struct TListNode *", "newNode->list", newNode->list,
                    "struct TListNode", "(ListNode *)tmp___8", 0);
    (newNode->list)->next = newNode->list;
    logAssignOffset("tree-of-cslls.c", 94, newNode->list, "struct TListNode", "*(newNode->list)",
                    & (newNode->list)->next, "struct TListNode *", "(newNode->list)->next",
                    (newNode->list)->next, "struct TListNode", "newNode->list", 0);
    e = 0;
    logBlockExit("tree-of-cslls.c", 97);
    while (1) {
      if (! (e < 7)) {
        {
        logComment("Loop-iteration-end");
        break;
        }
      }
      logBlockEntry("tree-of-cslls.c", 99);
      tmp___9 = malloc(sizeof(ListNode ));
      logAssignNoOffset("tree-of-cslls.c", 99, & tmp___9, "void *", "tmp___9", tmp___9,
                        "void", "malloc", 1);
      logMallocInfo("sizeof(ListNode )", sizeof(ListNode ));
      tmpList = (ListNode *)tmp___9;
      logAssignNoOffset("tree-of-cslls.c", 99, & tmpList, "struct TListNode *", "tmpList",
                        tmpList, "struct TListNode", "(ListNode *)tmp___9", 0);
      tmpList->next = (newNode->list)->next;
      logAssignOffset("tree-of-cslls.c", 103, tmpList, "struct TListNode", "*tmpList",
                      & tmpList->next, "struct TListNode *", "tmpList->next", tmpList->next,
                      "struct TListNode", "(newNode->list)->next", 0);
      (newNode->list)->next = tmpList;
      logAssignOffset("tree-of-cslls.c", 104, newNode->list, "struct TListNode", "*(newNode->list)",
                      & (newNode->list)->next, "struct TListNode *", "(newNode->list)->next",
                      (newNode->list)->next, "struct TListNode", "tmpList", 0);
      e ++;
      logBlockExit("tree-of-cslls.c", 97);
    }
    }
    logComment("Loop-iteration-end");
  }
  while ((unsigned long )((void *)0) != (unsigned long )tree) {
    logComment("Loop-iteration-start_tree-of-cslls.c_108");
    {
    logBlockEntry("tree-of-cslls.c", 110);
    tmp___0 = tree;
    logAssignNoOffset("tree-of-cslls.c", 110, & tmp___0, "struct TTreeNode *", "tmp___0",
                      tmp___0, "struct TTreeNode", "tree", 0);
    pred = (TreeNode *)((void *)0);
    logAssignNoOffset("tree-of-cslls.c", 111, & pred, "struct TTreeNode *", "pred",
                      pred, "struct TTreeNode", "(TreeNode *)((void *)0)", 0);
    logBlockExit("tree-of-cslls.c", 111);
    while (1) {
      if (! ((unsigned long )((void *)0) != (unsigned long )tmp___0->left)) {
        if (! ((unsigned long )((void *)0) != (unsigned long )tmp___0->right)) {
          {
          logComment("Loop-iteration-end");
          break;
          }
        }
      }
      logBlockEntry("tree-of-cslls.c", 115);
      pred = tmp___0;
      logAssignNoOffset("tree-of-cslls.c", 115, & pred, "struct TTreeNode *", "pred",
                        pred, "struct TTreeNode", "tmp___0", 0);
      logBlockExit("tree-of-cslls.c", 115);
      if ((unsigned long )((void *)0) != (unsigned long )tmp___0->left) {
        logBlockEntry("tree-of-cslls.c", 118);
        tmp___0 = tmp___0->left;
        logAssignNoOffset("tree-of-cslls.c", 118, & tmp___0, "struct TTreeNode *",
                          "tmp___0", tmp___0, "struct TTreeNode", "tmp___0->left",
                          0);
        logBlockExit("tree-of-cslls.c", 118);
      } else {
        logBlockEntry("tree-of-cslls.c", 122);
        tmp___0 = tmp___0->right;
        logAssignNoOffset("tree-of-cslls.c", 122, & tmp___0, "struct TTreeNode *",
                          "tmp___0", tmp___0, "struct TTreeNode", "tmp___0->right",
                          0);
        logBlockExit("tree-of-cslls.c", 122);
      }
    }
    if ((unsigned long )((void *)0) != (unsigned long )pred) {
      if ((unsigned long )tmp___0 == (unsigned long )pred->left) {
        logBlockEntry("tree-of-cslls.c", 130);
        pred->left = (struct TTreeNode *)((void *)0);
        logAssignOffset("tree-of-cslls.c", 130, pred, "struct TTreeNode", "*pred",
                        & pred->left, "struct TTreeNode *", "pred->left", pred->left,
                        "struct TTreeNode", "(struct TTreeNode *)((void *)0)", 0);
        logBlockExit("tree-of-cslls.c", 130);
      } else {
        logBlockEntry("tree-of-cslls.c", 134);
        pred->right = (struct TTreeNode *)((void *)0);
        logAssignOffset("tree-of-cslls.c", 134, pred, "struct TTreeNode", "*pred",
                        & pred->right, "struct TTreeNode *", "pred->right", pred->right,
                        "struct TTreeNode", "(struct TTreeNode *)((void *)0)", 0);
        logBlockExit("tree-of-cslls.c", 134);
      }
    } else {
      logBlockEntry("tree-of-cslls.c", 139);
      tree = (TreeNode *)((void *)0);
      logAssignNoOffset("tree-of-cslls.c", 139, & tree, "struct TTreeNode *", "tree",
                        tree, "struct TTreeNode", "(TreeNode *)((void *)0)", 0);
      logBlockExit("tree-of-cslls.c", 139);
    }
    while (1) {
      if (! ((unsigned long )tmp___0->list != (unsigned long )(tmp___0->list)->next)) {
        {
        logComment("Loop-iteration-end");
        break;
        }
      }
      logBlockEntry("tree-of-cslls.c", 144);
      tmpList = (tmp___0->list)->next;
      logAssignNoOffset("tree-of-cslls.c", 144, & tmpList, "struct TListNode *", "tmpList",
                        tmpList, "struct TListNode", "(tmp___0->list)->next", 0);
      (tmp___0->list)->next = tmpList->next;
      logAssignOffset("tree-of-cslls.c", 145, tmp___0->list, "struct TListNode", "*(tmp___0->list)",
                      & (tmp___0->list)->next, "struct TListNode *", "(tmp___0->list)->next",
                      (tmp___0->list)->next, "struct TListNode", "tmpList->next",
                      0);
      logFree("tree-of-cslls.c", 146, "(void *)tmpList", (void *)tmpList);
      free((void *)tmpList);
      logBlockExit("tree-of-cslls.c", 146);
    }
    logBlockEntry("", -1);
    logFree("tree-of-cslls.c", 149, "(void *)tmp___0->list", (void *)tmp___0->list);
    free((void *)tmp___0->list);
    logFree("tree-of-cslls.c", 150, "(void *)tmp___0", (void *)tmp___0);
    free((void *)tmp___0);
    logBlockExit("tree-of-cslls.c", 150);
    }
    logComment("Loop-iteration-end");
  }
  {
  logVarOutOfScope("tree", & tree);
  logVarOutOfScope("tmp", & tmp);
  logVarOutOfScope("tmp___0", & tmp___0);
  logVarOutOfScope("tmpList", & tmpList);
  logVarOutOfScope("tmp___1", & tmp___1);
  logVarOutOfScope("tmp___2", & tmp___2);
  logVarOutOfScope("newNode", & newNode);
  logVarOutOfScope("tmp___4", & tmp___4);
  logVarOutOfScope("tmp___5", & tmp___5);
  logVarOutOfScope("tmp___8", & tmp___8);
  logVarOutOfScope("tmp___9", & tmp___9);
  logVarOutOfScope("pred", & pred);
  {
  logComment("Function Exited");
  return (0);
  }
  }
}
}
