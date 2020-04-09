#include <iostream>
#include "BinaryTree.h"

using namespace std;

template <typename T>
BinaryTree<T>::BinaryTree(T* root)
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
        //cout << "The destruction function is used." << endl;
    }
}

template <typename T>
template <typename E>
void BinaryTree<T>::insertNode(E value)
{
    if(tNode){
        insertNode(tNode, value);
    }
    else{
        tNode = new T;
        tNode->data = value;
        tNode->leftPtr = NULL;
        tNode->rightPtr = NULL;
    }

}

template <typename T>
template <typename E>
void BinaryTree<T>::insertNode(T* treePtr, E value)
{

    if(value <= treePtr->data){
        if(treePtr->leftPtr){
            insertNode(treePtr->leftPtr, value);
        }
        else{
            treePtr->leftPtr = new T;
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
           treePtr->rightPtr = new T;
           treePtr->rightPtr->data = value;
           treePtr->rightPtr->leftPtr = NULL;
           treePtr->rightPtr->rightPtr = NULL;
        }
    }

}

template <typename T>
T* BinaryTree<T>::getNode()
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
void BinaryTree<T>::in_Order(T* treePtr)
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
void BinaryTree<T>::pre_Order(T* treePtr)
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
void BinaryTree<T>::post_Order(T* treePtr)
{
    if(treePtr){
        post_Order(treePtr->leftPtr);
        post_Order(treePtr->rightPtr);
        cout << treePtr->data << " ";
    }
}
