#ifndef DECORATOR_DISPLAY_H_
#define DECORATOR_DISPLAY_H_

#include <string>
#include <iostream>

using namespace std;

class Display
{
public:
    virtual ~Display();

    virtual const int getColumns() const = 0;

    virtual const int getRows() const = 0;

    virtual const string getLineText(const int row) const = 0;

    void show() const;
};

#endif