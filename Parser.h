#pragma once
#include<string>
#include"Action.h"
#include"MAction.h"
#include<string>
class Parser
{
	Game* game;
public:
	Parser(Game*);
	Game* getGame();
	Action* parse(std::string str);
};

