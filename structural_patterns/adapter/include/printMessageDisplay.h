#ifndef ADAPTER_PRINT_MESSAGE_DISPLAY_H_
#define ADAPTER_PRINT_MESSAGE_DISPLAY_H_

#include <string>
#include "messageDisplay.h"
#include "print.h"

using namespace std;

class PrintMessageDisplay : public Print, public MessageDisplay
{
public:
    PrintMessageDisplay(const string& message);

    ~PrintMessageDisplay();

    void printWeak() const;

    void printStrong() const;

};

#endif