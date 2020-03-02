#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef vector<string> VST;

bool isLongerFive(const string& word)
{
    return word.size() > 5;
}

int main()
{
    string s;
    ifstream input;
    VST vec;

    input.open("test.txt");
    while(input >> s)
    {
        vec.push_back(s);
    }

    VST::iterator iter = vec.begin();
    VST::iterator it;

    for(size_t i = 0; i < vec.size(); i++)
    {
        it = find_if(iter, vec.end(), isLongerFive);
        if(it != vec.end())
        {
            cout << *it << " ";
            iter = it + 1;
        }
    }

    return 0;
}
