#include <iostream>
#include "singleton.h"

int main(int argc, char* argv[])
{
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    if (obj1 == obj2)
    {
        std::cout << "obj1 and obj2 are the same instance. \n";
    }
    else
    {
        std::cout << "obj1 and obj2 are differences. \n";
    }

}