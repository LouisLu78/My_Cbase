#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include <iostream>

using namespace std;

template <typename T>
class BinaryTree
{
private:
    T* tNode;

protected:
    template <typename E>
    void insertNode(T*, E );

    void in_Order(T*);
    void pre_Order(T*);
    void post_Order(T*);

public:
    BinaryTree(T* = NULL);
    virtual ~BinaryTree();
    T* getNode();

    template <typename E>
    void insertNode(E );
    void inOrder();
    void preOrder();
    void postOrder();
};

#endif // BINARYTREE_H_INCLUDED

