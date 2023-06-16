#include "list_factory.h"
#include "list_data.h"
#include "list_link.h"
#include "list_page.h"

ListFactory::ListFactory()
{

}

ListFactory::~ListFactory()
{

}

Page* ListFactory::createPage(const string& title, const string& author)
{
    return new ListPage(title, author);
}

Link* ListFactory::createLink(const string& name, const string& url)
{
    return new ListLink(name, url);
}

Data* ListFactory::createData(const string& name)
{
    return new ListData(name);
}