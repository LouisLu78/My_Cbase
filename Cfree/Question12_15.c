# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define TIME 720


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
    int i, sum;
    int arrival[TIME] = {0}, leave[TIME] = {0}, wait[TIME] = {0}, customers[TIME] = {0};
    
    srand(time(NULL));    
     
    enqueue(&headPtr, &tailPtr, in);
    arrival[0] = duration();
    leave[0] = arrival[0] + duration();
    sum = leave[0];
    while (arrival[in] <= TIME){
    	
    	customers[in] = length(headPtr);
        arrival[in+1] = arrival[in] + duration();
        
        if (headPtr != NULL){
            out = dequeue(&headPtr, &tailPtr);
            leave[out] = sum;
        }

        in++;
        enqueue(&headPtr, &tailPtr, in);
        sum = arrival[in];
    }
    
    for (i = 0; i < TIME; i++){
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
}/* This function works properly.*/

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
}/* This function works properly.*/

int duration(void)
{
    return 1 + rand() % 4;
}/* This function works properly.*/

int max(int data[])
{
    int i, Max = 0;

    for (i = 0; i < TIME; i++){
        if (data[i] > Max){
            Max = data[i];
        }
    }
    return Max;
}/* This function works properly.*/

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
}/* This function works properly.*/
