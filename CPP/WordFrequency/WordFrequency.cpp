//Author: Guangqiang Lu
//Time: 20200415
//Email: gq4350lu@hotmail.com

#include <iostream>
#include <iomanip>
#include <fstream>
#include <set>
#include "WordFrequency.h"

using namespace std;

WordFrequency::WordFrequency(const string&fileName)
{
    ifstream infile;
    infile.open(fileName.c_str());
    if(!infile)
    {
        cout << "The file cannot be opened." << endl;
    }
    else
    {
        string word;
        allWords = 0;
        while(infile >> word)
        {
            ++wordMap[word];
            ++allWords;
        }
        infile.close();
    }
}

int WordFrequency::getWordFrequency(const string& word) const
{
    MSI::const_iterator iter = wordMap.find(word);

    if (iter != wordMap.end())
    {
        return iter->second;
    }
    else
    {
        return -1;
    }
}

int WordFrequency::getWordRank(const string &word) const
{
    int frequency = getWordFrequency(word);
    if(frequency == -1)
    {
        return -1;
    }
    else
    {
        int rank = 1;
        for (MSI::const_iterator iter = wordMap.begin(); iter != wordMap.end(); iter++)
        {
            if(iter->second > frequency)
            {
                rank++;
            }
        }
        return rank;
    }
}

int WordFrequency::getTotalDiffWords() const
{
    int counter = 0;
    for (MSI::const_iterator iter = wordMap.begin(); iter != wordMap.end(); iter++)
    {
        ++counter;
    }
    return counter;
}

int WordFrequency::getAllWords() const
{
    return allWords;
}

void WordFrequency::getTopRankWords(int topNum) const
{
    set<int>iset;
    for(MSI::const_iterator it = wordMap.begin(); it !=wordMap.end(); it++)
    {
        iset.insert(it->second);
    }

    int counter = 0;
    cout << "\nThe top " << topNum << " most frequently used words in this novel are listed below:" << endl;
    cout << left << setw(15) << "Word:" <<  left << setw(15) << "Frequency:" << endl << endl;
    for(set<int>::reverse_iterator rit = iset.rbegin(); rit !=iset.rend(); rit++)
    {
        for(MSI::const_iterator it =wordMap.begin(); it != wordMap.end(); it++)
        {
            if (counter >= topNum)
            {
                break;
            }
            if(*rit == it->second)
            {
                cout << left << setw(15) << it->first <<  left << setw(15) << it->second << endl;
                counter++;
            }
        }
        cout << endl;
        if (counter >= topNum)
        {
            break;
        }
    }
}





