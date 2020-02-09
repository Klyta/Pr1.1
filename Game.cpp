#include "Game.h"
Player* Game::GetPlayer(int n)
{
	return players[n];
}
void Game::SavePlayer(Player* obj)
{
	players.push_back(obj);
}