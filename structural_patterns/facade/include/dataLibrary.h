#ifndef FACADE_DATA_LIBRARY_H_
#define FACADE_DATA_LIBRARY_H_

#include <map>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class DataLibrary
{
private:
   DataLibrary();

public:
    static DataLibrary* getInstance();

    ~DataLibrary();

    const map<string, string> getProperties(const string& data_library_name) const;
};

#endif