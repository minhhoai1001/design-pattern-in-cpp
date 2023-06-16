#ifndef ABSTRACT_FACTORY_PAGE_H
#define ABSTRACT_FACTORY_PAGE_H

#include <vector>
#include <string>
#include "item.h"
#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

class Page
{
protected:
    string title;
    string author;
    vector<Item*> contents;
public:
    Page(const string& title, const string& author);

    virtual ~Page();

    virtual const string toHTML() const = 0;

    void add(Item* item);
    
    void output();
};

#endif