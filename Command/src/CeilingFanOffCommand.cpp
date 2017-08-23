#include "CeilingFanOffCommand.h"
#include "CeilingFan.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan &ceilingFan)
        : mCeilingFan(ceilingFan)
{
}

void CeilingFanOffCommand::execute()
{
    mCeilingFan.off();
}