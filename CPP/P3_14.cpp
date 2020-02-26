#include <iostream>
#include <string>
#include <vector>

using namespace std;

void removePunct(const string& originalString)
{
    string newSt;
    for (size_t i = 0; i < originalString.size(); i++){
        if(!ispunct(originalString[i])){
            newSt += originalString[i];
        }
    }
    originalString = newSt;
}

int main()
{

    string st = "His eye was so cold and hostile. Others, it seemed to say, might like Archie, but not he.";
    string temp;

    removePunct(st);
    cout << st << endl << endl;

    vector<string>stVec;

    for(size_t i = 0; i < st.size(); i++){
        if(st[i] && !isspace(st[i])){
            temp += st[i];
        }
        else{
            stVec.push_back(temp);
            temp = "";
        }
    }

    for (size_t i = 0; i < stVec.size(); i++){
        cout << stVec[i] << " ";
        if (i % 8 == 7){
            cout << endl;
            }
    }

    return 0;
}
