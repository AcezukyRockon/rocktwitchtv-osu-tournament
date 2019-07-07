#pragma once
#include "Base.h" //inherit from class Base
class Rule :
	public Base //inherit from class Base
{
public:
	void PrintMenu1(); //Print quick rules
	void PrintLose(); //Print Lost?
	Rule(); //default constructor
};

