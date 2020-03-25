#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "RandomSentence.h"

using namespace std;

int getNumber()
{
    return rand() % 5;
}

string RandomSentence::article[] = {"the", "a", "one", "some", "any"};
string RandomSentence::noun[] = {"boy", "girl", "dog", "town", "car"};
string RandomSentence::verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
string RandomSentence::preposition[] = {"to", "from", "on", "under", "over"};

RandomSentence::RandomSentence()
{
    sentence = "";
}

string RandomSentence::capitalize(string &word)
{
    string t;
    char s = toupper(word[0]);

    return t + s + word.substr(1);
}

void RandomSentence::connection()
{
    string t;
    int M, N = getNumber();
    t = capitalize(article[getNumber()]) + " " + noun[N] + " "\
        + verb[getNumber()] + " " + preposition[getNumber()] + " ";
    while (N == (M = getNumber())){
        continue;
    }
    t += (article[getNumber()] + " " + noun[M] + ".");

    sentence = t;
}

void RandomSentence::print() const
{
    cout << sentence << endl;
}

