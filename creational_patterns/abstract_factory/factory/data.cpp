#include "data.h"

Data::Data(const string& name): Item(name)
{

}

Data::~Data()
{
    items.clear();
}

void Data::add(Item* item)
{
    items.push_back(item);
}