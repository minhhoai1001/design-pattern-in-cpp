#ifndef ABSTRACT_FACTORY_TABLE_LINK_H
#define ABSTRACT_FACTORY_TABLE_LINK_H

#include <string>
#include "factory/link.h"

using namespace std;

class TableLink: public Link
{
public:
    TableLink(const string& name, const string& url);
    ~TableLink();
    const string toHTML() const;
};

#endif