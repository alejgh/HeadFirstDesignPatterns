#include "LightOffCommand.h"
#include "Light.h"

LightOffCommand::LightOffCommand(Light &light) : mLight(light)
{}

void LightOffCommand::execute()
{
    mLight.off();
}

void LightOffCommand::undo()
{
    mLight.on();
}