#include"Unit.h"
#include "Cavalry.h"
#include"Cell.h"
#include<iostream>
#include"Builder.h"
#include "CavalryFactory.h"
#include "vector"
#include <exception>
#include "Parser.h"
#include "Game.h"

int main()
{
	try
	{
		Game game1;
		//Cell cell1("forest",0,0);
		//Cell cell2("pound",0,1);
		Cell cell3("forest",0,2);

		//Cell cell4("forest",0,3);
		Player player1(1);
		game1.SavePlayer(&player1);
		//Player player2(2);
		Builder builder1(100, 10, &cell3, player1);
		//Builder builder2(100, 10, &cell3, player2);
		CavalryFactory* cavalryFactory1 = builder1.bildFactory();
		//CavalryFactory* cavalryFactory2 = builder2.bildFactory();
		Cavalry *cavalry1= cavalryFactory1->getUnit("cavalry");
		//Cavalry *cavalry2 = cavalryFactory2->getUnit("cavalry");
		//cavalry1->attack(*cavalry2);
		//cavalry2->attack(*cavalry1);
		//cavalry1->attack(*cavalry2);
		//cavalry1->move(&cell4);
		//player1.SaveObj(cavalryFactory1);
		//player1.SaveObj(&builder1);
		//player1.SaveObj(&builder2);
		//player1.SaveGame();
		//player1.Load();
		//player2.SaveGame();
		//player2.Load();
		//delete cavalry1;
		//std::cout << "delete c1   " << std::endl;
		//delete cavalryFactory1;
		//std::cout << "delete cf1   " << std::endl;
		std::string massege;
		massege = player1.move();
		Parser par(&game1);
		Action* a= par.parse(massege);
		a->execute();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something wrong" << std::endl;
	}
}