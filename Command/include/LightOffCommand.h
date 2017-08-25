#ifndef HEADFIRSTDESIGNPATTERNS_LIGHTOFFCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_LIGHTOFFCOMMAND_H

#include "ICommand.h"

class Light;

class LightOffCommand : public ICommand
{
private:
    Light& mLight;

public:
    LightOffCommand(Light& light);

public:
    virtual void execute() override;
    virtual void undo() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_LIGHTOFFCOMMAND_H
