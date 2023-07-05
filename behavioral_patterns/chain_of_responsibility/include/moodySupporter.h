#ifndef CHAIN_OF_RESPONSIBILITY_MOODYSUPPORTER_H_
#define CHAIN_OF_RESPONSIBILITY_MOODYSUPPORTER_H_

#include <string>
#include "supporter.h"

using namespace std;

class MoodySupporter : public Supporter
{
public:
    MoodySupporter(const string& name);

    ~MoodySupporter();

    bool canHandle(const Trouble* trouble) const;
};

#endif