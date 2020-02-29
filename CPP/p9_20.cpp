#include <iostream>
#include <vector>
#include <list>

using namespace std;

typedef vector<int> IVEC;
typedef list<int> ILIST;

bool cmp(IVEC::iterator first, IVEC::iterator last, ILIST::iterator lfirst, ILIST::iterator llast)
{

    while (first < last){
        if (*first++ != *lfirst++){
            cout << "They are different." << endl;
            return false;
        }
    }
    cout << "They are completely same." << endl;
    return true;
}

int main()
{
    int data1[] = {1, 3, 5, 7, 19, 11};
    int data2[] = {1, 3, 5, 7, 19, 11};

    IVEC ivec(data1, data1 + 6);
    ILIST ilist(data2, data2 + 6);

    IVEC::iterator ivb = ivec.begin(), ive = ivec.end();
    ILIST::iterator ilb = ilist.begin(), ile = ilist.end();

    if (ivec.size() == ilist.size()){
        bool answer = cmp(ivb, ive, ilb, ile);
        cout << answer << endl;
    }
    else{
        cout << "They are different." << endl;
    }


    return 0;
}
