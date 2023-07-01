#include "include/htmlWriter.h"

HTMLWriter::HTMLWriter(const string& file_name)
{
    writer.open(file_name);
    if (writer.fail() == true)
    {
        cerr << "Failed to create file: " << file_name << endl;
    }
}

HTMLWriter::~HTMLWriter()
{

}

void HTMLWriter::heading(const string& title)
{
    writer << "<html>";
    writer << "<head><title>" << title << "</title></head>";
    writer << "<body>" << endl;
    writer << "<h1>" << title << "</h1>" << endl;
}

void HTMLWriter::paragraph(const string& message)
{
    writer << "<p>" << message << "</p>" << endl;
}

void HTMLWriter::mailto(const string& mail_address, const string& user_name)
{
    this->anchor("mailto:" + mail_address, user_name);
}

void HTMLWriter::anchor(const string& url, const string& text)
{
    this->paragraph("<a href=\"" + url + "\">" + text + "</a>");
}

void HTMLWriter::close()
{
    writer << "</body>";
    writer << "</html>" << endl;
    writer.close();
}