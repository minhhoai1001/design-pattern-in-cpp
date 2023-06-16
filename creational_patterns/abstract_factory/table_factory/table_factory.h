#ifndef ABSTRACT_FACTORY_TABLE_FACTORY_H
#define ABSTRACT_FACTORY_TABLE_FACTORY_H

#include <string>
#include "factory/factory.h"

class Page;
class Link;
class Data;

using namespace std;

class TableFactory: public Factory
{
public:
    TableFactory();

	~TableFactory();

	Page* createPage(const string& title, const string& author);

	Link* createLink(const string& name, const string& url);

	Data* createData(const string& name);
};

#endif