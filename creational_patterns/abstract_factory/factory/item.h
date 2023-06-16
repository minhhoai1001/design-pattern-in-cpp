#ifndef ABSTRACT_FACTORY_ITEM_H
#define ABSTRACT_FACTORY_ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item
{
protected:
    const string name;
public:
    Item(const string & name);

    ~Item();
    
    virtual const string toHTML() const = 0;
};

#endif