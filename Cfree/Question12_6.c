# include <stdio.h>
# include <stdlib.h>

struct charNode {
    char data;
    struct charNode *nextPtr;
};

typedef struct charNode strNode;
typedef strNode *strNodePtr;

void concatenate(strNodePtr *aPtr, strNodePtr *bPtr);

main()
{
    strNodePtr headPtr;
    strNodePtr tailPtr;
    headPtr->data = "s";
    headPtr->nextPtr = NULL;
    tailPtr->data = "k";
    tailPtr->nextPtr = NULL;
    concatenate(&headPtr, &tailPtr);

    while (headPtr != NULL){
        printf("c%--->", headPtr->data);
        headPtr = headPtr->nextPtr;
    }
    return 0; 
}

void concatenate(strNodePtr *aPtr, strNodePtr *bPtr)
{
    strNodePtr newPtr;
    newPtr = malloc(sizeof(strNode));
    if (newPtr != NULL ){
        
        newPtr->nextPtr = *bPtr;
        (*aPtr)->nextPtr = newPtr;

    }
}
