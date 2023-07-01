#include <memory>
#include "include/display.h"
#include "include/messageDisplay.h"
#include "include/sideFrame.h"
#include "include/fullFrame.h"

/*
Display a string with decorative frames. The frames can be combined arbitrarily.
 */

int main(int argc, char* argv[]) {
	std::unique_ptr<Display> display_a(new MessageDisplay("Nice to meet you."));
	display_a->show();

	std::unique_ptr<Display> diaplay_b1(new MessageDisplay("Nice to meet you."));
	std::unique_ptr<Display> display_b2(new SideFrame(diaplay_b1.get(), '!'));
	display_b2->show();

	std::unique_ptr<Display> display_c1(new MessageDisplay("Nice to meet you."));
	std::unique_ptr<Display> display_c2(new SideFrame(display_c1.get(), '!'));
	std::unique_ptr<Display> display_c3(new FullFrame(display_c2.get()));
	display_c3->show();

	return 0;
}