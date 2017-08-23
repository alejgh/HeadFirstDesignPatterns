#include "StereoOnWithCDCommand.h"
#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo &stereo)
        : mStereo(stereo)
{}

void StereoOnWithCDCommand::execute()
{
    mStereo.on();
    mStereo.setCD();
    mStereo.setVolume(11);
}
