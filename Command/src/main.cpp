#include "SimpleRemoteControl.h"
#include "Light.h"
#include "GarageDoor.h"
#include "LightOnCommand.h"
#include "GarageDoorOpenCommand.h"


int main()
{
    SimpleRemoteControl remote;
    Light light;
    GarageDoor garageDoor;
    LightOnCommand lightOn(light);
    GarageDoorOpenCommand garageOpen(garageDoor);

    remote.setCommand(&lightOn);
    remote.buttonWasPressed();
    remote.setCommand(&garageOpen);
    remote.buttonWasPressed();

    return 0;
}