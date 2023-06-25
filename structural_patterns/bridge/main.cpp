#include <memory>
#include "include/display.h"
#include "include/displayImpl.h"
#include "include/multiLineDisplay.h"
#include "include/textDisplayImpl.h"

int main(int argc, char* argv[])
{
    unique_ptr<DisplayImpl> display_impl1(new TextDisplayImpl("Japan"));
    unique_ptr<Display> d1(new Display(display_impl1.get()));
    d1->output();

    unique_ptr<DisplayImpl> display_impl2(new TextDisplayImpl("The United States of America"));
    unique_ptr<MultiLineDisplay> d2(new MultiLineDisplay(display_impl2.get()));
    d2->output();
    d2->outputMultiple(3);
}