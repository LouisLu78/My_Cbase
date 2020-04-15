#include <iostream>
#include <string>
#include "WordFrequency.h"

using namespace std;

int main()
{
    WordFrequency wf("..\\Romeo.txt");

    cout << "The word \"love\" appears "<< wf.getWordFrequency("love") << " times."<< endl;
    cout <<"The word \"love\" is the "<< wf.getWordRank("love") << "th most frequent word in the novel." << endl;
    cout <<"The novel contains " <<  wf.getTotalWords() << " different words." << endl;

    return 0;
}
