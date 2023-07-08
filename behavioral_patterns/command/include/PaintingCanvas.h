#ifndef COMMAND_PAINTING_CANVAS_H_
#define COMMAND_PAINTING_CANVAS_H_

#include <msclr/gcroot.h>
#include "PaintingTarget.h"

using namespace System::Windows::Forms;

class PaintingCanvas: public PaintingTarget
{
private:
    msclr::gcroot<PictureBox^> picture_box;
    double point_radius;

public:
    PaintingCanvas(msclr::gcroot<PictureBox^> picture_box);

    ~PaintingCanvas();

    void paint(const double x, const double y);

    void clear();
};

#endif