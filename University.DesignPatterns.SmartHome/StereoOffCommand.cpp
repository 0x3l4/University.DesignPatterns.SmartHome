#include "StereoOffCommand.h"

StereoOffCommand::StereoOffCommand(Stereo* s)
{
	_stereo = s;
	_prevMode = StereoMode::OFF;
	_prevVolume = 0;
}

void StereoOffCommand::execute()
{
	_prevMode = _stereo->getMode();
	_prevVolume = _stereo->getVolume();
	_stereo->off();
}

void StereoOffCommand::undo()
{
	if (_prevMode != StereoMode::OFF)
	{
		_stereo->on();
		switch (_prevMode)
		{
		case StereoMode::CD:
			_stereo->setCd();
			break;
		case StereoMode::DVD:
			_stereo->setDvd();
			break;
		case StereoMode::RADIO:
			_stereo->setRadio();
			break;
		default:
			break;
		}
	}
}
