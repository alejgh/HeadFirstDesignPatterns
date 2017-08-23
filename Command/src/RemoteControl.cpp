#include "RemoteControl.h"

#include <cassert>
#include <ostream>


RemoteControl::RemoteControl()
        : mOnCommands()
        , mOffCommands()
{
}

void RemoteControl::setCommand(int slot, ICommand *onCommand, ICommand *offCommand)
{
    assert(slot < NUM_COMMANDS);

    mOnCommands[slot] = onCommand;
    mOffCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
    assert(slot < NUM_COMMANDS);

    if (mOnCommands[slot])
        mOnCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
    assert(slot < NUM_COMMANDS);

    if (mOffCommands[slot])
        mOffCommands[slot]->execute();
}
