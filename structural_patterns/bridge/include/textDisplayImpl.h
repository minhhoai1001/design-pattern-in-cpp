#ifndef BRIDGE_TEXTDISPLAYIMPL_H_
#define BRIDGE_TEXTDISPLAYIMPL_H_

#include <string>
#include <iostream>
#include "displayImpl.h"

using namespace std;

class TextDisplayImpl: public DisplayImpl
{
private:
    // A string to display
    const string text;

    // number of characters in bytes
    const int width;

    void printLine() const;

public:
    TextDisplayImpl(const string& text);

    ~TextDisplayImpl();

    void implOpen() const;

    void implWrite() const;

    void implClose() const;
};


#endif