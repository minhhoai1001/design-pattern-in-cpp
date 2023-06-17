#ifndef BUILDER_PLAN_TEXT_BUILDER_H_
#define BUILDER_PLAN_TEXT_BUILDER_H_

#include "builder.h"
#include <string>
#include <sstream>

using namespace std;

class PlainTextBuilder: public Builder
{
private:
    stringstream buffer;

public:
    PlainTextBuilder();
    ~PlainTextBuilder();

    void createTitle(const string& title);

    void createSection(const string& section);

    void createItems(const vector<string> items);

    void close();

    const string getContent() const;
};

#endif