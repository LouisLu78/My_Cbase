#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.cpp"

using namespace std;

typedef struct treeNode TreeNode;
struct treeNode
{
    struct treeNode *leftPtr;
    int data;
    struct treeNode *rightPtr;
};

typedef struct strTreeNode sTreeNode;
struct strTreeNode
{
    struct strTreeNode *leftPtr;
    string data;
    struct strTreeNode *rightPtr;
};

int main()
{

    BinaryTree<TreeNode> intTree;
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        int r = 1 + rand() % 100;
        intTree.insertNode(r);
    }

    intTree.preOrder();
    intTree.postOrder();
    intTree.inOrder();
    cout << endl;

    BinaryTree<sTreeNode> sTree;
    ifstream infile;
    string s;
    infile.open("..\\test.txt");
    while(infile >> s){
        sTree.insertNode(s);
    }
    sTree.inOrder();
    sTree.preOrder();
    sTree.postOrder();

    return 0;
}//I have solved this question.Ha, Ha, Ha...
