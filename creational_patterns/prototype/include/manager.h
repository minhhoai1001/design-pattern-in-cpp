#ifndef PROTOTYPE_MANAGER_H_
#define PROTOTYPE_MANAGER_H_

#include <string>
#include <map>

using namespace std;

class Display;

class Manager
{
private:
    map<string, Display*> displays;

public:
    Manager();

    ~Manager();

    void registerDisplay(const string& display_name, Display* display);

    const Display* getDisplay(const string& display_name) const;
};

#endif