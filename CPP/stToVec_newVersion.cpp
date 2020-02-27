#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void stToVec(const string &originalString, vector<string>& treatedString )
{
    string newSt;
    istringstream stream(originalString);

    while(stream >> newSt){
        treatedString.push_back(newSt);
    }
}

int main()
{
    string st = "His eye was so cold and hostile Others it seemed to say might like Archie but not he";
    vector <string> tString;
    stToVec(st, tString);

    for (size_t i = 0; i < tString.size(); i ++){
        cout << tString[i] << " ";
        if (i % 6 == 5){
            cout << endl;
        }
    }

    return 0;
}
