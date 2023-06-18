#ifndef PROTOTYPE_FRAME_DISPLAY_H_
#define PROTOTYPE_FRAME_DISPLAY_H_

#include <string>
#include "display.h"

using namespace std;

class FrameDisplay: public Display
{
private:
    char border_char;

public:
    FrameDisplay(char border_char);

    ~FrameDisplay();

    Display* clone();

    void show(const string& message) const;
};

#endif