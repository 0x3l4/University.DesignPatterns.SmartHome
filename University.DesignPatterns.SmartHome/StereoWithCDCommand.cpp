#include "StereoWithCDCommand.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* s)
{
	_stereo = s;
}

void StereoOnWithCDCommand::execute()
{
	_stereo->on();
	_stereo->setCd();
	_stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
	_stereo->off();
}
