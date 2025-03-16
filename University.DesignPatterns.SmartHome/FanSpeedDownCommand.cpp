#include "FanSpeedDownCommand.h"

FanSpeedDownCommand::FanSpeedDownCommand(Fan* fan)
{
	_fan = fan;
}

void FanSpeedDownCommand::execute()
{
	_fan->dropSpeed();
}

void FanSpeedDownCommand::undo()
{
	_fan->raiseSpeed();
}
