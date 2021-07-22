#ifndef SENTENCE_HH
#define SENTENCE_HH

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

#include "./global.hh"

class sentence
{
private:
    string s;

public:
    sentence(int difficulty);
    void addSentence();
    string getSentence();
};

#endif // !SENTENCE_HH