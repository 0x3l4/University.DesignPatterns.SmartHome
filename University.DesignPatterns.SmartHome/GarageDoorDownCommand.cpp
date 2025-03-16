#include "GarageDoorDownCommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor* gd)
{
	_garageDoor = gd;
}

void GarageDoorDownCommand::execute()
{
	_garageDoor->down();
}

void GarageDoorDownCommand::undo()
{
	_garageDoor->up();
}
