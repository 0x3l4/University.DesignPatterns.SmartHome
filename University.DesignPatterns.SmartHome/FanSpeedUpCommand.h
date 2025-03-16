#pragma once

#include "ICommand.h"
#include "Fan.h"

class FanSpeedUpCommand : public ICommand
{
public:
	FanSpeedUpCommand(Fan* fan);
	void execute() override;
	void undo() override;
private:
	Fan* _fan;
};

