#include "include/creditCard.h"

CreditCard::CreditCard(const string& owner)
    :owner(owner)
{
    cout << "Make " << owner << "'s card." << endl;
}

CreditCard::~CreditCard()
{

}

void CreditCard::use() const
{
    cout << "Use " << owner << "'s card" << endl;
}