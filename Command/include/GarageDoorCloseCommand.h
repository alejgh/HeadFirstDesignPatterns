#ifndef HEADFIRSTDESIGNPATTERNS_GARAGEDOORCLOSECOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_GARAGEDOORCLOSECOMMAND_H

#include "ICommand.h"

class GarageDoor;

class GarageDoorCloseCommand : public ICommand
{
private:
    GarageDoor& mGarageDoor;

public:
    GarageDoorCloseCommand(GarageDoor& garageDoor);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_GARAGEDOORCLOSECOMMAND_H
