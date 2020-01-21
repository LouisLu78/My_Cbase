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
    
    headPtr = malloc(sizeof(strNode));
    
    headPtr->data = 's';
    headPtr->nextPtr = NULL;
    
    tailPtr = malloc(sizeof(strNode));
    
    tailPtr->data = 'k';
    tailPtr->nextPtr = NULL;

    concatenate(&headPtr, &tailPtr);

    while (headPtr != NULL){
        printf("%c --->", headPtr->data);
        headPtr = headPtr->nextPtr;
    }
    return 0; 
}

void concatenate(strNodePtr *aPtr, strNodePtr *bPtr)
{

    if (aPtr != NULL ){
    	
        (*aPtr)->nextPtr = *bPtr;

    }
}
