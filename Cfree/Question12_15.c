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

void enqueue(IntNodePtr *headPtr, IntNodePtr *tailPtr, int value);
int dequeue(IntNodePtr *headPtr, IntNodePtr *tailPtr);
int length(IntNodePtr headPtr);
int duration(void);
int max(int data[]);

main()
{
    IntNodePtr headPtr = NULL;
    IntNodePtr tailPtr = NULL;

    int in = 0, out = 0;
    int i;
    int arrival[SIZE], leave[SIZE], wait[SIZE], customers[SIZE];

    srand(time(NULL));
    
    enqueue(&headPtr, &tailPtr, in);
    arrival[0] = duration();
    leave[0] = arrival[0];

    while (arrival[in] <= TIME){
        if (headPtr != NULL){
            out = dequeue(&headPtr, &tailPtr);
            leave[out+1] = leave[out] + duration();
        }/* this part need revision later. */

        customers[in] = length(headPtr);
        arrival[in+1] = arrival[in] + duration();
        in++;
        enqueue(&headPtr, &tailPtr, in);
    }
    
    for (i = 0; i < SIZE; i++){
        wait[i] = leave[i] - arrival[i];
    }
    
    printf("It takes %d minutes for the customer who awaits the most time.\n", max(wait));
    printf("The longest queue contains %d persons.", max(customers));

    return 0;
}

void enqueue(IntNodePtr *headPtr, IntNodePtr *tailPtr, int value)
{
    IntNodePtr newPtr;
    newPtr = malloc(sizeof(IntNode));
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

int duration(void)
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
}

int length(IntNodePtr headPtr)
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
