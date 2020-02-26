#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp;
    int k, sum;

    vector<int>calculateData;

    while(cin >> temp){
        calculateData.push_back(temp);
    }

    if (calculateData.size() % 2 == 1){
        cout << "The last element is individual.\n" << endl;
        k = calculateData.size() - 1;
        for (size_t j = 0; j < calculateData.size(); j++, k--){
           sum = calculateData[j] + calculateData[k];
           if (j < k){
            cout << sum << " ";
           }
           else if (j == k){
            cout << sum / 2;
           }
        }
        cout << endl;
    }
    else{
        for (size_t j = 0; j < calculateData.size(); j += 2){
            sum = calculateData[j] + calculateData[j+1];
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
