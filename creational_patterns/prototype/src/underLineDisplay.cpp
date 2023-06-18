#include <iostream>
#include "include/underLineDisplay.h"

UnderLineDisplay::UnderLineDisplay(char underline_char)
    :underline_char(underline_char)
{

}

UnderLineDisplay::~UnderLineDisplay()
{

}

Display* UnderLineDisplay::clone()
{
    return new UnderLineDisplay(underline_char);
}

void UnderLineDisplay::show(const string& message) const
{
    const int length = static_cast<int>(message.size());
    cout << "\"" << message << "\"" <<endl;
    cout << " ";
    for(int i=0; i<length; ++i)
    {
        cout << underline_char;
    }
    cout << endl;
}