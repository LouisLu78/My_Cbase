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
    int i;
    char infix[] = {'(','3','+','5',')','*','4','-','2','^','5','/','8'};
    char postfix[20];

    convertToPostfix(infix, postfix);

    for (i = 0; postfix[i] != '\0'; i++){
        printf("%c",postfix[i]);
    }

    return 0;
}

void convertToPostfix(char infix[], char postfix[])
{
    stackNodePtr expression;

    int i = 0;
    push(&expression, '(');
    strcat(infix, ")");
    if((isEmpty(expression) == 0){
        for (i = 0; infix[i] != '\0'; i++){
            if (isdigit(infix[i])){
                postfix[i+1] = infix[i];
            }
            else if (infix[i] == '('){
                push(&expression, infix[i]);
            }/* the rest need to be reviewed later. */


            else if(isOperator(infix[i])){
                if((isEmpty(expression) == 0) && precedence(expression->data, infix[i]) >= 0){
                    postfix[j] = pop(&expression);
                }
                else{
                    push(&expression, infix[i]);
                }
            }
            else if (infix[i] == ')'){
                while(pop(&expression) != '('){
                    postfix[j] = pop(&expression);
                    j++;
                }
                pop(&expression);
            }
            j++;
        }
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
}/* This function works properly.*/

int precedence(char operator1, char operator2)
{
    int i, flag, headOperator, tailOperator;
    char operators[] = {'+','-','*','/','^','%'};
    int value[] = {1,1,2,2,3,2};
    
    for (i = 0; operators[i] != '\0'; i++){
        if (operator1 == operators[i]){
            headOperator = value[i];
        }
        if (operator2 == operators[i]){
           tailOperator = value[i];
        }
    }
    flag = headOperator - tailOperator;

    return flag;
}/* This function works properly.*/

void push(stackNodePtr *topPtr, char value)
{
    stackNodePtr newPtr;

    newPtr = malloc(sizeof(stackNode));
    newPtr->data = value;
    newPtr->nextPtr = *topPtr;
    *topPtr = newPtr;
}/* This function works properly.*/

char pop(stackNodePtr *topPtr)
{
    char value;
    stackNodePtr tempPtr;

 	value = (*topPtr)->data;
    tempPtr = *topPtr;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);

    return value;
}/* This function works properly.*/

char stackTop(stackNodePtr topPtr)
{
    if (topPtr != NULL){
        return topPtr->data;
    }
}/* This function is revised. */


int isEmpty(stackNodePtr topPtr)
{
    return topPtr == NULL;
}/* This function works properly.*/

void printStack(stackNodePtr topPtr)
{
     while (topPtr != NULL){
        printf("%c",topPtr->data);
        topPtr = topPtr->nextPtr;
     }
}/* This function works properly.*/
