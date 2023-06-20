#include "include/printMessageDisplay.h"

PrintMessageDisplay::PrintMessageDisplay(const string& message)
    :MessageDisplay(message)
{

}

PrintMessageDisplay::~PrintMessageDisplay()
{

}

void PrintMessageDisplay::printWeak() const
{
    this->displayWithHyphens();
}

void PrintMessageDisplay::printStrong() const
{
    this->displayWithBrackets();
}