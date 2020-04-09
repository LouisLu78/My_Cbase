#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include <iostream>

using namespace std;
template <typename T> class BinaryTree;

template<typename T>
class TreeNode
{
    friend class BinaryTree<T>;

    TreeNode *leftPtr;
    T data;
    TreeNode *rightPtr;
    TreeNode() = default;
};

template <typename T>
class BinaryTree
{
private:
    TreeNode<T>* tNode;

protected:

    void insertNode(TreeNode<T>*, T);

    void in_Order(TreeNode<T>*);
    void pre_Order(TreeNode<T>*);
    void post_Order(TreeNode<T>*);

public:
    BinaryTree(TreeNode<T>* = NULL);
    virtual ~BinaryTree();
    TreeNode<T>* getNode();

    void insertNode(T);
    void inOrder();
    void preOrder();
    void postOrder();
};
#include "BinaryTree.tpp"
#endif // BINARYTREE_H_INCLUDED

