#include <iostream>
#include <memory>
#include <string>
#include "unistd.h"

#include "include/director.h"
#include "include/builder.h"
#include "include/htmlBuilder.h"
#include "include/plainTextBuilder.h"

int main(int argc, char* argv[])
{
    std::cout << "Please enter \"plain\" or \"html\":" <<endl;
    std::string input = "";
    std::cin>>input;

    if (input == "plain")
    {
        std::unique_ptr<PlainTextBuilder> plain_text_builder = std::make_unique<PlainTextBuilder>();
        std::unique_ptr<Director> director = std::make_unique<Director>(plain_text_builder.get());
        director->buid();
        std::string content = plain_text_builder->getContent();

        std::cout <<content <<endl;
    }
    else if (input == "html")
    {
        std::unique_ptr<HTMLBuilder> html_builder = std::make_unique<HTMLBuilder>();
        std::unique_ptr<Director> director = std::make_unique<Director>(html_builder.get());
        director->buid();
        std::string file_name  = html_builder->getFileName();

        std::cout <<file_name  <<endl;

        // Get the current directory path
        char current_directory_path[255];
        getcwd(current_directory_path, 255);
        std::cout << "Output file: " << current_directory_path << "/" << file_name << endl;
    }
    else
    {
        std::cerr <<"The value is not \"plain\" or \"html\"." << std::endl;
        exit(1);
    }

    return 0;
}

