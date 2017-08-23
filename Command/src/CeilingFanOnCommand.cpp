#include "CeilingFanOnCommand.h"
#include "CeilingFan.h"

CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan &ceilingFan)
        : mCeilingFan(ceilingFan)
{}

void CeilingFanOnCommand::execute()
{
    mCeilingFan.high();
}