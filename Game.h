#pragma once
#include <string>
#include "vector"
#include "Player.h"
class Game
{
	std::vector<Player*>  players;
public:
	Player* GetPlayer(int);
	void SavePlayer(Player* obj);
};

