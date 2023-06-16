#include "table_factory.h"
#include "table_data.h"
#include "table_link.h"
#include "table_page.h"

TableFactory::TableFactory()
{

}

TableFactory::~TableFactory()
{

}

Page* TableFactory::createPage(const string& title, const string& author)
{
    return new TablePage(title, author);
}

Link* TableFactory::createLink(const string& name, const string& url)
{
    return new TableLink(name, url);
}

Data* TableFactory::createData(const string& name)
{
    return new TableData(name);
}