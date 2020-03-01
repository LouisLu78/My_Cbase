#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream input;
    string s;
    vector<string>svec;

    input.open("test.txt");
    while(input >> s){
        svec.push_back(s);
    }
    input.close();
    input.clear();

    for (size_t i = 0; i < svec.size(); i++){
        cout << svec[i] << " ";
        if (i % 10 == 9){
            cout << endl;
        }
    }


    return 0;
}
