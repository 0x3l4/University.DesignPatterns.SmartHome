#pragma once

#include "ICommand.h"
#include "NoCommand.h"

class RemoteControl
{
public:
	RemoteControl(int c);
	~RemoteControl();
	void setCommand(int slot, ICommand* onCommand, ICommand* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	void undoButtonWasPushed();
private:
	int _countButtons;
	ICommand** _onCommands;
	ICommand** _offCommands;
	NoCommand* _noCommand;
	ICommand* _lastCommand;
};
