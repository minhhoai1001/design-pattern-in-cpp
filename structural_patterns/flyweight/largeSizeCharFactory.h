#ifndef FLYWEIGHT_LARGESIZECHARFACTORY_H_
#define FLYWEIGHT_LARGESIZECHARFACTORY_H_

#include <map>
#include <iostream>
#include "largeSizeChar.h"

using namespace std;

class LargeSizeCharFactory
{
private:
    map<char, LargeSizeChar*> pool_chars;

    LargeSizeCharFactory();

public:
    ~LargeSizeCharFactory();

    static LargeSizeCharFactory* getInstance();

    // Create an instance of the large size character.
    LargeSizeChar* getLargeSizeChar(const char char_name);
};

#endif