#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_

class Command
{
public:
    virtual ~Command();

    virtual void execute() const = 0;
};

#endif