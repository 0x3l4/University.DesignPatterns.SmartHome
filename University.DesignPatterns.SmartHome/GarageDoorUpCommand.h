#pragma once

#include "ICommand.h"
#include "GarageDoor.h"

class GarageDoorUpCommand : public ICommand
{
public:
	GarageDoorUpCommand(GarageDoor* gd);
	virtual void execute() override;
	virtual void undo() override;

private:
	GarageDoor* _garageDoor;
};

