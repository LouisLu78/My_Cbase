#include <iostream>
#include <vector>

using namespace std;

bool comp(const vector<int>&ivec1, const vector<int>&ivec2)
{
    int size;
    size = (ivec1.size() < ivec2.size()?ivec1.size():ivec2.size());

    for (int i = 0; i < size; i++){
        if (ivec1[i] != ivec2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int data1[] = {1,1,2,8};
    int data2[] = {1,1,2,8,3,5,8};
    int data3[] = {1,1,2,81,3,5,8};

    vector<int>intVec1(data1, data1+4);
    vector<int>intVec2(data2, data2+7);
    vector<int>intVec3(data3, data3+7);

    if (comp(intVec1, intVec2)){
        cout << "The two vectors are same." << endl;
    }
    else{
        cout << "They are different!" << endl;
    }

    if (comp(intVec1, intVec3)){
        cout << "The two vectors are same." << endl;
    }
    else{
        cout << "They are different!" << endl;
    }

    return 0;
}
