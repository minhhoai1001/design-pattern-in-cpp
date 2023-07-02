#include "largeSizeString.h"

LargeSizeString::LargeSizeString(const string& string_data)
{
    for (char char_data: string_data)
    {
        large_size_chars.push_back(LargeSizeCharFactory::getInstance()->getLargeSizeChar(char_data));
    }
}

LargeSizeString::~LargeSizeString()
{

}

void LargeSizeString::display() const
{
    for (auto* large_size_char: large_size_chars)
    {
        large_size_char->display();
    }
}