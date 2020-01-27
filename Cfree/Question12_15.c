# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define TIME 720
# define SIZE 500

struct intNode {
    int data;
    struct intNode *nextPtr;
};

typedef struct intNode IntNode;
typedef IntNode *IntNodePtr;

void enqueue(IntNodePtr *headPtr, IntNodePtr *tailPtr, Int value);
int dequeue(IntNodePtr *headPtr, IntNodePtr *tailPtr);
int length(IntNodePtr headPtr, IntNodePtr tailPtr);
int time(void)
int max(int data[]);

main()
{
    IntNodePtr headPtr = NULL;
    IntNodePtr tailPtr = NULL;

    int sum = 0, in = 0, out = 0;
    int time0, service;
    int arrival[SIZE], leave[SIZE], wait[SIZE];

    srand(time(NULL));
    enqueue(&headPtr, &tailPtr, in);
    arrival[0] = time();
    leave[0] = arrival[0]

    while (arrival[in] <= TIME){
        if (headPtr != NULL){
            out = dequeue(&headPtr, &tailPtr);
            leave[out+1] = leave[out] + time();
        }/* this part need revision later. */

        arrival[in+1] = arrival[in] + time();
        in++;
        enqueue(&headPtr, &tailPtr, in);
    }
    for (i = 0; i < SIZE; i++){
        wait[i] = leave[i] - arrival[i];
    }

    return 0;
}

void enqueue(IntNodePtr *headPtr, IntNodePtr *tailPtr, Int value)
{
    IntNodePtr newPtr;
    newPtr = malloc(sizeof(IntNode));
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    if (*headPtr == NULL){
        *headPtr = newPtr;
    }
    else{
        newPtr = (*tailPtr)->nextPtr;
    }
    *tailPtr =newPtr;
}

int dequeue(IntNodePtr *headPtr, IntNodePtr *tailPtr)
{
    IntNodePtr tempPtr;
    int value;

    value = (*headPtr)->data;
    tempPtr = (*headPtr);
    (*headPtr) = (*headPtr)->nextPtr;

    if (*headPtr == NULL){
        *tailPtr = NULL;
    }
    free(tempPtr);

    return value;
}

int time(void)
{
    return 1 + rand() % 4;
}

int max(int data[])
{
    int i, Max = 0;

    for (i = 0; i < SIZE; i++){
        if (data[i] > Max){
            Max = data[i];
        }
    }
    return Max;
}/* to be completed later */

int length(IntNodePtr headPtr, IntNodePtr tailPtr)
{
    int count = 1;
    if (headPtr == NULL){
        return 0;
    }
    else{
        while (headPtr != tailPtr){
            headPtr = headPtr->nextPtr;
            count++;
        }
    }
    return count;
}