#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.h"

using namespace std;

int getNumber()
{
    return 1 + rand() % 100;
}

int main()
{

    BinaryTree btA;
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        int r = getNumber();
        btA.insertNode(r);
    }

    btA.preOrder();
    btA.postOrder();
    btA.inOrder();

    return 0;
}//I have solved this question.
