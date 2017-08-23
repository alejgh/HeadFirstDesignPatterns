#ifndef HEADFIRSTDESIGNPATTERNS_REMOTECONTROL_H
#define HEADFIRSTDESIGNPATTERNS_REMOTECONTROL_H

#include "ICommand.h"

#include <array>


const int NUM_COMMANDS = 7;

class RemoteControl
{
private:
    std::array<ICommand*, NUM_COMMANDS> mOnCommands;
    std::array<ICommand*, NUM_COMMANDS> mOffCommands;

public:
    RemoteControl();

public:
    void setCommand(int slot, ICommand* onCommand, ICommand* offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
};


#endif //HEADFIRSTDESIGNPATTERNS_REMOTECONTROL_H
