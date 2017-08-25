#include "StereoOffCommand.h"
#include "Stereo.h"


StereoOffCommand::StereoOffCommand(Stereo &stereo)
        : mStereo(stereo)
{}

void StereoOffCommand::execute()
{
    mStereo.off();
}

void StereoOffCommand::undo()

{
    mStereo.on();
    mStereo.setCD();
    mStereo.setVolume(11);
}