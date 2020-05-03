//Author: Guangqiang Lu
//Time:20200501
//Email: gq4350lu@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZEA 11
#define SIZEB 14
#define SIZEC 10000

void shellSort(int*, const int);
void printArray(int*, const int);

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    shellSort(dataA, SIZEA);
    printArray(dataA, SIZEA);

    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    shellSort(dataB, SIZEB);
    printArray(dataB, SIZEB);

    srand(time(NULL));
    int dataC[SIZEC];
    for (int i = 0; i < SIZEC; i++){
        dataC[i] = rand() % SIZEC +1;
    }
    shellSort(dataC, SIZEC);
    printArray(dataC, SIZEC);

    return 0;
}

void shellSort(int* array, const int size)
{
    int temp, d = size / 2;
    while(d > 0){
        for(int i = 0; i < d; i++ ){
             for(int j = i; j < size - d; j += d ){
                temp = array[j + d];
                for (int k = j; k >= 0; k -= d){
                     if (array[k] > temp)
                    {
                        array[k + d] = array[k];
                        array[k] = temp;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        d /= 2;
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
