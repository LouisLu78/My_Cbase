#include <iostream>
#include <vector>

using namespace std;

bool comp(vector<int>&ivec1, vector<int>&ivec2)
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
    vector<int> intVec1;
    vector<int> intVec2;
    int temp1, temp2;

    while(cin >> temp1){
        intVec1.push_back(temp1);
    }
    cout << endl;

    for(size_t i = 0; i < intVec1.size(); i++){
        cout << intVec1[i] << " ";
    }

    while(cin >> temp2){
            intVec2.push_back(temp2);
    }
    for(size_t i = 0; i < intVec2.size(); i++){
        cout << intVec2[i] << " ";
    }

    if (comp(intVec1, intVec2)){
        cout << "The two vectors are same." << endl;
    }
    else{
        cout << "They are different!" << endl;
    }

    return 0;
}
