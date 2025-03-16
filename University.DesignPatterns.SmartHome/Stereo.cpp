#include "Stereo.h"

Stereo::Stereo() 
{
	_mode = StereoMode::OFF;
	_volume = 0;
}

void Stereo::on()
{
	std::cout << "Stereo is on" << std::endl;
}

void Stereo::off()
{
	std::cout << "Stereo is off" << std::endl;
}

void Stereo::setCd()
{
	_mode = StereoMode::CD;
	std::cout << "Stereo is set for CD input" << std::endl;
}

void Stereo::setDvd()
{
	_mode = StereoMode::DVD;
	std::cout << "Stereo is set for DVD input" << std::endl;
}

void Stereo::setRadio()
{
	_mode = StereoMode::RADIO;
	std::cout << "Stereo is set for radio" << std::endl;
}

void Stereo::setVolume(int v)
{
	_volume = v;
	std::cout << "Stereo volume set to " << v << std::endl;
}

StereoMode Stereo::getMode()
{
	return _mode;
}

int Stereo::getVolume() 
{
	return _volume;
}
