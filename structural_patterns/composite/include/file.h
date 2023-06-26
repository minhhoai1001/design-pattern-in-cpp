#ifndef COMPOSITE_FILE_H_
#define COMPOSITE_FILE_H_

#include <iostream>
#include "fileSystemElement.h"

using namespace std;

class File: public FileSystemElement
{
private:
    const string name;
    const int size;

public:
    File(const string& name, const int size);

    ~File();

    const string getName() const;

    const int getSize() const;

    void print(const string& upper_path) const;
};

#endif