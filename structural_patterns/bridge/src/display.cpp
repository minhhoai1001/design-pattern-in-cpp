#include "include/display.h"
#include "include/displayImpl.h"

Display::Display(const DisplayImpl* impl)
    :impl(impl)
{

}

Display::~Display()
{

}

void Display::output() const
{
    this->open();
    this->write();
    this->close();
}

void Display::open() const
{
    impl->implOpen();
}

void Display::write() const
{
    impl->implWrite();
}

void Display::close() const
{
    impl->implClose();
}