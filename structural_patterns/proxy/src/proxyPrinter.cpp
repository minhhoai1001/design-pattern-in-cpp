#include "include/proxyPrinter.h"
#include "include/realPrinter.h"

ProxyPrinter::ProxyPrinter(const string& name)
    :current_name(name), real(nullptr)
{

}

ProxyPrinter::~ProxyPrinter()
{
    if (real !=nullptr)
    {
        delete real;
    }
}

const string ProxyPrinter::getName() const
{
    if(real != nullptr)
    {
        return real->getName();
    }
    else
    {
        return current_name;
    }
}

void ProxyPrinter::chageName(const string& name)
{
    if(real != nullptr)
    {
        real->chageName(name);
    }

    current_name = name;
}

void ProxyPrinter::output(const string& content)
{
    if(real == nullptr)
    {
        real = new RealPrinter(current_name);
    }
    
    real->output(content);
}