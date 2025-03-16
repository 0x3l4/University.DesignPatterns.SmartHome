#pragma once

#include "ICommand.h"
#include "Fan.h"

class FanOnCommand : public ICommand
{
public:
	FanOnCommand(Fan* fan);
	void execute() override;
	void undo() override;
private:
	Fan* _fan;
	FanMode _prevMode;
};

