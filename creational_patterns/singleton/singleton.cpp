#include "singleton.h"

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::getInstance()
{
    static Singleton* instance = new Singleton();
    return instance;
}