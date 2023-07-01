#include "include/sideFrame.h"

SideFrame::SideFrame(const Display* display, const char frame_char)
    :Frame(display), frame_char(frame_char)
{

}

SideFrame::~SideFrame()
{

}

const int SideFrame::getColumns() const
{
    return 1 + display->getColumns();
}

const int SideFrame::getRows() const
{
    return display->getRows();
}

const string SideFrame::getLineText(const int row) const
{
    return frame_char + display->getLineText(row) + frame_char;
}