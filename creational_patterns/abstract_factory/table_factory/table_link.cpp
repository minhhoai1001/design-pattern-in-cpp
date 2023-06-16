#include "table_link.h"

TableLink::TableLink(const string& name, const string& url)
    :Link(name, url)
{

}

TableLink::~TableLink()
{

}

const string TableLink::toHTML() const
{
    return "  <td><a href=\"" + url + "\">" + name + "</a></td>\n";
}