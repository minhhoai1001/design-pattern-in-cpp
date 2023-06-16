#include "list_link.h"

ListLink::ListLink(const string& name, const string& url)
    :Link(name, url)
{

}

ListLink::~ListLink()
{

}

const string ListLink::toHTML() const
{
    return "  <li><a href=\"" + url + "\">" + name + "</a></li>\n";
}