#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;
typedef vector<int> VI;

int main()
{
    int i = 0;
    VI veci;
    map<string, VI> msv;

    string s, st = "the new Microsoft Edge was designed to help you get things done.";

    stringstream input(st);

    while(input >> s){
        veci.push_back(i * i + 1);
        msv.insert(make_pair(s, veci[i]));
        i++;
    }

    for(map<string, VI>::iterator iter = msv.begin(); iter != msv.end(); iter++){
        cout << iter->first << " " << endl;
    }

    return 0;
}
