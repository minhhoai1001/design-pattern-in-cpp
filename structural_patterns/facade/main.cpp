#include "include/pageCreator.h"
#include <iostream>

int main(int argc, char* argv[]) {
    PageCreator::getInstance()->createSimpleHomepage("emily@example.com", "Homepage.html");

    return 0;
}