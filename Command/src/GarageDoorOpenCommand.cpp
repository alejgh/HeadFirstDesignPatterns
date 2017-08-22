#include "GarageDoorOpenCommand.h"
#include "GarageDoor.h"


GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor &garageDoor)
        : mGarageDoor(garageDoor)
{}

void GarageDoorOpenCommand::execute()
{
    mGarageDoor.up();
}