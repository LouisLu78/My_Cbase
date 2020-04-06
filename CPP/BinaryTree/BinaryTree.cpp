#include <iostream>
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree(TreeNode* root)
            :tNode(root)
{

}

void BinaryTree::insertNode(int value)
{
    insertNode(tNode, value);

}

void BinaryTree::insertNode(TreeNode* treePtr, int value)
{
    if (treePtr == NULL){
        treePtr = new TreeNode;
        treePtr->data = value;
        treePtr->leftPtr = NULL;
        treePtr->rightPtr = NULL;
    }
    else{
        if(value <= treePtr->data){
            insertNode(treePtr->leftPtr, value);
        }
        else{
            insertNode(treePtr->rightPtr, value);
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
}

void BinaryTree::post_Order(TreeNode* treePtr)
{
    if(treePtr){
        post_Order(treePtr->leftPtr);
        post_Order(treePtr->rightPtr);
        cout << treePtr->data << " ";
    }
}
