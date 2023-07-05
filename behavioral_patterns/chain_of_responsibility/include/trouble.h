#ifndef CHAIN_OF_RESPONSIBILITY_TROUBLE_H_
#define CHAIN_OF_RESPONSIBILITY_TROUBLE_H_

#include <string>

using namespace std;

class Trouble
{
public:
    const int id;

    Trouble(const int id);

    ~Trouble();

    const string toString() const;
};

#endif