#ifndef FACTORY_METHOD_CREDIT_CARD_FACTORY_H_
#define FACTORY_METHOD_CREDIT_CARD_FACTORY_H_

#include <string>
#include <vector>
#include "factory.h"
#include "include/creditCard.h"

using namespace std;

class CreditCardFactory: public Factory
{
public:
    CreditCardFactory();

    ~CreditCardFactory();

protected:
    const Product* createProduct(const string& owner);
};

#endif