#pragma once

#include "ICommand.h"
#include "Fan.h"

class FanSpeedDownCommand : public ICommand
{
public:
	FanSpeedDownCommand(Fan* fan);
	void execute() override;
	void undo() override;
private:
	Fan* _fan;
};

