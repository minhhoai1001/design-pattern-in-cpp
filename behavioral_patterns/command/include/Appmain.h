#ifndef COMMAND_APPMAIN_H_
#define COMMAND_APPMAIN_H_

#include <msclr/gcroot.h>
#include "../WindowsForm.h"

class HistoryCommand;
class PaintingCanvas;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class AppMain
{

private:

	msclr::gcroot<command::WindowsForm^> windows_form;

	// Painting history
	HistoryCommand* history;

	PaintingCanvas* canvas;

public:

	AppMain();

	~AppMain();

	void clickUndoButton(Object^ sender, EventArgs^ e);

	void clickClearButton(Object^ sender, EventArgs^ e);

	void moveMouseOnTheCanvas(Object^ sender, MouseEventArgs^ e);

private:
	AppMain(const AppMain&) = delete;
	AppMain& operator=(const AppMain&) = delete;
	AppMain(AppMain&&) = delete;
	AppMain& operator=(AppMain&&) = delete;
};

#endif	// BEHAVIORAL_PATTERNS_COMMAND_APPMAIN_H_