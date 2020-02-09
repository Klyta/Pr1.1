#pragma once
#include <string>
#include "vector"
#include "GameObj.h"
class Player
{
   std::vector<GameObj*>  playerObj;
   const int number;
public:
	Player(int number);
	int GetPlayerNumber();
	GameObj* GetGameObj(int);
	void SaveGame();
	void SaveObj(GameObj* obj);
	std::string move();
	void Load();
	~Player();
};

