#ifndef COMPOSITE_FILESYSTEMELEMENT_H_
#define COMPOSITE_FILESYSTEMELEMENT_H_

#include <string>

using namespace std;

class FileSystemElement
{
public:
    FileSystemElement();

    virtual ~FileSystemElement();

    virtual const string getName() const = 0;

    virtual const int getSize() const = 0;

    virtual void print(const string& upper_path) const = 0;

    const string toString() const;

};

#endif