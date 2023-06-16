#include "page.h"

Page::Page(const string& title, const string& author)
    :title(title), author(author)
{
    
}

Page::~Page()
{
    contents.clear();
}

void Page::add(Item* item)
{
    contents.push_back(item);
}

void Page::output()
{
    const string file_name = title + ".html";
    ofstream write(file_name);
    if(write.fail() == false)
    {
        write << toHTML();
        cout << file_name << " has been create. \n";

        char current_dir[255];

        getcwd(current_dir, 255);

        cout << "Output file: "<< current_dir << "/"<<file_name << endl;
    }
    else
    {
        cerr << "Failed to output file: " << file_name << endl;
    }
}