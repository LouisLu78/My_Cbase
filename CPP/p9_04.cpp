#include <iostream>
#include <deque>
#include <list>

using namespace std;
typedef deque<int> IDEQUE;
typedef list<IDEQUE> IDLIST;

void printIdeque(IDEQUE & idl){
    for(size_t i = 0; i < idl.size(); i++){
        cout << idl[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 100;
    int data[size];

    for (int i = 0; i < size; i++){
        data[i] = i + 1;
    }

    IDEQUE iDeque;
    IDLIST idList;

    for (int i = 0; i < size; i += 10){

        iDeque.assign(data + i, data + i + 10);
        idList.push_back(iDeque);
        printIdeque(iDeque);
    }

    return 0;
}
