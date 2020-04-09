#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.cpp"

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

    BinaryTree<string> strTree;
    ifstream infile;
    infile.open("test.txt");
    string s;
    while(infile >> s){
        strTree.insertNode(s);
    }
    strTree.inOrder();

    return 0;
}//I have solved this question.Ha, Ha, Ha...
