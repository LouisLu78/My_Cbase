#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

string toString(string&a, string&b)
{
    string s;

    s = a + " of " + b;
    return s;
}

void shuffle(vector<string>&deck)
{
    for (int i = 0; i <10000; i++){
        int m = rand() % 52;
        int n = rand() % 52;
        string temp;
        if (m != n){
            temp = deck[m];
            deck[m] = deck[n];
            deck[n] = temp;
        }
    }
}

int main()
{
    string sface[] = {"A", "2", "3", "4", "5",
                        "6", "7", "8", "9", "10", "J", "Q", "K"};

    string ssuit[] = {"Heart", "Diamond", "Club", "Spade"};

    srand(time(NULL));

    vector<string> svec;

    for (int i = 0; i < 13; i++){
        for (int j = 0; j < 4; j++){
            svec.push_back(toString(sface[i], ssuit[j]));
        }
    }

    shuffle(svec);

    for (int i = 0; i < 52; i++){
        cout << left << setw(20) << svec[i];
        if (i % 4 == 3){
            cout << endl;
        }
    }

    return 0;
}
