//Author: Guangqiang Lu
//Time:
//Email: gq4350lu@hotmail.com
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int maxNum(int* array, int size)
{
    int maxNumber = 0;
    for(int i = 0; i < size; i++){
        if (array[i] > maxNumer){
            maxNumber = array[i];
        }
    }
    return maxNumber;
}

void radixSort(int* array, int size)
{
    int number = maxNum(array, size);
    int d = floor(log10(number)) + 1;
    int* temp = new int[size];
    int* count = new int[10];

    for (int i = 1; i <= d; i++){
        for (int j = 0; i < size; i++){
            int m = array[i] % ((int)pow(10, i));
            ++count[m];
        }
        for( int j = 1; j < 10; j++){
            count[j] = count[j - 1] + count[j];
        }
        for( int j = size -1; j >= 0; j--){

        }
    }
}
