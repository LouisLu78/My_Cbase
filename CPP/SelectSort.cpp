//Author: Guangqiang Lu
//Time:
//Email: gq4350lu@hotmail.com

#include <iostream>
#define SIZEA 11
#define SIZEB 14

using namespace std;

void selectSort(int* array,  const int size)
{
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int* array,  const int size)
{
    for (int i = 0; i < size; i++){
        cout <<array[i] << " ";
     }
     cout << endl;
}

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    selectSort(dataA, SIZEA);
    printArray(dataA, SIZEA);

    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    selectSort(dataB, SIZEB);
    printArray(dataB, SIZEB);
     return 0;
}//This program is written by myself.
