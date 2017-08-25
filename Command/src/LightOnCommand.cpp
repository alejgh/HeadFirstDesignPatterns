#include "LightOnCommand.h"
#include "Light.h"


LightOnCommand::LightOnCommand(Light &light) : mLight(light)
{

}

void LightOnCommand::execute()
{
    mLight.on();
}

void LightOnCommand::undo()
{
    mLight.off();
}