#ifndef PROXY_PROXY_PRINTER_H_
#define PROXY_PROXY_PRINTER_H_

#include "printer.h"

class RealPrinter;

class ProxyPrinter: public Printer
{
private:
    string current_name;

    RealPrinter* real;

public:
    ProxyPrinter(const string& name);

	~ProxyPrinter();
    
    const string getName() const;

    void chageName(const string& name);

    void output(const string& content);
};

#endif