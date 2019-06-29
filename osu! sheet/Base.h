#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
#pragma once

class Base
{
public:
	void gotoxy(int, int);
	void NoCursorType();
    void PrintWelcome();	// print welcome messange
	void DeleteRight();
	void DeleteLose();
	virtual void PrintMenu1();	// highlight 1. RULE in menu
	virtual void PrintMenu2();	// highlight 2. SCEDULE in menu
	virtual void PrintMenu3();	// highlight 3. MAPPOOL in menu 
	virtual void PrintMenu4();	// highlight 4. STAFF in menu
	virtual void PrintMenu5();	// highlight 5. EXIT in menu
	virtual void PrintLose();
	Base();
};

