#include "../include/HistoryCommand.h"

HistoryCommand::HistoryCommand()
{

}

HistoryCommand::~HistoryCommand()
{
    clear();
}

void HistoryCommand::execute() const
{
    for (auto* past_cmd : past_commands)
    {
        past_cmd->execute();
    }
}

void HistoryCommand::add(Command* cmd)
{
    past_commands.push_back(cmd);
}

void HistoryCommand::undo()
{
    if (past_commands.size() > 0)
    {
        Command* last_cmd = past_commands.back();
        past_commands.pop_back();
        delete last_cmd;
    }
}

void HistoryCommand::clear()
{
    for (auto* past_cmd : past_commands)
    {
        delete past_cmd;
    }

    past_commands.clear();
}
