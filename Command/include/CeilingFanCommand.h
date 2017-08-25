#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFANCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFANCOMMAND_H

#include "ICommand.h"

class CeilingFan;
enum class FanLevel;

class CeilingFanCommand : public ICommand
{
protected:
    CeilingFan& mCeilingFan;
    FanLevel mPreviousSpeed;

public:
    CeilingFanCommand(CeilingFan& ceilingFang);

public:
    virtual void execute() override;
    virtual void undo() override;

};



#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFANCOMMAND_H
