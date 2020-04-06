#include <iostream>
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree(TreeNode* root)
            :tNode(root)
{

}

BinaryTree::~BinaryTree()
{
    int counter = 0;
    if(tNode){
        delete tNode->leftPtr;
        delete tNode->rightPtr;
        delete tNode;
        cout << "The destruction function is used " << ++counter << " times." << endl;
    }
}

void BinaryTree::insertNode(int value)
{
    if(tNode){
        insertNode(tNode, value);
    }
    else{
        tNode = new TreeNode;
        tNode->data = value;
        tNode->leftPtr = NULL;
        tNode->rightPtr = NULL;
    }

}

void BinaryTree::insertNode(TreeNode* treePtr, int value)
{

    if(value <= treePtr->data){
        if(treePtr->leftPtr){
            insertNode(treePtr->leftPtr, value);
        }
        else{
            treePtr->leftPtr = new TreeNode;
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
           treePtr->rightPtr = new TreeNode;
           treePtr->rightPtr->data = value;
           treePtr->rightPtr->leftPtr = NULL;
           treePtr->rightPtr->rightPtr = NULL;
        }
    }

}

TreeNode* BinaryTree::getNode()
{
    return tNode;
}

void BinaryTree::inOrder()
{
    in_Order(tNode);
    cout << endl;
}

void BinaryTree::in_Order(TreeNode* treePtr)
{
    if(treePtr){
        in_Order(treePtr->leftPtr);
        cout << treePtr->data << " ";
        in_Order(treePtr->rightPtr);
    }
}

void BinaryTree::preOrder()
{
    pre_Order(tNode);
    cout << endl;
}

void BinaryTree::pre_Order(TreeNode* treePtr)
{
    if(treePtr){
        cout << treePtr->data << " ";
        pre_Order(treePtr->leftPtr);
        pre_Order(treePtr->rightPtr);
    }
}

void BinaryTree::postOrder()
{
    post_Order(tNode);
    cout << endl;
}

void BinaryTree::post_Order(TreeNode* treePtr)
{
    if(treePtr){
        post_Order(treePtr->leftPtr);
        post_Order(treePtr->rightPtr);
        cout << treePtr->data << " ";
    }
}
