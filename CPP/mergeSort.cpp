//Author: Guangqiang Lu
//Time: 20200504
//Email: gq4350lu@hotmail.com

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZEA 11
#define SIZEB 14
#define SIZEC 10000

void merge(int*, int, int, int, int*);
void mergeSort(int*, int, int, int*);
void mergeSort(int*, const int);
void printArray(int*, const int);

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    mergeSort(dataA, SIZEA);
    printArray(dataA, SIZEA);

    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    mergeSort(dataB, SIZEB);
    printArray(dataB, SIZEB);

    srand(time(NULL));
    int dataC[SIZEC];
    for (int i = 0; i < SIZEC; i++)
    {
        dataC[i] = rand() % SIZEC +1;
    }
    mergeSort(dataC, SIZEC);
    printArray(dataC, SIZEC);

    return 0;
}

void merge(int* unsorted, int first, int mid, int last, int* sorted)
{
    int k = 0, i = first, j= mid;
    while(i < mid && j < last)
    {
        if (unsorted[i] < unsorted[j])
        {
            sorted[k++] = unsorted[i++] ;
        }
        else
        {
            sorted[k++] = unsorted[j++];
        }
    }
    while (i < mid)
    {
        sorted[k++] = unsorted[i++] ;
    }

    for(int m = 0; m < k; m++)
    {
        unsorted[m + first] = sorted[m];
    }
}

void mergeSort(int* unsorted, int first, int last, int* sorted)
{
    int mid = (first + last ) / 2;
    if (first  < last - 1)
    {
        mergeSort(unsorted, first, mid, sorted);
        mergeSort(unsorted, mid, last, sorted);
        merge(unsorted, first, mid, last, sorted);
    }
}

void mergeSort(int* array, const int size)
{
    int* sorted = new int[size];
    if (sorted)
    {
        mergeSort(array, 0, size, sorted);
        delete [ ] sorted;
    }
    else
    {
        printf("No memory is assigned!");
    }
}

void printArray(int* array,  const int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%-6d", array[i]);
        if (i % 20 == 19)
        {
            printf("\n");
        }
    }
    printf("\n");
}
