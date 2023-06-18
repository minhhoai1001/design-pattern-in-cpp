#include <memory>
#include "include/manager.h"
#include "include/frameDisplay.h"
#include "include/underLineDisplay.h"

/*
Display a string enclosed with a frame line, or drawn with an underline. The Client (Main)
registers instances of the Display subclass in the Manager class. When necessary,
the Manager class asks those registered instances to return a clone. The Client (Main)
requires the returned clones to display.
 */

int main(int argc, char* argv[])
{
    std::unique_ptr<Manager> manager = std::make_unique<Manager>();

    //Register instance of the "Display" subclass
    std::unique_ptr<UnderLineDisplay> emphasis_underline(new UnderLineDisplay('~'));
    manager->registerDisplay("emphasis", emphasis_underline.get());

    std::unique_ptr<FrameDisplay> highlight_frame(new FrameDisplay('+'));
    manager->registerDisplay("highlight", highlight_frame.get());

    std::unique_ptr<FrameDisplay> warning_frame(new FrameDisplay('#'));
    manager->registerDisplay("warning", warning_frame.get());

    //Require to display
    std::unique_ptr<const Display> display1(manager->getDisplay("emphasis"));
    display1->show("Nice to meet you");

    std::unique_ptr<const Display> display2(manager->getDisplay("highlight"));
    display2->show("Nice to meet you");

    std::unique_ptr<const Display> display3(manager->getDisplay("warning"));
    display3->show("Nice to meet you");

    return 0;
}