#pragma once

#include "ICommand.h"
#include "GarageDoor.h"

class GarageDoorDownCommand : public ICommand
{
public:
	GarageDoorDownCommand(GarageDoor* gd);
	virtual void execute() override;
	virtual void undo() override;

private:
	GarageDoor* _garageDoor;
};

