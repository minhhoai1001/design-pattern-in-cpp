#ifndef CHAIN_OF_RESPONSIBILITY_SUPPORTER_H_
#define CHAIN_OF_RESPONSIBILITY_SUPPORTER_H_

#include <string>
#include <iostream>
#include "trouble.h"

using namespace std;

class Supporter
{
private:
    string name;

    Supporter* next;

    // Trouble was supported.
    void supported(const Trouble* trouble) const;

    //  Trouble was unsupported.
    void unsupported(const Trouble* trouble) const;

protected:
    virtual bool canHandle(const Trouble* trouble) const = 0;

public:
    Supporter(const string name);

    virtual ~Supporter();

    void support(const Trouble* trouble) const;

    // Set a next supporter and return it.
    Supporter* setNext(Supporter* next);
};

#endif