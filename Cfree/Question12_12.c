# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct charNode {
    char data;
    struct charNode *nextPtr;
};

typedef struct charNode stackNode;
typedef stackNode *stackNodePtr;

void convertToPostfix(char infix[], char postfix[]);
int isOperator(char c);
int precedence(char operator1, char operator2);
void push(stackNodePtr *topPtr, char value);
char pop(stackNodePtr *topPtr);
char stackTop(stackNodePtr topPtr);
int isEmpty(stackNodePtr topPtr);
void printStack(stackNodePtr topPtr);

main()
{
    return 0;
}

void convertToPostfix(char infix[], char postfix[])
{
    stackNodePtr expression;

    int i, j = 0;
    push(&expression, '(');
    strcat(infix, ")");
    for (i = 0; infix[i] != '\0'; i++){
        if (isdigit(infix[i])){
            postfix[j] = infix[i];
        }
        else if (infix[i]) == '('){
            push(&expression, infix[i]);
        }
        else if(isOperator(infix[i])){
            if((isEmpty(expression) == 0) && precedence(expression->data, infix[i]) >= 0){
                postfix[j] = pop(&expression);
            }
            else{
                push(&expression, infix[i]);
            }
        }
        else if (infix[i]) == ')'){
            while(pop(&expression) != '('){
                postfix[j] = pop(&expression);
                j++;
            }
            pop(&expression);
        }
        j++;
    }
}

int isOperator(char c)
{
    int i, flag = 0;
    char operators[] = {'+','-','*','/','^','%'};
    for (i = 0; operators[i] != '\0'; i++){
        if (c == operators[i] ){
            flag = 1;
        }
    }
    return flag;
}

int precedence(char operator1, char operator2)
{
    int flag, frontOperator, backOperator;
    char operators[] = {'+','-','*','/','^','%'};
    int value[] = {1,1,2,2,3,2};
    for (i = 0; operators[i] != '\0'; i++){
        if (operator1 == operators[i]){
            frontOperator = value[i];
        }
        if (operator2 == operators[i]){
           backOperator = value[i];
        }
    }
    flag = frontOperator - backOperator;

    return flag;
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

char stackTop(stackNodePtr topPtr)
{
    return topPtr->data;
}


int isEmpty(stackNodePtr topPtr)
{
    return topPtr == NULL;
}

void printStack(stackNodePtr topPtr)
{
     while (topPtr != NULL){
        printf("%c",topPtr->data);
        topPtr = topPtr->nextPtr;
     }
}
/* the rest part of the program will be finished during the spring festival. */