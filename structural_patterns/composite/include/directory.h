#ifndef COMPOSITE_DIRECTORY_H_
#define COMPOSITE_DIRECTORY_H_

#include <vector>
#include <iostream>
#include "fileSystemElement.h"

class Directory: public FileSystemElement
{
private:
    string name;
    vector<FileSystemElement*> elements;

public:
    Directory(const string& name);

    ~Directory();

    const string getName() const;

    const int getSize() const;

    void print(const string& upper_path) const;

    void add(FileSystemElement* element);
};

#endif
