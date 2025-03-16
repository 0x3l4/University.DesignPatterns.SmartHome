#pragma once

#include "ICommand.h"
#include "Stereo.h"

class StereoOffCommand : public ICommand
{
public:
	StereoOffCommand(Stereo* s);
	virtual void execute() override;
	virtual void undo() override;

private:
	Stereo* _stereo;
	StereoMode _prevMode;
	int _prevVolume;
};

