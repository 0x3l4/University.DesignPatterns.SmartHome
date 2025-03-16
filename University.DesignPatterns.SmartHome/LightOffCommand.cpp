#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light* l)
{
	_light = l;
}

void LightOffCommand::execute()
{
	_light->off();
}

void LightOffCommand::undo()
{
	_light->on();
}
