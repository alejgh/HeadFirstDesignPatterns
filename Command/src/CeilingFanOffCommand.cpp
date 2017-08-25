#include "CeilingFanOffCommand.h"
#include "CeilingFan.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan &ceilingFan)
        : CeilingFanCommand(ceilingFan)
{
}

void CeilingFanOffCommand::execute()
{
    CeilingFanCommand::execute();
    mCeilingFan.off();
}