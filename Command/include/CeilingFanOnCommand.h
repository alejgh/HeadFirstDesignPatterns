#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H

#include "ICommand.h"

class CeilingFan;

class CeilingFanOnCommand : public ICommand
{
private:
    CeilingFan& mCeilingFan;

public:
    CeilingFanOnCommand(CeilingFan& ceilingFan);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANONCOMMAND_H
