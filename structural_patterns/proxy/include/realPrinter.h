#ifndef PROXY_REAL_PRINTER_H_
#define PROXY_REAL_PRINTER_H_

#include "printer.h"
#include <iostream>
#include <unistd.h>

class RealPrinter: public Printer
{
private:
    string name;

    void heavyTask(const string& message) const;

public:
    RealPrinter(const string& name);

    ~RealPrinter();

    const string getName() const;

    void chageName(const string& name);

    void output(const string& content);
};

#endif