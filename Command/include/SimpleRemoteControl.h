#ifndef HEADFIRSTDESIGNPATTERNS_SIMPLEREMOTECONTROL_H
#define HEADFIRSTDESIGNPATTERNS_SIMPLEREMOTECONTROL_H

#include "ICommand.h"

class SimpleRemoteControl
{
public:
    ICommand* mSlot;

public:
    SimpleRemoteControl();

public:
    void setCommand(ICommand* command);
    void buttonWasPressed();

};


#endif //HEADFIRSTDESIGNPATTERNS_SIMPLEREMOTECONTROL_H
