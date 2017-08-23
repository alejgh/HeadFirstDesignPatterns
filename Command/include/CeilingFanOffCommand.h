#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H

#include "ICommand.h"

class CeilingFan;

class CeilingFanOffCommand : public ICommand
{
private:
    CeilingFan& mCeilingFan;

public:
    CeilingFanOffCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANOFFCOMMAND_H
