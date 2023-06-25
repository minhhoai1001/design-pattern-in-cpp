#include "include/multiLineDisplay.h"
#include "include/displayImpl.h"

MultiLineDisplay::MultiLineDisplay(DisplayImpl* impl)
    :Display(impl)
{

}

MultiLineDisplay::~MultiLineDisplay()
{

}

void MultiLineDisplay::outputMultiple(const int times) const
{
    open();
    for(int i=0; i<times; i++)
    {
        write();
    }
    close();
}