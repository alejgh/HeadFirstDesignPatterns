#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANLOWCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANLOWCOMMAND_H

#include "CeilingFanCommand.h"

class CeilingFanLowCommand : public CeilingFanCommand
{
public:
    CeilingFanLowCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANLOWCOMMAND_H
