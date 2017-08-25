#ifndef HEADFIRSTDESIGNPATTERNS_GARAGEDOOROPENCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_GARAGEDOOROPENCOMMAND_H

#include "ICommand.h"

class GarageDoor;

class GarageDoorOpenCommand : public ICommand
{
private:
    GarageDoor& mGarageDoor;

public:
    GarageDoorOpenCommand(GarageDoor& garageDoor);

public:
    virtual void execute() override;
    virtual void undo() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_GARAGEDOOROPENCOMMAND_H
