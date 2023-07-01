#ifndef DECORATOR_FULL_FRAME_H_
#define DECORATOR_FULL_FRAME_H_

#include "frame.h"
#include "display.h"
#include <string>
#include <sstream>

using namespace std;

class Display;

class FullFrame: public Frame
{
private:
    const string createLine(const char ch, const int size) const;
    
public:
    FullFrame(const Display* display);

    ~FullFrame();

    const int getColumns() const;

    const int getRows() const;

    const string getLineText(const int row) const;

};

#endif