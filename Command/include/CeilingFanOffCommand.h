#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H

#include "CeilingFanCommand.h"


class CeilingFanOffCommand : public CeilingFanCommand
{
public:
    CeilingFanOffCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H
