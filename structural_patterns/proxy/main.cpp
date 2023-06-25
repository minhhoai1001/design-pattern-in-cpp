#include <iostream>
#include <memory>
#include "include/proxyPrinter.h"

int main(int argc, char* argv[])
{
    std::unique_ptr<ProxyPrinter> p(new ProxyPrinter("PRINTER-A"));
    std::cout << "The current printer is " << p->getName() << std::endl;
    p->chageName("PRINTER-B");
    std::cout << "The current printer is " << p->getName() << std::endl;

    std::cout << "Print start." << std::endl;
    p->output("Nice to meeting you.");
    std::cout << "Print exit." << std::endl;

    return 0;
}