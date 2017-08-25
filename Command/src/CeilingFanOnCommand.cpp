#include "CeilingFanOnCommand.h"
#include "CeilingFan.h"

CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan &ceilingFan)
        : CeilingFanCommand(ceilingFan)
{}

void CeilingFanOnCommand::execute()
{
    CeilingFanCommand::execute();
    mCeilingFan.high();
}