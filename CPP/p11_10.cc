#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef vector<string> VST;

inline bool isLongerFive(const string& word)
{
    return word.size() > 5;
}

int main()
{
    int word = 0;
    string s;
    ifstream input;
    VST vec;

    input.open("Romeo.txt");
    while(input >> s)
    {
        vec.push_back(s);
    }
    cout << "The book contains "<< vec.size() << " words.\n" << endl;

    VST::iterator iter = vec.begin();

    while(iter != vec.end())
    {
        iter = find_if(iter, vec.end(), isLongerFive);
        if(iter != vec.end())
        {
            cout << *iter++ << " ";
            word++;
        }
    }
    cout << "\n\nThe book contains "<< word << " words which is composed with more than 5 letters." << endl;

    return 0;
}
