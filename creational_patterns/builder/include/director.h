#ifndef BUILDER_HTML_DIRECTOR_H_
#define BUILDER_HTML_DIRECTOR_H_

class Builder;

class Director
{
private:
    Builder* builder;

public:
    Director(Builder* builder);

    void buid();
};



#endif