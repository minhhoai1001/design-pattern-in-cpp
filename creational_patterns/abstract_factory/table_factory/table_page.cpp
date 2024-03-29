#include "table_page.h"
#include "factory/item.h"

TablePage::TablePage(const string& title, const string& author)
    :Page(title, author)
{

}

TablePage::~TablePage()
{

}

const string TablePage::toHTML() const
{
    stringstream buffer;
    buffer << "<html><head><title>" << title << "</title></head><body>" << endl;
    buffer << "<h1>" << title << "</h1>" << endl;
    buffer << "<table width=\"80%\" border=\"3\">" << endl;
    for (Item* content : contents) \
    {
        buffer << "<tr>" << content->toHTML() << "</tr>" << endl;
    }
    buffer << "</table>" << endl;
    buffer << "<hr><address>" << author << "</address>" << endl;
    buffer << "</body></html>" << endl;

    return buffer.str();
}