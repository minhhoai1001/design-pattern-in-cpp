#ifndef ABSTRACT_FACTORY_FACTORY_H
#define ABSTRACT_FACTORY_FACTORY_H

#include <string>

class Page;
class Link;
class Data;

using namespace std;

class Factory
{
public:

	virtual ~Factory();

	virtual Page* createPage(const string& title, const string& author) = 0;

	virtual Link* createLink(const string& name, const string& url) = 0;

	virtual Data* createData(const string& name) = 0;
};

#endif