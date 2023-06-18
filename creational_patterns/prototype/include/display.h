#ifndef PROTOTYPE_DISPLAY_H_
#define PROTOTYPE_DISPLAY_H_

#include <string>

using namespace std;

class Display
{
public:
    virtual ~Display();

    virtual Display* clone() = 0;

    virtual void show(const string& message) const = 0;
};

#endif