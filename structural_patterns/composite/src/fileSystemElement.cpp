#include "include/fileSystemElement.h"

FileSystemElement::FileSystemElement()
{
}

FileSystemElement::~FileSystemElement()
{
}

const string FileSystemElement::toString() const
{
    return getName() + " (" + to_string(getSize()) + ")";
}