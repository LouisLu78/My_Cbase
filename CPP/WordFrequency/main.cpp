#include <iostream>
#include <iomanip>
#include <algorithm>
#include "WordFrequency.h"

using namespace std;

int main()
{
    WordFrequency wf("..\\Romeo.txt");

    cout << "The word \"love\" appears for "<< wf.getWordFrequency("love") << " times."<< endl;
    cout <<"The word \"love\" is the "<< wf.getWordRank("love") << "th most frequent word in the novel." << endl;
    cout <<"The novel contains " <<  wf.getTotalWords() << " different words." << endl;

    MSI wfWordMap = wf.getMap();
    vector<int>ivec;

    for(MSI::iterator it = wfWordMap.begin(); it !=wfWordMap.end(); it++){
        ivec.push_back(it->second);
    }
    sort(ivec.begin(), ivec.end());
    vector<int>::iterator end_unique = unique(ivec.begin(), ivec.end());
    ivec.erase(end_unique, ivec.end());

    cout << "\nThe top 50 most frequently used words in this novel are listed below:" << endl;
    for(vector<int>::reverse_iterator rit = ivec.rbegin(); rit !=ivec.rbegin() + 50; rit++){
             for(MSI::iterator it = wfWordMap.begin(); it !=wfWordMap.end(); it++){
                if(*rit == it->second){
                    cout << left << setw(15) << it->first <<  left << setw(15) << it->second << endl;
                }
             }
            cout << endl;
    }

    return 0;
}
