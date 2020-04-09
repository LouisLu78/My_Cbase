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
    if(tNode){
        insertNode(tNode, value);
    }
    else{
        tNode = new TreeNode<T>;
        tNode->data = value;
        tNode->leftPtr = NULL;
        tNode->rightPtr = NULL;
    }

}

template <typename T>
void BinaryTree<T>::insertNode(TreeNode<T>* treePtr, T value)
{

    if(value <= treePtr->data){
        if(treePtr->leftPtr){
            insertNode(treePtr->leftPtr, value);
        }
        else{
            treePtr->leftPtr = new TreeNode<T>;
            treePtr->leftPtr->data = value;
            treePtr->leftPtr->leftPtr = NULL;
            treePtr->leftPtr->rightPtr = NULL;
        }

    }
    else{
        if(treePtr->rightPtr){
            insertNode(treePtr->rightPtr, value);
        }
        else{
           treePtr->rightPtr = new TreeNode<T>;
           treePtr->rightPtr->data = value;
           treePtr->rightPtr->leftPtr = NULL;
           treePtr->rightPtr->rightPtr = NULL;
        }
    }

}

template <typename T>
TreeNode<T>* BinaryTree<T>::getNode()
{
    return tNode;
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
