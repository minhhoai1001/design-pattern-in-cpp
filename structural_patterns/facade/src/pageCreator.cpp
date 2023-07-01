#include "include/pageCreator.h"

PageCreator* PageCreator::getInstance()
{
    static PageCreator* instance = new PageCreator();
    return instance;
}

PageCreator::PageCreator()
{

}

PageCreator::~PageCreator()
{

}

void PageCreator::createSimpleHomepage(const string& mail_address, const string& html_file_name)
{
    char current_directory_path[255];
    getcwd(current_directory_path, 255);

    map<string, string> address_book = DataLibrary::getInstance()->getProperties(string(current_directory_path) + "/addressbook.txt");
    const string user_name = address_book[mail_address];

    HTMLWriter writer(html_file_name);
    writer.heading(user_name + "'s homepage");
    writer.paragraph("Welcome to " + user_name + "'s homepage.");
    writer.paragraph("Please email me at this address.");
    writer.mailto(mail_address, user_name);
    writer.close();
    
    cout << html_file_name << " is created for " << mail_address << " (" << user_name << ")" << endl;
    cout << "Output file: " << current_directory_path << "/" << html_file_name << endl;
}