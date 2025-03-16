#include "RemoteControl.h"

RemoteControl::RemoteControl(int c)
{
	_countButtons = c;
	_onCommands = new ICommand * [c];
	_offCommands = new ICommand * [c];
	_noCommand = new NoCommand;
	_lastCommand = nullptr;
	for (int i = 0; i < c; i++)
	{
		_onCommands[i] = _noCommand;
		_offCommands[i] = _noCommand;
	}
}

RemoteControl::~RemoteControl()
{
	delete[] _onCommands;
	delete[] _offCommands;
	delete _noCommand;
}

void RemoteControl::setCommand(int slot, ICommand* onCommand, ICommand* offCommand)
{
	if (_onCommands[slot] != _noCommand) delete _onCommands[slot];
	_onCommands[slot] = onCommand;
	if (_offCommands[slot] != _noCommand) delete _offCommands[slot];
	_offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
	_lastCommand = _onCommands[slot];
	_onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
	_lastCommand = _offCommands[slot];
	_offCommands[slot]->execute();
}

void RemoteControl::undoButtonWasPushed()
{
	if (_lastCommand != nullptr)
	{
		_lastCommand->undo();
		_lastCommand = nullptr;
	}
}
