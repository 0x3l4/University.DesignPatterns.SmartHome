#pragma once

#include <string>
#include <iostream>

enum class StereoMode
{
	OFF,
	CD,
	DVD,
	RADIO
};

class Stereo
{
public:
	Stereo();
	void on();
	void off();
	void setCd();
	void setDvd();
	void setRadio();
	void setVolume(int v);
	StereoMode getMode();
	int getVolume();
private:
	StereoMode _mode;
	int _volume;
};