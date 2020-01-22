# include <stdio.h>
# include <stdlib.h>

struct charNode {
    char data;
    struct charNode *nextPtr;
};

typedef struct charNode stackNode;
typedef stackNode *stackNodePtr;

void convertToPostfix(char infix[], char postfix());
int isOperator(char c);
int precedence(char operator1, char operator2);
void push(stackNodePtr *topPtr, char value);
char pop(stackNodePtr *topPtr);
char stackTop(stackNodePtr topPtr);
int isEmpty(stackNodePtr topPtr);
void printStack(stackNodePtr topPtr);

/* to be completed later */