#include "FanOnCommand.h"

FanOnCommand::FanOnCommand(Fan* fan)
{
	_fan = fan;
	_prevMode = fan->getMode();
}

void FanOnCommand::execute()
{
	_prevMode = _fan->getMode();
	_fan->on();
}

void FanOnCommand::undo()
{
	_fan->setMode(_prevMode);
}
