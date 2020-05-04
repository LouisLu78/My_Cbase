#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> VEI;

class HeapSort
{
    friend ostream& operator<<(ostream&, HeapSort&);

private:
    VEI ivec;

public:
    HeapSort(int*, int);
    void buildHeap();
    static void adjustHeap( VEI&, int, int );
    void sort();
};


#endif // HEAPSORT_H_INCLUDED
