#include "include/display.h"

Display::~Display()
{

}

void Display::show() const
{
    for (int i=0; i<getRows(); i++)
    {
        cout << getLineText(i) << endl;
    }
}