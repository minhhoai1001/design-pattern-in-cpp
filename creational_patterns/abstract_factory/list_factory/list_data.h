#ifndef ABSTRACT_FACTORY_LIST_DATA_H
#define ABSTRACT_FACTORY_LIST_DATA_H

#include <string>
#include "factory/data.h"

using namespace std;

class ListData: public Data
{
public:
	ListData(const string& name);

	~ListData();

	const string toHTML() const;
};

#endif