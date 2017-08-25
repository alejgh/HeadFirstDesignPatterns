#include "CeilingFanCommand.h"
#include "CeilingFan.h"

CeilingFanCommand::CeilingFanCommand(CeilingFan &ceilingFan)
        : mCeilingFan(ceilingFan)
        , mPreviousSpeed(FanLevel::OFF)
{}

void CeilingFanCommand::execute()
{
    mPreviousSpeed = mCeilingFan.getSpeed();
}

void CeilingFanCommand::undo()
{
    switch (mPreviousSpeed)
    {
        case FanLevel::HIGH:
            mCeilingFan.high();
            break;
        case FanLevel::MEDIUM:
            mCeilingFan.medium();
            break;
        case FanLevel::LOW:
            mCeilingFan.low();
            break;
        case FanLevel::OFF:
            mCeilingFan.off();
            break;
    }
}