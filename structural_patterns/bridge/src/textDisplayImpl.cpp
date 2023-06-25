#include "include/textDisplayImpl.h"

TextDisplayImpl::TextDisplayImpl(const string& text)
    :text(text), width(static_cast<int>(text.size()))
{

}

TextDisplayImpl::~TextDisplayImpl()
{

}

void TextDisplayImpl::implOpen() const
{
    printLine();
}

void TextDisplayImpl::implWrite() const
{
    cout << ":" << text << ":" <<endl;
}

void TextDisplayImpl::implClose() const
{
    printLine();
}

void TextDisplayImpl::printLine() const
{
    cout << "*";
    for (int i=0; i<width; i++)
    {
        cout << ".";
    }
    cout <<"*" << endl;
}