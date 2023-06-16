#ifndef ABSTRACT_FACTORY_LIST_FACTORY_H
#define ABSTRACT_FACTORY_LIST_FACTORY_H

#include <string>
#include "factory/factory.h"

class Page;
class Link;
class Data;

class ListFactory : public Factory
{
public:
	ListFactory();

	~ListFactory();

	Page* createPage(const string& title, const string& author);

	Link* createLink(const string& name, const string& url);

	Data* createData(const string& name);
};

#endif