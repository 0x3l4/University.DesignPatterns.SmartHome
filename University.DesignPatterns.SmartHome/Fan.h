#pragma once

enum FanMode
{
	OFF,
	LOW,
	MEDIUM,
	HIGH
};

class Fan
{
public:
	Fan();
	void on();
	void off();
	void raiseSpeed();
	void dropSpeed();
	void setMode(FanMode mode);
	FanMode getMode();
private:
	FanMode _mode;
};

