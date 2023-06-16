#ifndef ABSTRACT_FACTORY_LINK_H
#define ABSTRACT_FACTORY_LINK_H

#include "item.h"
#include <string>

using namespace std;

class Link : public Item
{
protected:
    const string url;
public:
    Link(const string& name, const string& url);
    
    ~Link();
};

#endif