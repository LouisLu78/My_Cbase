#include <iostream>
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree(TreeNode* root)
            :tNode(root)
{

}

void BinaryTree::insertNode(int value)
{
    if (tNode == NULL){

        tNode->data = value;
        tNode->leftPtr = NULL;
        tNode->rightPtr = NULL;
    }
    else{
        if (value <= tNode->data){
            tNode = tNode->leftPtr;
            insertNode(value);
        }
        else{
            tNode = tNode->rightPtr;
            insertNode(value);
        }
    }
}

void BinaryTree::inOrder()
{
    if (tNode != NULL){
        tNode = tNode->leftPtr;
        inOrder();
        cout << tNode->data << " ";
        tNode = tNode->rightPtr;
        inOrder();
    }
}


