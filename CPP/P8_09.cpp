#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream inputl;
    vector<string>lvec;
    string s;

    inputl.open("test.txt");
    while(getline(inputl, s)){
        lvec.push_back(s);
    }
    inputl.close();

    for (size_t i = 0; i < lvec.size(); i++){
        cout << lvec[i] << endl;
    }

    return 0;
}
