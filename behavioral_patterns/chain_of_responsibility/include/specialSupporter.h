#ifndef CHAIN_OF_RESPONSIBILITY_SPECIALSUPPORTER_H_
#define CHAIN_OF_RESPONSIBILITY_SPECIALSUPPORTER_H_

#include <string>
#include "supporter.h"

using namespace std;

class SpecialSupporter : public Supporter
{
private:
    const int target_id;

public:
    SpecialSupporter(const string& name, const int target_id);

    ~SpecialSupporter();

    bool canHandle(const Trouble* trouble) const;
};

#endif