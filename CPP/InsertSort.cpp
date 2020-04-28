//Author: Guangqiang Lu
//Time: 20200428
//Email: gq4350lu@hotmail.com

#include <stdio.h>
#define SIZEA 11
#define SIZEB 14

void insertSort(int*, const int);
void printArray(int*, const int);

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    insertSort(dataA, SIZEA);
    printArray(dataA, SIZEA);

    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    insertSort(dataB, SIZEB);
    printArray(dataB, SIZEB);

    return 0;
}

void insertSort(int* array, const int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        temp = array[i + 1];
        for( j = i ; j >= 0; j--)
        {
            if (array[j] > temp)
            {
                array[j + 1] = array[j];
                array[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
}

void printArray(int* array,  const int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
