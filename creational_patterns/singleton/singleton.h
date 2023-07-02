#ifndef SINGLETON_SINGLETON_H_
#define SINGLETON_SINGLETON_H_

class Singleton
{
private:
    Singleton();

public:
    static Singleton* getInstance();

    ~Singleton();
};

#endif