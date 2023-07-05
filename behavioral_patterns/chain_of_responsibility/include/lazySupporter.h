#ifndef CHAIN_OF_RESPONSIBILITY_LAZYSUPPORTER_H_
#define CHAIN_OF_RESPONSIBILITY_LAZYSUPPORTER_H_

#include <string>
#include "supporter.h"

using namespace std;

class LazySupporter: public Supporter
{
public:
    LazySupporter(const string& name);

    ~LazySupporter();

    bool canHandle(const Trouble* trouble) const;
};

#endif