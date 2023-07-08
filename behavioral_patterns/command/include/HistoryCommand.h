#ifndef COMMAND_HISTORY_COMMAND_H_
#define COMMAND_HISTORY_COMMAND_H_

#include "Command.h"
#include <vector>

using namespace std;

class HistoryCommand: public Command
{
private:
    vector<Command*> past_commands;

public:
    HistoryCommand();

    ~HistoryCommand();

    void execute() const;

    void add(Command* cmd);

    void undo();

    void clear();
};

#endif