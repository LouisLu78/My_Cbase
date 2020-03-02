#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<string, int> PSI;

int main()
{
    int i = 0;

    PSI psi;
    vector<PSI> vst;
    string s;

    string st = "We are sorry, but this experience needs a newer generation of browser.\
                    Please upgrade your browser to the latest version.";

    istringstream input(st);

    while(input >> s){
        psi = make_pair(s, i*i);
        i++;
        vst.push_back(psi);
    }

    for(vector<PSI>::iterator iter = vst.begin(); iter < vst.end(); iter++){
        cout << left << setw(15) << iter->first << " " << iter->second << endl;
    }

    cout << endl;

    return 0;
}
