#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include <iostream>

using namespace std;

struct treeNode
{
    struct treeNode *leftPtr;
    int data;
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;

class BinaryTree
{
private:
    TreeNode* tNode;

protected:
    void insertNode(TreeNode*, int );
    void in_Order(TreeNode*);
    void pre_Order(TreeNode*);
    void post_Order(TreeNode*);

public:
    BinaryTree(TreeNode* = NULL);
    virtual ~BinaryTree();
    TreeNode* getNode();
    void insertNode(int );
    void inOrder();
    void preOrder();
    void postOrder();
};

#endif // BINARYTREE_H_INCLUDED
