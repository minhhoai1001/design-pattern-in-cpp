#include "include/plainTextBuilder.h"

PlainTextBuilder::PlainTextBuilder()
{

}

PlainTextBuilder::~PlainTextBuilder()
{

}

void PlainTextBuilder::createTitle(const string& title)
{
    buffer << "--------------------------------" << endl;
    buffer << "[" << title << "]" <<endl;
    buffer << endl;
}

void PlainTextBuilder::createSection(const string& section)
{
    buffer << "* " << section << endl;
    buffer << endl;
}

void PlainTextBuilder::createItems(const vector<string> items)
{
    for(auto item: items)
    {
        buffer << "  - " << item <<endl;
    }
    buffer <<endl;
}

void PlainTextBuilder::close()
{
    buffer << "---------------------------------------" << endl;
}

const string PlainTextBuilder::getContent() const
{
    return buffer.str();
}