#ifndef RANDOMSENTENCE_H_INCLUDED
#define RANDOMSENTENCE_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

int getNumber();

class RandomSentence
{
private:
    static string article[];
    static string noun[];
    static string verb[];
    static string preposition[];

    string sentence;

public:
    RandomSentence();
    string capitalize(string );
    void connection();
    void print() const;
};

#endif // RANDOMSENTENCE_H_INCLUDED
