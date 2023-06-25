#ifndef PROXY_PRINTER_H_
#define PROXY_PRINTER_H_

#include <string>

using namespace std;

class Printer
{
public:
    virtual ~Printer();

    virtual const string getName() const = 0;

    virtual void chageName(const string& name) = 0;

    virtual void output(const string& content) = 0;
};

#endif