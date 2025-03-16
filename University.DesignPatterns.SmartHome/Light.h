#pragma once

#include <string>
#include <iostream>

class Light
{
	std::string descr;
public:
	Light(std::string d);
	void on();
	void off();
};

