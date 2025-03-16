#include "FanOffCommand.h"

FanOffCommand::FanOffCommand(Fan* fan)
{
	_fan = fan;
	_prevMode = fan->getMode();
}

void FanOffCommand::execute()
{
	_prevMode = _fan->getMode();
	_fan->off();
}

void FanOffCommand::undo()
{
	_fan->setMode(_prevMode);
}
