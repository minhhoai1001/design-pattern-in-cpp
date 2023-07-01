#ifndef DECORATOR_SIDE_FRAME_H_
#define DECORATOR_SIDE_FRAME_H_

#include "frame.h"
#include <string>

using namespace std;

class SideFrame: public Frame
{
private:
    const char frame_char;

public:
    SideFrame(const Display* display, const char frame_char);

    ~SideFrame();

    const int getColumns() const;

    const int getRows() const;

    const string getLineText(const int row) const;
};

#endif