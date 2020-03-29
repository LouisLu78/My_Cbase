#ifdef __cplusplus
extern "C"
#endif // __cplusplus

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
typedef vector<string> SVEC;

SVEC &phoneWords(long number, SVEC &word)
{
    SVEC wordTemp;
    long tempHead, tempEnd;
    const string s;

    string digit[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS",
                      "TUV", "WXY"
                     };

    if (number > 1 && number < 10)
    {
        for (string::iterator i = digit[number].begin(); i < digit[number].end(); i++)
        {
            word.push_back(s + *i);
        }
    }
    else
    {
        tempHead = number / 10;
        wordTemp = phoneWords(tempHead, word);
        word.clear();
        tempEnd = number % 10;
        if (tempEnd > 1)
        {
            for (size_t i = 0; i < wordTemp.size(); i++)
            {
                for (string::iterator iter = digit[tempEnd].begin(); iter < digit[tempEnd].end(); iter++)
                {
                    word.push_back(wordTemp[i] + *iter);
                }
            }
        }
    }

    return word;
}

int main()
{
    long n = 534793625;
    SVEC result;
    phoneWords(n, result);

    ofstream outfile;
    outfile.open("word.txt");

    FILE *fPtr;
    fPtr = fopen("wordc.txt", "w");

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << left << setw(12) << result[i] << " ";
        outfile << left << setw(15) << result[i] << " ";
        fprintf(fPtr, "%15s ", result[i].c_str());

        if (i % 10 == 9)
        {
            cout << endl;
            outfile << endl;
            fprintf(fPtr,"\n");
        }
    }
    outfile.close();
    fclose(fPtr);
    cout << "\n\nThe dictionary totally contains " << result.size() << " words." << endl << endl;

    return 0;
}
