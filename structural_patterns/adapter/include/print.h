#ifndef ADAPTER_PRINT_H_
#define ADAPTER_PRINT_H_

class Print
{
public:
    virtual ~Print();

    virtual void printWeak() const = 0;

    virtual void printStrong() const = 0;
};

#endif