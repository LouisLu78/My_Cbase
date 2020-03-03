#include <iostream>
#include <string>
#include <set>

using namespace std;
typedef set<string> SST;

SST phoneWords(int number)
{
    SST word, wordTemp;
    int tempHead, tempEnd;
    const string s;

    string digit[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS",
                    "TUV", "WXY"};

    if (number > 1 && number < 10){
        for (string::iterator i = digit[number].begin(); i < digit[number].end(); i++){
            word.insert(s + *i);
        }
    }
    else{
        tempHead = number / 10;
        wordTemp = phoneWords(tempHead);
        word.clear();
        tempEnd = number % 10;
        if (tempEnd > 1){
            for (SST::iterator i = wordTemp.begin(); i != wordTemp.end(); i++) {
                for (string::iterator iter = digit[tempEnd].begin(); iter < digit[tempEnd].end(); iter++){
                    word.insert(*i + *iter);
                }
            }
        }
    }
    return word;
}

int main()
{
    int n = 534793658;
    SST result = phoneWords(n);

    for (SST::iterator i = result.begin(); i != result.end(); i++){
        cout << *i << " ";

    }
    cout << "\n\nThe dictionary totally contains " << result.size() << " words." << endl << endl;

    return 0;
}
