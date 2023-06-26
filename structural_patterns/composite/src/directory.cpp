#include "include/directory.h"

Directory::Directory(const string& name)
    :name(name)
{

}

Directory::~Directory()
{

}

const string Directory::getName() const
{
    return name;
}

const int Directory::getSize() const
{
    int size = 0;
    for( auto* element: elements)
    {
        size += element->getSize();
    }
    return size;
}

void Directory::print(const string& upper_path) const
{
    cout << upper_path << "/" << this->toString() << endl;
    for( auto* element: elements)
    {
        element->print(upper_path + "/" + name);
    }
}

void Directory::add(FileSystemElement* element)
{
    elements.push_back(element);
}