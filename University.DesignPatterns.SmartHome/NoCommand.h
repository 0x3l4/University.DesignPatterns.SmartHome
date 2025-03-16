#pragma once

#include "ICommand.h"

class NoCommand : public ICommand
{
	virtual void execute() override;
	virtual void undo() override;
};

