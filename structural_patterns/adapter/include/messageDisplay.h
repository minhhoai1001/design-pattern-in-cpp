#ifndef ADAPTER_MESSAGE_DISPLAY_H_
#define ADAPTER_MESSAGE_DISPLAY_H_

#include <string>
#include <iostream>

using namespace std;

class MessageDisplay
{
private:
    const string message;

public:
    MessageDisplay(const string& message);

    virtual ~MessageDisplay();

    void displayWithHyphens() const;

    void displayWithBrackets() const;
};

#endif