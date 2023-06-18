#include "include/creditCardFactory.h"

CreditCardFactory::CreditCardFactory()
{

}

CreditCardFactory::~CreditCardFactory()
{

}

const Product* CreditCardFactory::createProduct(const string& owner)
{
    return new CreditCard(owner);
}