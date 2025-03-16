#include "Light.h"

Light::Light(std::string d)
{
	descr = d;
}

void Light::on()
{
	std::cout << descr << ": Light is on" << std::endl;
}

void Light::off()
{
	std::cout << descr << ": Light is off" << std::endl;
}
