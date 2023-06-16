#ifndef ABSTRACT_FACTORY_LIST_PAGE_H
#define ABSTRACT_FACTORY_LIST_PAGE_H

#include <string>
#include "factory/page.h"
#include <sstream>

using namespace std;

class ListPage: public Page
{
public:
	ListPage(const string& title, const string& author);

	~ListPage();

	const string toHTML() const;
};

#endif