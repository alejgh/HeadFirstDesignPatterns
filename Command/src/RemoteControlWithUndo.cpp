#include "RemoteControlWithUndo.h"
#include <cassert>
#include <ostream>


RemoteControlWithUndo::RemoteControlWithUndo()
        : mOnCommands()
        , mOffCommands()
        , mUndoCommand(nullptr)
{
}

void RemoteControlWithUndo::setCommand(int slot, ICommand *onCommand, ICommand *offCommand)
{
    assert(slot < NUM_COMMANDS);

    mOnCommands[slot] = onCommand;
    mOffCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
    assert(slot < NUM_COMMANDS);

    if (mOnCommands[slot])
        mOnCommands[slot]->execute();
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
    assert(slot < NUM_COMMANDS);

    if (mOffCommands[slot])
        mOffCommands[slot]->execute();
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
    if (mUndoCommand)
        mUndoCommand->undo();
}
