#include "GarageDoorUpCommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor* gd)
{
	_garageDoor = gd;
}

void GarageDoorUpCommand::execute()
{
	_garageDoor->up();
}

void GarageDoorUpCommand::undo()
{
	_garageDoor->down();
}
