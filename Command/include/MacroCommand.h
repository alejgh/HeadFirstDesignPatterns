#ifndef HEADFIRSTDESIGNPATTERNS_MACROCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_MACROCOMMAND_H

#include "ICommand.h"

#include <vector>


class MacroCommand : public ICommand
{
private:
    std::vector<ICommand*> mCommands;

public:
    MacroCommand(std::vector<ICommand*> commands);

public:
    virtual void execute() override;
    virtual void undo() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_MACROCOMMAND_H
