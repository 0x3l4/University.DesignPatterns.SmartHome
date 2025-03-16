#pragma once

#include "ICommand.h"
#include "Stereo.h"

class StereoOnWithCDCommand : public ICommand
{
public:
	StereoOnWithCDCommand(Stereo* s);
	virtual void execute() override;
	virtual void undo() override;

private:
	Stereo* _stereo;
};

