#include <iostream>
#include "BinaryTree.h"

using namespace std;

template <typename T>
BinaryTree<T>::BinaryTree(TreeNode<T>* root)
            :tNode(root)
{

}

template <typename T>
BinaryTree<T>::~BinaryTree()
{

    if(tNode){
        delete tNode->leftPtr;
        delete tNode->rightPtr;
        delete tNode;
    }
}

template <typename T>
void BinaryTree<T>::insertNode(T value)
{
        insertNode(&tNode, value);
}

template <typename T>
void BinaryTree<T>::insertNode(TreeNode<T>** treePtr, T value)
{
    if (*treePtr == NULL){
        (*treePtr) = new TreeNode<T>;
        (*treePtr)->data = value;
        (*treePtr)->leftPtr = NULL;
        (*treePtr)->rightPtr = NULL;
    }
    else{
         if(value <= (*treePtr)->data){
            insertNode(&((*treePtr)->leftPtr), value);
        }
        else{
            insertNode(&((*treePtr)->rightPtr), value);
        }
    }
}

template <typename T>
void BinaryTree<T>::inOrder()
{
    in_Order(tNode);
    cout << endl;
}

template <typename T>
void BinaryTree<T>::in_Order(TreeNode<T>* treePtr)
{
    if(treePtr){
        in_Order(treePtr->leftPtr);
        cout << treePtr->data << " ";
        in_Order(treePtr->rightPtr);
    }
}

template <typename T>
void BinaryTree<T>::preOrder()
{
    pre_Order(tNode);
    cout << endl;
}

template <typename T>
void BinaryTree<T>::pre_Order(TreeNode<T>* treePtr)
{
    if(treePtr){
        cout << treePtr->data << " ";
        pre_Order(treePtr->leftPtr);
        pre_Order(treePtr->rightPtr);
    }
}

template <typename T>
void BinaryTree<T>::postOrder()
{
    post_Order(tNode);
    cout << endl;
}

template <typename T>
void BinaryTree<T>::post_Order(TreeNode<T>* treePtr)
{
    if(treePtr){
        post_Order(treePtr->leftPtr);
        post_Order(treePtr->rightPtr);
        cout << treePtr->data << " ";
    }
}
