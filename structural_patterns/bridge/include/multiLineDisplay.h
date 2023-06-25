#ifndef BRIDGE_MULTILINEDISPLAY_H_
#define BRIDGE_MULTILINEDISPLAY_H_

#include "display.h"

class DisplayImpl;

class MultiLineDisplay: public Display
{
public:
    MultiLineDisplay(DisplayImpl* impl);

    ~MultiLineDisplay();

    void outputMultiple(const int times) const;
};

#endif