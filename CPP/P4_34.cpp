#include <iostream>
#include <string>
#include <vector>

using namespace std;

void removePunct(string& originalString)
{
    string newSt;
    for (size_t i = 0; i < originalString.size(); i++)
    {
        if(!ispunct(originalString[i]))
        {
            newSt += originalString[i];
        }
    }
    originalString = newSt;
}

const vector<string> &stToVec(string &st, vector<string>&stVec)
{
    string temp;

    for(size_t i = 0; i < st.size(); i++)
    {
        if(st[i] && !isspace(st[i]))
        {
            temp += st[i];
        }
        else
        {
            stVec.push_back(temp);
            temp = "";
        }
    }

    return stVec;
}

int main()
{

    string st = "His eye was so cold and hostile. Others, it seemed to say, might like Archie, but not he.";
    string temp;
    vector<string>vecSt;

    removePunct(st);
    cout << st << endl << endl;

    stToVec(st, vecSt);

    const int size = vecSt.size();
    for (size_t i = 0; i < size; i++)
    {
        cout << vecSt[i] << " ";
    }
    cout << endl;

    string charVec[size];

    for (size_t i = 0; i < size; i++)
    {
        charVec[i] = vecSt[i];

    }

    for (size_t i = 0; i < size; i++)
    {
        cout << charVec[i] << " ";
    }

    return 0;
}
