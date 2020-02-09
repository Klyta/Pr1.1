#pragma once
#include "Action.h"
class MAction :
	public Action
{
	Game* game;
	int PlayerNum = 0;
	const std::string ActionType;
	int GameObjNum = 0;
	int X = 0;
	int Y = 0;
	std::string CellType;
public:
	int getGameObjNum();
	int getPlayerNum();
	bool execute();
	int getX();
	int getY();
	std::string getCellType();
	std::string getAType();
	MAction(int, int, int, int, std::string, Game*);
	~MAction();
};

