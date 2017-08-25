#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H

#include "CeilingFanCommand.h"

class CeilingFanOnCommand : public CeilingFanCommand
{
public:
    CeilingFanOnCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H
