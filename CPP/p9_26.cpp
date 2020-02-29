#include <iostream>
#include <list>
#include <vector>

using namespace std;

typedef vector<int> IVEC;
typedef list<int> ILIST;

int main()
{
    const int size = 11;
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    IVEC ivec(ia, ia + size);
    ILIST ilist(ia, ia + size);

    IVEC::iterator ivb = ivec.begin(), ive = ivec.end();
    ILIST::iterator ilb = ilist.begin(), ile = ilist.end();

    for (ILIST::iterator iter = ilist.begin(); iter != ile; iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    while(ivb < ive){
        if (*ivb % 2 == 0){
            ivec.erase(ivb);
            continue;
        }
        ivb++;
    }
    for (size_t i = 0; i < ivec.size(); i++){
        cout << ivec[i] << " ";
    }
    cout << endl << endl;

    while(ilb != ile){
        if (*ilb % 2 == 1){
            ilist.erase(ilb);
            continue;
        }
        ++ilb;
    }

    IVEC ivec1(ilist.begin(), ilist.end());

    for (size_t i = 0; i < ivec1.size(); i++){
        cout << ivec1[i] << " ";
    }

    return 0;
}
