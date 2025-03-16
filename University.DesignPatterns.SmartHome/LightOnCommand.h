#pragma once

#include "ICommand.h"
#include "Light.h"

class LightOnCommand : public ICommand
{
public:
	LightOnCommand(Light* l);
	virtual void execute() override;
	virtual void undo() override;

private:
	Light* _light;
};
