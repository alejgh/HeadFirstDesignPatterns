#include "SimpleRemoteControl.h"

SimpleRemoteControl::SimpleRemoteControl() {}

void SimpleRemoteControl::setCommand(ICommand* command)
{
    mSlot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    mSlot->execute();
}
