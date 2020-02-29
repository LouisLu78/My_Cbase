#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef vector<string> SVEC;

SVEC phoneWords(int number)
{
    SVEC word, wordTemp;
    int tempHead, tempEnd;
    string s;

    string digit[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS",
                    "TUV", "WXY"};
    if (number > 1 && number < 10){
        for (string::iterator i = digit[number].begin(); i < digit[number].end(); i++){
            word.push_back(s+*i);
            s = "";
        }
        return word;
    }
    else{
        tempHead = number / 10;
        wordTemp = phoneWords(tempHead);

        tempEnd = number % 10;
        if (tempEnd > 1){
            for (size_t i = 0; i < wordTemp.size(); i++) {
                for (string::iterator iter = digit[tempEnd].begin(); iter < digit[tempEnd].end(); iter++){
                    wordTemp.push_back(wordTemp[i] + *iter);
                }
            }
        }
        word = wordTemp;
        wordTemp.clear();
    }
}

int main()
{
    int n = 2357;
    SVEC result = phoneWords(n);
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}to be finished later
