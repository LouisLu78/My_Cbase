#include <iostream>
#include <vector>

using namespace std;

bool searchValue(vector<int>::iterator first, vector<int>::iterator last, int value)
{
    for( ;first < last; first++){
        if (value == *first){
            cout << "The value is obtained." << endl;
            return true;
        }
    }
    cout << "The value is not found." << endl;
    return false;
}

int main()
{
    const int size = 100;
    vector<int> ivec;

    for(size_t i = 0; i < size; i++){
        ivec.push_back(i * i);
    }

    vector<int>::iterator ia = ivec.begin(), ib = ivec.end();

    int i = searchValue(ia, ib, 25);
    cout << i << endl;

    i = searchValue(ia, ib, 26);
    cout << i << endl;

    return 0;
}
