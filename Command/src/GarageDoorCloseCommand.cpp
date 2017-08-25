#include "GarageDoorCloseCommand.h"
#include "GarageDoor.h"

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor &garageDoor)
        : mGarageDoor(garageDoor)
{}

void GarageDoorCloseCommand::execute()
{
    mGarageDoor.down();
}

void GarageDoorCloseCommand::undo()
{
    mGarageDoor.up();
}