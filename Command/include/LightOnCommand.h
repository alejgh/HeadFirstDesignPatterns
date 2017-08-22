#ifndef HEADFIRSTDESIGNPATTERNS_LIGHTONCOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_LIGHTONCOMMAND_H

#include "ICommand.h"

class Light;

class LightOnCommand : public ICommand
{
private:
    Light& mLight;

public:
    LightOnCommand(Light& light);

public:
    virtual void execute() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_LIGHTONCOMMAND_H
