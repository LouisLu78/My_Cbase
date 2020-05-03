//Author: Guangqiang Lu
//Time:20200502
//Email: gq4350lu@hotmail.com

#include <iostream>
#include <iomanip>
#include "HeapSort.h"

using namespace std;

ostream& operator<<(ostream&output, HeapSort&rhs)
{
    for(size_t i = 0; i < rhs.ivec.size(); i++){
        output << left << setw(6) << rhs.ivec[i];
        if (i % 20 == 19){
            output << endl;
        }
    }
    output << endl;

    return output;
}

HeapSort::HeapSort(int*array, int size)
{
    ivec.assign(array, array + size);
    buildHeap();
    sort();
}

void HeapSort::adjustHeap(VEI& intVec, int index, int len)
{
    int temp = intVec[index];

    int left = 2 * index + 1;
    while(left < len){
        if(left + 1 < len && intVec[left] < intVec[left + 1] ){
            ++left;
        }
        if (intVec[index] < intVec[left]){
            intVec[index] = intVec[left];
            index = left;
            left = 2 * index + 1;
        }
        else{
            break;
        }
        intVec[index] = temp;
    }

}

void HeapSort::buildHeap()
{
    for (int i = ivec.size() / 2 -1; i >= 0; i--){
        adjustHeap(ivec, i, ivec.size());
    }
}

void HeapSort::sort()
{
    for (int i = ivec.size() - 1; i >= 0; i--){
            int temp = ivec[0];
            ivec[0] = ivec[i];
            ivec[i] = temp;
            adjustHeap(ivec, 0, i);
    }
}

