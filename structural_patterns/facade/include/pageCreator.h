#ifndef FACADE_PAGECREATOR_H_
#define FACADE_PAGECREATOR_H_

#include <string>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "dataLibrary.h"
#include "htmlWriter.h"

using namespace std;

class PageCreator
{
private:
    PageCreator();

public:
    static PageCreator* getInstance();

    ~PageCreator();

    void createSimpleHomepage(const string& mail_address, const string& html_file_name);
};

#endif