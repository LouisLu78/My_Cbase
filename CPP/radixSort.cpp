//Author: Guangqiang Lu
//Time:20200504
//Email: gq4350lu@hotmail.com
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZEA 11
#define SIZEB 14
#define SIZEC 10000

using namespace std;

int maxNum(int* array, int size)
{
    int maxNumber = 0;
    for(int i = 0; i < size; i++)
    {
        if (array[i] > maxNumber)
        {
            maxNumber = array[i];
        }
    }
    return maxNumber;
}

void radixSort(int* array, int size)
{
    int k = 0, radix = 1;
    int number = maxNum(array, size);
    int d = log10(number)+ 1;
    vector<vector<int> >ivec(10), ivecEmpty(10);

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int m = (array[j] / radix) % 10;
            ivec[m].push_back(array[j]);
        }
        for(int p = 0; p < 10; p++)
        {
            for( size_t n = 0; n < ivec[p].size(); n++)
            {
                array[k++] = ivec[p][n];
            }
        }
        radix *= 10;
        k = 0;
        ivec = ivecEmpty;
    }
}

void printArray(int* array,  const int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%5d ", array[i]);
        if (i % 20 == 19)
        {
            printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    radixSort(dataB, SIZEB);
    printArray(dataB, SIZEB);

    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    radixSort(dataA, SIZEA);
    printArray(dataA, SIZEA);

    srand(time(NULL));
    int dataC[SIZEC];
    for (int i = 0; i < SIZEC; i++)
    {
        dataC[i] = rand() % SIZEC +1;
    }
    radixSort(dataC, SIZEC);
    printArray(dataC, SIZEC);

    return 0;
}

