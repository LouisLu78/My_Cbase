# include <stdio.h>
# include <stdlib.h>

struct charNode {
    char data;
    struct charNode *nextPtr;
};

typedef struct charNode stackNode;
typedef stackNode *stackNodePtr;

void push(stackNodePtr *topPtr, char value);
char pop(stackNodePtr *topPtr);

main()
{
    stackNodePtr stackPtr = NULL;
    int i;
    char stringA[] = "The Year of Mouse is Coming!";
    char s;

    for (i = 0; stringA[i] != '\0'; i++){
        push(&stackPtr, stringA[i]);
    }
    
    
    while (stackPtr != NULL){
        s = pop(&stackPtr);
        printf("%c",s);
    }

    return 0;

}
void push(stackNodePtr *topPtr, char value)
{
    stackNodePtr newPtr;
    
    newPtr = malloc(sizeof(stackNode));
    newPtr->data = value;
    newPtr->nextPtr = *topPtr;
    *topPtr = newPtr;
}

char pop(stackNodePtr *topPtr)
{
    char value;
    stackNodePtr tempPtr;

 	value = (*topPtr)->data;
    tempPtr = *topPtr;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);

    return value;
}
