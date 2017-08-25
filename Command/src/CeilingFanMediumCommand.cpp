#include "CeilingFanMediumCommand.h"
#include "CeilingFan.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan &ceilingFan)
        : CeilingFanCommand(ceilingFan)
{}

void CeilingFanMediumCommand::execute()
{
    CeilingFanCommand::execute();
    mCeilingFan.medium();
}