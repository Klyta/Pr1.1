#pragma once
#include <stack>
#include <string>
#include <iostream>
#include "Action.h"
class GameObj
{
public:
	virtual std::string toString();
	virtual bool doAction(Action*);
};

