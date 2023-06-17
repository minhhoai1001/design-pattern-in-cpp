#ifndef BUILDER_HTML_BUILDER_H_
#define BUILDER_HTML_BUILDER_H_

#include "builder.h"
#include <string>
#include <fstream>

using namespace std;

class HTMLBuilder: public Builder
{
private:
    string file_name;
    ofstream writer;

public:
    HTMLBuilder();

    ~HTMLBuilder();

    void createTitle(const string& title);

    void createSection(const string& section);

    void createItems(const vector<string> items);

    void close();

    const string getFileName() const;
};

#endif