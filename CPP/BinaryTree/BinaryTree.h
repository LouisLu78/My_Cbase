#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include <iostream>
#include "TreeNode.h"

using namespace std;

struct TreeNode
{
    struct TreeNode *leftPtr;
    int data;
    struct TreeNode *rightPtr;
};

class BinaryTree
{
private:
    TreeNode *tNode;

public:
    BinaryTree(TreeNode*);
    void insertNode(int );
    void inOrder();
    //void preOrder(TreeNode *treePtr);
    //void postOrder(TreeNode *treePtr);

};

#endif // BINARYTREE_H_INCLUDED
