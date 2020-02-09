#pragma once
#include <string>
#include <iostream>
#include "Game.h"
class Action
{
private:
	const std::string str;
	Game * game;
public:
	Action(std::string,Game*);
	Action();
	std::string getStr();
	Game* getGame();
	virtual bool execute();
	~Action();
};

