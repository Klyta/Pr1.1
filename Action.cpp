#include "Action.h"

std::string Action::getStr()
{
	return str;
}
Game* Action::getGame()
{
	return game;
}
Action::Action() 
{
	std::cout << "Action()" << std::endl;
}
Action::Action(std::string str ,Game* game) :str(str) ,game(game)
{
	std::cout << "Action(str,game)" << std::endl;
}
bool Action::execute()
{
	std::cout << "Execute()" << std::endl;
}
	Action::~Action()
{
	std::cout << "~Action()" << std::endl;
}