#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANMEDIUMCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANMEDIUMCOMMAND_H

#include "CeilingFanCommand.h"


class CeilingFanMediumCommand : public CeilingFanCommand
{
public:
    CeilingFanMediumCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANMEDIUMCOMMAND_H
