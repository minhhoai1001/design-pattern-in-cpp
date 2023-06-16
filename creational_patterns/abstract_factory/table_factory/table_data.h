#ifndef ABSTRACT_FACTORY_TABLE_DATA_H
#define ABSTRACT_FACTORY_TABLE_DATA_H

#include <string>
#include <sstream>
#include "factory/data.h"

using namespace std;

class TableData: public Data
{
public:
    TableData(const string& name);

    ~TableData();
    
    const string toHTML() const;
};

#endif