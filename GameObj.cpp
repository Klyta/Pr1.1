#include"GameObj.h"
std::string GameObj::toString()
{
	std::string str="a";
	std::cout << "GOBJ to string" << std::endl;
	return str;
}
bool GameObj::doAction(Action*)
{
	std::cout << "DoActionA()" << std::endl;
	return 0;
}