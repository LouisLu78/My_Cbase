#ifndef RANDOMSENTENCE_H_INCLUDED
#define RANDOMSENTENCE_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class RandomSentence
{
private:
    static string article[];
    static string noun[];
    static string verb[];
    static string preposition[];
    static string article[];
    static string noun[];

public:
    RandomSentence();
    string connection(int = 6, ...);
};

#endif // RANDOMSENTENCE_H_INCLUDED
