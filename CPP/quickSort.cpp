//Author: Guangqiang Lu
//Time: 20200426
//Email: gq4350lu@hotmail.com

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> VEI;

void quickSort(VEI& data)
{
    if (data.size() <= 1)
    {
        ;
    }
    else
    {
        int mid = data.size() / 2;
        int key = data[mid];
        data.erase(data.begin() + mid);

        VEI left, right;

        for (size_t i = 0; i < data.size(); i++)
        {
            if(data[i] >= key)
            {
                right.push_back(data[i]);
            }
            else
            {
                left.push_back(data[i]);
            }
        }

        quickSort(left);
        quickSort(right);

        data = left;
        data.push_back(key);
        data.insert(data.end(), right.begin(), right.end());
    }
}

void printArray(const VEI& data)
{
    for(size_t i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    VEI ivec(dataA, dataA + 11);
    quickSort(ivec);
    printArray(ivec);

    int dataB[] = {2, 6, 4, 8, 10, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    ivec.assign(dataB, dataB + 14);
    quickSort(ivec);
    printArray(ivec);

    return 0;
}
