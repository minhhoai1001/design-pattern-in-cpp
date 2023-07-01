#ifndef FACADE_HTML_WRITER_H_
#define FACADE_HTML_WRITER_H_

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class HTMLWriter
{
private:
    ofstream writer;

public:
    HTMLWriter( const string& file_name);

    ~HTMLWriter();

    void heading(const string& title);

    void paragraph(const string& message);

    void mailto(const string& mail_address, const string& user_name);

    // Write a link
	void anchor(const string& url, const string& text);

    void close();
};

#endif