#include "largeSizeCharFactory.h"

LargeSizeCharFactory::LargeSizeCharFactory()
{

}

LargeSizeCharFactory::~LargeSizeCharFactory()
{

}

LargeSizeCharFactory* LargeSizeCharFactory::getInstance()
{
    static LargeSizeCharFactory* instance = new LargeSizeCharFactory;
    return instance;
}

LargeSizeChar* LargeSizeCharFactory::getLargeSizeChar(const char char_name)
{
    LargeSizeChar* lsc = nullptr;
    if (pool_chars.find(char_name) == end(pool_chars))
    {
        lsc = new LargeSizeChar(char_name);     // Create an instance
        pool_chars.insert(map<char, LargeSizeChar*>::value_type(char_name, lsc));

        cout << "create new " << char_name << endl;
    }
    else
    {
        lsc = pool_chars.at(char_name);
        cout << char_name << " is existed" << endl;
    }

    return lsc;
}