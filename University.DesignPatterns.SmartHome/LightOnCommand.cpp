#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light* l)
{
	_light = l;
}

void LightOnCommand::execute()
{
	_light->on();
}

void LightOnCommand::undo()
{
	_light->off();
}
