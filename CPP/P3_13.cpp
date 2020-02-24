#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int size = 7;
    int k, sum = 0;
    int data[] = {3, 25, 42, 85, 69, 741, 89};
    vector<int>calculateData;

    for (int i = 0; i < size; i++){
        calculateData.push_back(data[i]);
    }

    if (size % 2 == 1){
        cout << "The last element is individual." << endl;
        k = calculateData.size() - 1;
        for (size_t j = 0; j < calculateData.size(); j++){
           sum = calculateData[j] + calculateData[k];
           if (j < k){
            cout << sum << " ";
           }
           else if (j == k){
            cout << sum / 2;
           }
           k--;
        }
        cout << endl;
    }
    else{
        for (size_t j = 0; j < calculateData.size(); j+=2){
            sum = calculateData[j] + calculateData[j+1];
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
