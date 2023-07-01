#ifndef DECORATOR_FRAME_H_
#define DECORATOR_FRAME_H_

#include "display.h"

class Frame: public Display
{
protected:
    const Display* display;

    Frame(const Display* display);

public:
    virtual ~Frame();
};

#endif