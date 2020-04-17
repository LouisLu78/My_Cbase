#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.h"

using namespace std;

int main()
{

    BinaryTree<int> intTree;
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        int r = 1 + rand() % 100;
        intTree.insertNode(r);
    }

    intTree.preOrder();
    intTree.postOrder();
    intTree.inOrder();
    cout << endl;

    BinaryTree<string> sTree;
    ifstream infile;
    string s;
    infile.open("..\\test.txt");
    while(infile >> s){
        sTree.insertNode(s);
    }
    cout << "\nThe in-oder sequence is:" << endl;
    sTree.inOrder();
    cout << "\nThe pre-oder sequence is:" << endl;
    sTree.preOrder();
    cout << "\nThe post-oder sequence is:" << endl;
    sTree.postOrder();

    return 0;
}//I have solved this question.Ha, Ha, Ha...
