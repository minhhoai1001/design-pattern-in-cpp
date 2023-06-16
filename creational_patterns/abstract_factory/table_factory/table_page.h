#ifndef ABSTRACT_FACTORY_TABLE_PAGE_H
#define ABSTRACT_FACTORY_TABLE_PAGE_H

#include <string>
#include <sstream>
#include "factory/page.h"

using namespace std;

class TablePage: public Page
{
public:
    TablePage(const string& title, const string& author);
    ~TablePage();
    const string toHTML() const;
};

#endif