#include "Fan.h"
#include <iostream>

Fan::Fan()
{
	_mode = FanMode::OFF;
}

void Fan::on()
{
	std::cout << "Fan is on" << std::endl;
	_mode = FanMode::LOW;
}

void Fan::off()
{
	std::cout << "Fan is off" << std::endl;
	_mode = FanMode::OFF;
}

void Fan::raiseSpeed()
{
	if (_mode != FanMode::HIGH)
	{
		FanMode oldMode = _mode;
		_mode = (FanMode)((_mode + 1) % 4);
		std::cout << "Fan speed increased (" << oldMode << " -> " << _mode << ")" << std::endl;
	}
	else
	{
		std::cout << "Fan speed is max" << std::endl;
	}
}

void Fan::dropSpeed()
{
	if (_mode != FanMode::OFF)
	{
		FanMode oldMode = _mode;
		_mode = (FanMode)((_mode - 1) % 4);
		std::cout << "Fan speed reduced (" << oldMode << " -> " << _mode << ")" << std::endl;
	}
	else
	{
		std::cout << "Fan is off" << std::endl;
	}
}

void Fan::setMode(FanMode mode)
{
	if (_mode != mode)
	{
		_mode = mode;
	}
}

FanMode Fan::getMode()
{
	return _mode;
}
