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
    		printf("%d--->", startPtr->data);        
            sum += startPtr->data;
            startPtr = startPtr->nextPtr;
            i++;
        }
    average = (float) sum / i;
    printf("\nThe sum of the chain numbers is %d.\n",sum);
    printf("The average of the chain numbers is %.2f.\n",average);

    return 0;
}

void insert(IntNodePtr *sPtr, int value)
{
    IntNodePtr newPtr;
    IntNodePtr previousPtr;
    IntNodePtr currentPtr;

    newPtr = malloc(sizeof(IntNode));
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    previousPtr = NULL;
    currentPtr = *sPtr;

    while (currentPtr != NULL && value > currentPtr->data){
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (previousPtr == NULL){
        newPtr->nextPtr = *sPtr;
        *sPtr = newPtr;
    }
    else {
        previousPtr->nextPtr = newPtr;
        newPtr->nextPtr = currentPtr;
    }
}
