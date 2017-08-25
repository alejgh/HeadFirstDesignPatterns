#ifndef HEADFIRSTDESIGNPATTERNS_REMOTECONTROLWITHUNDO_H
#define HEADFIRSTDESIGNPATTERNS_REMOTECONTROLWITHUNDO_H

#include "ICommand.h"

#include <array>


const int NUM_COMMANDS = 7;

class RemoteControlWithUndo
{
private:
    std::array<ICommand*, NUM_COMMANDS> mOnCommands;
    std::array<ICommand*, NUM_COMMANDS> mOffCommands;
    ICommand* mUndoCommand;

public:
    RemoteControlWithUndo();

public:
    void setCommand(int slot, ICommand* onCommand, ICommand* offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
};


#endif //HEADFIRSTDESIGNPATTERNS_REMOTECONTROLWITHUNDO_H
