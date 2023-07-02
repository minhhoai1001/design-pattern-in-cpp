#ifndef FLYWEIGHT_LARGESIZECHAR_H_
#define FLYWEIGHT_LARGESIZECHAR_H_

#include <string>
#include <unistd.h>
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

class LargeSizeChar
{
private:
    // Display data of the large size character
    string display_data;

public:
    LargeSizeChar(const char char_name);

    ~LargeSizeChar();

    void display() const;
};

#endif