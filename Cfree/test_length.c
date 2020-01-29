# include <stdio.h>
# include <stdlib.h>

struct charNode {
    char data;
    struct charNode *nextPtr;
};

typedef struct charNode stackNode;
typedef stackNode *stackNodePtr;

void enqueue(stackNodePtr *headPtr, stackNodePtr *tailPtr, char value);
char dequeue(stackNodePtr *headPtr, stackNodePtr *tailPtr);
int length(stackNodePtr headPtr);

main()
{
    stackNodePtr headPtr = NULL;
    stackNodePtr tailPtr = NULL;
    int i;
    char stringA[] = "The Year of Mouse is Coming!";   

    for (i = 0; stringA[i] != '\0'; i++){
        enqueue(&headPtr, &tailPtr, stringA[i]);
    }

    printf("%d\n", length(headPtr));
    printf("The first letter is %c.\n", dequeue(&headPtr, &tailPtr));
    printf("%d\n", length(headPtr));

    return 0;

}

void enqueue(stackNodePtr *headPtr, stackNodePtr *tailPtr, char value)
{
    stackNodePtr newPtr;
    newPtr = malloc(sizeof(stackNode));
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    if (*headPtr == NULL){
        *headPtr = newPtr;
    }
    else{
        (*tailPtr)->nextPtr = newPtr;
    }
    *tailPtr = newPtr;
}

int length(stackNodePtr headPtr)
{
    int count = 0;
    if (headPtr == NULL){
        return 0;
    }
    else{
        while (headPtr != NULL){
            headPtr = headPtr->nextPtr;
            count++;
        }
		return count;
    }
    
}

char dequeue(stackNodePtr *headPtr, stackNodePtr *tailPtr)
{
    stackNodePtr tempPtr;
    char value;

    value = (*headPtr)->data;
    tempPtr = (*headPtr);
    (*headPtr) = (*headPtr)->nextPtr;

    if (*headPtr == NULL){
        *tailPtr = NULL;
    }
    free(tempPtr);

    return value;
}
