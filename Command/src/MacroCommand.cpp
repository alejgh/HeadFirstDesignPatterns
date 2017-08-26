#include "MacroCommand.h"

MacroCommand::MacroCommand(std::vector<ICommand*> commands)
        : mCommands(commands)
{
}

void MacroCommand::execute()
{
    for (auto commandPtr : mCommands)
        commandPtr->execute();
}

void MacroCommand::undo()
{
    for (auto iter = mCommands.rbegin(); iter != mCommands.rend(); iter++)
        (*iter)->undo();
}