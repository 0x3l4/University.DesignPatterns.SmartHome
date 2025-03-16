#pragma once

#include "ICommand.h"
#include "Fan.h"

class FanOffCommand : public ICommand
{
public:
	FanOffCommand(Fan* fan);
	void execute() override;
	void undo() override;
private:
	Fan* _fan;
	FanMode _prevMode;
};

