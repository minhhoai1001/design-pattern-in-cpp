#include "include/realPrinter.h"

RealPrinter::RealPrinter(const string& name)
    :name(name)
{
    heavyTask("Creating an instance (" + name + ") of the Printer");
}

RealPrinter::~RealPrinter()
{

}

const string RealPrinter::getName() const
{
    return name;
}

void RealPrinter::chageName(const string& name)
{
    this->name = name;
}

void RealPrinter::output(const string& content)
{
    cout << "==========" << endl
		<< content << endl
		<< "Printed by " << name << endl
		<< "==========" << endl;
}

void RealPrinter::heavyTask(const string& message) const
{
    cout << message;
	for (int i = 0; i < 10; ++i) 
    {
        usleep(0.5 * 1000000);
        cout << "." << flush;
    }
    cout << "Done." << endl;
}