#ifndef PROTOTYPE_UNDER_LINE_DISPLAY_H_
#define PROTOTYPE_UNDER_LINE_DISPLAY_H_

#include <string>
#include "display.h"

using namespace std;

class UnderLineDisplay: public Display
{
private:
    char underline_char;

public:
    UnderLineDisplay(char underline_char);

    ~UnderLineDisplay();

    Display* clone();

    void show(const string& message) const;
};

#endif