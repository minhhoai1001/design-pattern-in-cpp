#ifndef FACTORY_METHOD_CREADIT_CARD_H_
#define FACTORY_METHOD_CREADIT_CARD_H_

#include <string>
#include <iostream>
#include "product.h"

using namespace std;

class CreditCard: public Product
{
public:
    const string owner;

    CreditCard(const string& owner);

    ~CreditCard();

    void use() const;
};

#endif