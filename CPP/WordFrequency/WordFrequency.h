#ifndef WORDFREQUENCY_H_INCLUDED
#define WORDFREQUENCY_H_INCLUDED

#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<string, int> MSI;

class WordFrequency
{
private:
    WordFrequency(const WordFrequency& rhs);
    WordFrequency& operator=(const WordFrequency& rhs);
    //prohibit construction function using copy or assignment of an object

protected:
    MSI wordMap; //building a map of word and its frequency

public:
    WordFrequency(const string &);

    int getWordFrequency(const string &) const;
    int getWordRank(const string &) const;
    int getTotalWords() const;
};

#endif // WORDFREQUENCY_H_INCLUDED
