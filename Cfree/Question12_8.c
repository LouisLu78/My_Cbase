# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define SIZE 25

struct intNode {
    int data;
    struct intNode *nextPtr;
};

typedef struct intNode IntNode;
typedef IntNode *IntNodePtr;

void insert(IntNodePtr *sPtr, int value);

main()
{
    IntNodePtr startPtr = NULL;
    int i, item;
    int sum = 0;
    float average;
    srand(time(NULL));

    for (i = 0; i < SIZE; i++){
        item = rand() % 101;
        insert(&startPtr, item);
    }

    i = 0;
    while (startPtr != NULL){
            sum += startPtr->data;
            startPtr = startPtr->nextPtr;
            i++;
        }
    average = (float) sum / i;
    printf("The sum of the chain numbers is %d.\n",sum);
    printf("The average of the chain numbers is %.2f.\n",average);

    return 0;
}

void insert(IntNodePtr *sPtr, int value)
{

}
/* to be finished later */