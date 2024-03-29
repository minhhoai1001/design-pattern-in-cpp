#include "table_data.h"
#include "factory/item.h"

TableData::TableData(const string& name)
    :Data(name)
{

}

TableData::~TableData()
{

}

const string TableData::toHTML() const
{
    stringstream buffer;
    buffer << "<td><table width=\"100%\" border=\"2\">" << endl;
    buffer << "<tr><td bgcolor=\"#00CC00\" align=\"center\" colspan=\"" 
            << to_string(items.size()) << "\"><b>" << name << "</b></td></tr>" << endl;
    buffer << "<tr>" << endl;
    for (Item* item : items) 
    {
        buffer << item->toHTML();
    }
    buffer << "</tr>" << endl;
    buffer << "</table></td>" << endl;

    return buffer.str();
}