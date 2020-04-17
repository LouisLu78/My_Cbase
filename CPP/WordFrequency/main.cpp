#include <iostream>
#include "WordFrequency.h"

using namespace std;

int main()
{
    WordFrequency wf("..\\Romeo.txt");

    cout <<"The novel contains " <<  wf.getAllWords() << " words, in which there are "
            << wf.getTotalDiffWords() << " different words." << endl;
    cout << endl;
    cout << "The word \"love\" appears for "<< wf.getWordFrequency("love") << " times."<< endl;
    cout <<"The word \"love\" is the "<< wf.getWordRank("love") << "th most frequent word in the novel." << endl;
    cout << endl;

    cout << "The word \"Juliet\" appears for "<< wf.getWordFrequency("Juliet") << " times."<< endl;
    cout <<"The word \"Juliet\" is the "<< wf.getWordRank("Juliet") << "th most frequent word in the novel." << endl;
    cout << endl;

    cout << "The word \"Romeo\" appears for "<< wf.getWordFrequency("Romeo") << " times."<< endl;
    cout <<"The word \"Romeo\" is the "<< wf.getWordRank("Romeo") << "th most frequent word in the novel." << endl;

    wf.getTopRankWords(75);

    return 0;
}//This is the final version.
