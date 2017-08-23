#include "RemoteControl.h"
#include "Light.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "CeilingFan.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "GarageDoorOpenCommand.h"
#include "GarageDoorCloseCommand.h"
#include "StereoOnWithCDCommand.h"
#include "StereoOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "CeilingFanOffCommand.h"


int main()
{
    // creating receivers
    RemoteControl remote;
    Light livingRoomLight("Living Room");
    Light kitchenLight("Kitchen");
    CeilingFan ceilingFan("Living Room");
    GarageDoor garageDoor("");
    Stereo stereo("Living Room");

    // creating light commands
    LightOnCommand livingRoomLightOn(livingRoomLight);
    LightOffCommand livingRoomLightOff(livingRoomLight);
    LightOnCommand kitchenLightOn(kitchenLight);
    LightOffCommand kitchenLightOff(kitchenLight);

    // creating ceiling fan commands
    CeilingFanOnCommand ceilingFanOn(ceilingFan);
    CeilingFanOffCommand ceilingFanOff(ceilingFan);

    // creating garage commands
    GarageDoorOpenCommand garageOpen(garageDoor);

    // creating stereo commands
    StereoOnWithCDCommand stereoOnWithCD(stereo);
    StereoOffCommand stereoOff(stereo);

    // load the commands in the remote slots
    remote.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
    remote.setCommand(1, &kitchenLightOn, &kitchenLightOff);
    remote.setCommand(2, &ceilingFanOn, &ceilingFanOff);
    remote.setCommand(3, &stereoOnWithCD, &stereoOff);

    // execute each command
    remote.onButtonWasPushed(0);
    remote.offButtonWasPushed(0);
    remote.onButtonWasPushed(1);
    remote.offButtonWasPushed(1);
    remote.onButtonWasPushed(2);
    remote.offButtonWasPushed(2);
    remote.onButtonWasPushed(3);
    remote.offButtonWasPushed(3);

    // execute unloaded commands
    remote.offButtonWasPushed(6);
    remote.onButtonWasPushed(4);

    // change slot command
    remote.setCommand(0, &stereoOnWithCD, &stereoOff);
    remote.onButtonWasPushed(0);
    remote.offButtonWasPushed(0);

    return 0;
}