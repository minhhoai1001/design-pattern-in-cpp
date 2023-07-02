#include "largeSizeChar.h"

LargeSizeChar::LargeSizeChar(const char char_name)
    :display_data("")
{
    char current_dir[255];
    getcwd(current_dir, 255);

    ifstream ifs(string(current_dir) + "/text/big" + char_name + ".txt");
    if(ifs.is_open())
    {
        string line;
        while (getline(ifs, line))
        {
            display_data += line + "\n";
        }
    }
    else
    {
        display_data = string(1, char_name) + "?";
    }
}

LargeSizeChar::~LargeSizeChar()
{

}

void LargeSizeChar::display() const
{
    cout << display_data << endl;
}