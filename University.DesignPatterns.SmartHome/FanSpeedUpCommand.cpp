#include "FanSpeedUpCommand.h"

FanSpeedUpCommand::FanSpeedUpCommand(Fan* fan)
{
	_fan = fan;
}

void FanSpeedUpCommand::execute()
{
	_fan->raiseSpeed();
}

void FanSpeedUpCommand::undo()
{
	_fan->dropSpeed();
}
