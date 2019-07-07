#pragma once
#include "Base.h" //inherit from class Base

class ListPlayers :
	public Base //inherit from class Base
{
public:
	void PrintMenu1(); //Print list of players and schedule link
	void PrintLose(); //Print Lost?
	ListPlayers(); //default constructor
};

