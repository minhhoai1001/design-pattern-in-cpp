#ifndef ABSTRACT_FACTORY_DATA_H
#define ABSTRACT_FACTORY_DATA_H

#include "item.h"
#include <string>
#include <vector>

using namespace std;

class Data : public Item
{
protected:
    vector<Item*> items;

public:
    Data(const string& name);

    virtual ~Data();
    
    void add(Item* item);
};

#endif