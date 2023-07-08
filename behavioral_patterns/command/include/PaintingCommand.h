#ifndef COMMAND_PAINTING_COMMAND_H_
#define COMMAND_PAINTING_COMMAND_H_

#include "Command.h"
#include "PaintingTarget.h"

class PaintingCommand: public Command
{
private:
    const double painting_pos_x;

    const double painting_pos_y;

    const PaintingTarget* painting_target;

public:
    PaintingCommand(const PaintingTarget* painting_target, const double painting_pos_x, const double painting_pos_y);

    ~PaintingCommand();

    void execute() const;
};

#endif