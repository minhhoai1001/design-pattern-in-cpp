#include "list_data.h"
#include "factory/item.h"
#include <sstream>

ListData::ListData(const string& name)
    :Data(name)
{

}

ListData::~ListData()
{

}

const string ListData::toHTML() const
{
    stringstream buffer;
    buffer << "<li>" << name << "<ul>" <<endl;
    for(auto* item: items)
    {
        buffer << item->toHTML();
    }
    buffer << "</ul></li>" << endl;

    return buffer.str();
}
