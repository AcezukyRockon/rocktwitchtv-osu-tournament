#include <iostream> //basic C++ library
#include <Windows.h> //Window library to use color commands
#include <cstdlib> //old C library
#include <ctime> //time library but i don't know if i need this
#include <conio.h> //hmm i forgot this lmao, probably C library
#include <fstream> //library to read .txt file (or other files)
#include <string> //string library
using namespace std; //reduce std:: on some commands
#pragma once //this is to make classes not "crash" together in my opinion

class Base //class Base definition
{
public: //basic class thingy
	void gotoxy(int, int); //this one is super important if you want to "draw" in CMD
	void NoCursorType(); //hide CMD cursor
    void PrintWelcome(); // print welcome messange
	void DeleteRight(); //delete right side which is detail of the left side
	void DeleteLose(); //delete the "Lost?"'s detail
	//I did learn about virtual but i think i don't use it that much, oh well i just put it here
	virtual void PrintMenu1();	// highlight 1. RULE in menu
	virtual void PrintMenu2();	// highlight 2. SCEDULE in menu
	virtual void PrintMenu3();	// highlight 3. MAPPOOL in menu 
	virtual void PrintMenu4();	// highlight 4. STAFF in menu
	virtual void PrintMenu5();	// highlight 5. EXIT in menu
	virtual void PrintLose(); //Print Lost?
	Base(); //default Constructor (i just let it here so that it won't complain about error smh
}; //remember ";"

