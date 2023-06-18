#include <iostream>
#include <memory>
#include "include/creditCardFactory.h"
#include "include/creditCard.h"

int main(int argc, char* argv[])
{
    std::unique_ptr<CreditCardFactory> factory = std::make_unique<CreditCardFactory>();

    std::unique_ptr<const Product> jackson_card(factory->create("Jackson"));
    jackson_card->use();

    std::unique_ptr<const Product>sophia_card(factory->create("Sophia"));
    sophia_card->use();

    std::unique_ptr<const Product>olivia_card(factory->create("Olivia"));
    olivia_card->use();

    return 0;
}