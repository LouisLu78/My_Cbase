#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef vector<string> SVEC;

SVEC phoneWords(int number)
{
    SVEC word, wordTemp;
    int tempHead, tempEnd;
    const string s;

    string digit[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS",
                    "TUV", "WXY"};

    if (number > 1 && number < 10){
        for (string::iterator i = digit[number].begin(); i < digit[number].end(); i++){
            word.push_back(s + *i);
        }
    }
    else{
        tempHead = number / 10;
        wordTemp = phoneWords(tempHead);
        word.clear();
        tempEnd = number % 10;
        if (tempEnd > 1){
            for (size_t i = 0; i < wordTemp.size(); i++) {
                for (string::iterator iter = digit[tempEnd].begin(); iter < digit[tempEnd].end(); iter++){
                    word.push_back(wordTemp[i] + *iter);
                }
            }
        }
    }
    return word;
}

int main()
{
    int n = 53479365;
    SVEC result = phoneWords(n);

    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << " ";
        if (i % 20 == 19){
            cout << endl;
        }
    }
    cout << "\n\nThe dictionary totally contains " << result.size() << " words." << endl << endl;

    return 0;
}
