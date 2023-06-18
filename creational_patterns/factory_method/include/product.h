#ifndef FACTORY_METHOD_PRODUCT_H_
#define FACTORY_METHOD_PRODUCT_H_

class Product
{
public:
    virtual ~Product();
    virtual void use() const = 0;
};

#endif