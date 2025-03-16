#pragma once

#include "ICommand.h"
#include "Light.h"

class LightOffCommand : public ICommand
{
public:
	LightOffCommand(Light* l);
	virtual void execute() override;
	virtual void undo() override;

private:
	Light* _light;
};
