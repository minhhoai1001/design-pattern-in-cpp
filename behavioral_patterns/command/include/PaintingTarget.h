#ifndef COMMAND_PAINTING_TARGET_H_
#define COMMAND_PAINTING_TARGET_H_

class PaintingTarget
{
public:
    ~PaintingTarget();

    virtual void paint(const double x, const double y) const = 0;

    virtual void clear() = 0;
};

#endif