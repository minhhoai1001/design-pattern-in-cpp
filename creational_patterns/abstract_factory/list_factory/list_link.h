#ifndef ABSTRACT_FACTORY_LIST_LINK_H
#define ABSTRACT_FACTORY_LIST_LINK_H

#include <string>
#include "factory/link.h"

using namespace std;

class ListLink: public Link
{
public:
    ListLink(const string& name, const string& url);

	~ListLink();

	const string toHTML() const;
};

#endif