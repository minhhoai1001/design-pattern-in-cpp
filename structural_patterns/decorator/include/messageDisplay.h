#ifndef DECORATOR_MESSAGE_DISPLAY_H_
#define DECORATOR_MESSAGE_DISPLAY_H_

#include <string>
#include "display.h"

using namespace std;

class MessageDisplay: public Display
{
private:
    const string message;

public:
    MessageDisplay(const string& message);

    ~MessageDisplay();

    const int getColumns() const;

    const int getRows() const;

    const string getLineText(const int row) const;
};

#endif