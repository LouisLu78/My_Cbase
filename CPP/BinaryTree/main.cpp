#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.h"

using namespace std;

int main()
{
    TreeNode *beg;
    BinaryTree btA(beg);
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        btA.insertNode(1 + rand() % 100);
    }

    btA.inOrder();
    return 0;
}
