#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st = "His eye was cold and hostile. Others, it seemed to say, might like Archie, but not he.";

    string newSt;

    for (size_t i = 0; i < st.size(); i++){
        if(!ispunct(st[i])){
            newSt += st[i];
        }
    }
    cout << newSt << endl;

    return 0;
}

