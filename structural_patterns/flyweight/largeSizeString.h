#ifndef FLYWEIGHT_LARGESIZESTRING_H_
#define FLYWEIGHT_LARGESIZESTRING_H_

#include <string>
#include <vector>
#include "largeSizeChar.h"
#include "largeSizeCharFactory.h"

using namespace std;

class LargeSizeString
{
private:
    vector<LargeSizeChar*> large_size_chars;

public:
    LargeSizeString(const string& string_data);

    ~LargeSizeString();

    void display() const;
};

#endif