#include "include/messageDisplay.h"

MessageDisplay::MessageDisplay(const string& message)
    : message(message)
{

}

MessageDisplay::~MessageDisplay()
{

}

void MessageDisplay::displayWithHyphens() const
{
    cout << "-- " << message << " --" << endl;
}

void MessageDisplay::displayWithBrackets() const
{
    cout << "[[ " << message << " ]]" << endl;
}