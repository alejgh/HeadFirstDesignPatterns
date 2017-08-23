#ifndef HEADFIRSTDESIGNPATTERNS_STEREOOFFCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_STEREOOFFCOMMAND_H

#include "ICommand.h"

class Stereo;

class StereoOffCommand : public ICommand
{
private:
    Stereo& mStereo;

public:
    StereoOffCommand(Stereo& stereo);

public:
    virtual void execute() override;


};


#endif //HEADFIRSTDESIGNPATTERNS_STEREOOFFCOMMAND_H
