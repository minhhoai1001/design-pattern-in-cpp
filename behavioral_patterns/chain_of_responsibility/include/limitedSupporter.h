#ifndef CHAIN_OF_RESPONSIBILITY_LIMITEDSUPPORTER_H_
#define CHAIN_OF_RESPONSIBILITY_LIMITEDSUPPORTER_H_

#include <string>
#include "supporter.h"

using namespace std;

class LimitSupporter: public Supporter
{
private:
    const int limit_id;

public:
    LimitSupporter(const string& name, const int limit_id);

    ~LimitSupporter();

    bool canHandle(const Trouble* trouble) const;
};

#endif