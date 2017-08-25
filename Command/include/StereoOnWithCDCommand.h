#ifndef HEADFIRSTDESIGNPATTERNS_STEREOONWITHCDCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_STEREOONWITHCDCOMMAND_H

#include "ICommand.h"

class Stereo;

class StereoOnWithCDCommand : public ICommand
{
public:
    Stereo& mStereo;

public:
    StereoOnWithCDCommand(Stereo& stereo);

public:
    virtual void execute() override;
    virtual void undo() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_STEREOONWITHCDCOMMAND_H
