#include "CeilingFanLowCommand.h"
#include "CeilingFan.h"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan &ceilingFan)
        : CeilingFanCommand(ceilingFan)
{}

void CeilingFanLowCommand::execute()
{
    CeilingFanCommand::execute();
    mCeilingFan.low();
}