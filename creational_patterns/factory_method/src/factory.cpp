#include "include/factory.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}

const Product* Factory::create(const string& owner)
{
    const Product* product = createProduct(owner);

    return product;
}