#ifndef FACTORY_METHOD_FACTORY_H_
#define FACTORY_METHOD_FACTORY_H_

#include <string>
#include "product.h"

using namespace std;

class Factory
{
public:
    Factory();

    virtual ~Factory();

    const Product* create(const string& owner);

protected:
    virtual const Product* createProduct(const string& owner) = 0;
};

#endif