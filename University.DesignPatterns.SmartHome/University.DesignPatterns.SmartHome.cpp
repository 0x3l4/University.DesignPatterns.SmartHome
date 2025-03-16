#include <iostream>
#include "RemoteControl.h"
#include "ICommand.h"
#include "Light.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "GarageDoorUpCommand.h"
#include "GarageDoorDownCommand.h"
#include "StereoWithCDCommand.h"
#include "StereoOffCommand.h"
#include "Fan.h"
#include "FanOnCommand.h"
#include "FanOffCommand.h"
#include "FanSpeedUpCommand.h"
#include "FanSpeedDownCommand.h"

int main()
{
	Light* livingRoomLight = new Light("Living Room");
	Light* kitchenLight = new Light("Kitchen");
	GarageDoor* garageDoor = new GarageDoor;
	Stereo* stereo = new Stereo;
	Fan* fan = new Fan;

	LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
	LightOnCommand* kitchenLightOn = new LightOnCommand(kitchenLight);
	LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);

	GarageDoorUpCommand* garageDoorUp = new GarageDoorUpCommand(garageDoor);
	GarageDoorDownCommand* garageDoorDown = new GarageDoorDownCommand(garageDoor);

	StereoOnWithCDCommand* stereoOnWithCD = new StereoOnWithCDCommand(stereo);
	StereoOffCommand* stereoOff = new StereoOffCommand(stereo);

	FanOnCommand* fanOn = new FanOnCommand(fan);
	FanOffCommand* fanOff = new FanOffCommand(fan);
	FanSpeedUpCommand* fanSpeedUp = new FanSpeedUpCommand(fan);
	FanSpeedDownCommand* fanSpeedDown = new FanSpeedDownCommand(fan);

	RemoteControl rc(7);
	rc.setCommand(0, livingRoomLightOn, livingRoomLightOff);
	rc.setCommand(1, kitchenLightOn, kitchenLightOff);
	rc.setCommand(2, garageDoorUp, garageDoorDown);
	rc.setCommand(3, stereoOnWithCD, stereoOff);
	rc.setCommand(4, fanOn, fanOff);
	rc.setCommand(5, fanSpeedUp, fanSpeedDown);

	for (int i = 0; i < 6; i++)
	{
		rc.onButtonWasPushed(i);
		rc.offButtonWasPushed(i);
	}

	rc.undoButtonWasPushed();

	return 0;
}