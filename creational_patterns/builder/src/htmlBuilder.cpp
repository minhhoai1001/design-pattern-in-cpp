#include "include/htmlBuilder.h"

HTMLBuilder::HTMLBuilder()
{
    file_name = "";
}

HTMLBuilder::~HTMLBuilder()
{

}

void HTMLBuilder::createTitle(const string& title)
{
    file_name = title + ".html";
    writer.open(file_name);
    writer << "<html><head><title>" << title << "</title></head><body>" << endl;
    writer << "<h1>" << title << "</h1>" <<endl;
}

void HTMLBuilder::createSection(const string& section)
{
    writer << "<p>" << section << "</p>" << endl;
}

void HTMLBuilder::createItems(const vector<string> items)
{
    writer << "<ul>" << endl;
    for( auto item: items)
    {
        writer << "<li>" << item << "</li>";
    }

    writer << "</ul>" <<endl;
}

void HTMLBuilder::close()
{
    writer << "</body></html>" <<endl;
    writer.close();
}

const string HTMLBuilder::getFileName() const
{
    return file_name;
}