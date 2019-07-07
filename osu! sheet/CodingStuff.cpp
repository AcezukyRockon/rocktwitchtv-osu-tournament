#include "CodingStuff.h" //include function's header in this file. This .cpp is to define every function at CodingStuff.h
						 //go to CodingStuff.h to see function's meaning

void CodingStuff::PrintMenu1()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	Base::gotoxy(30, 4);
	cout << "I use Object Oriented-Programing and a little experience from TETRIS games to do this program:";
	Base::gotoxy(30, 6);
	cout << "- There are total 5 classes, class Base is the parent class, CodingStuff, ListPlayers, Mappool, Rule inherit from Base.";
	Base::gotoxy(30, 7);
	cout << "- 4 of small classes share same PrintMenu() and PrintLose() functions, but they have different definition.";
	Base::gotoxy(30, 8);
	cout << "- ListPlayers and Mappool are imported from .txt files (which are in same folder with .exe) instead of cout-ing it.";
	Base::gotoxy(30, 9);
	cout << "- If you still can't view properlly after fullscreen the CMD, try right click on top bar and change font size.";
	Base::gotoxy(30, 10);
	cout << "- Detail explanation I commented in all .cpp, .h files. I tried to explain as clear as possible.";
	Base::gotoxy(30, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY); //red + blue = purple
	cout << "  This program is made by rock-on";
	Base::gotoxy(30, 14);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   Detail program: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "https://github.com/fireser/rocktwitchtv-osu-tournament/tree/master/osu!%20sheet";
	Base::gotoxy(30, 15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "    (just copy and paste the link like you do in normal way)";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void CodingStuff::PrintMenu2()
{
	Base::DeleteRight();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	Base::gotoxy(30, 4);
	cout << "this is page 2";
}

void CodingStuff::PrintLose()
{
	Base::gotoxy(1, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Press 'ESC' to go";
	Base::gotoxy(1, 18);
	cout << "to menu";
	Base::gotoxy(1, 19);
	cout << "Press 'a' or 'd'";
	Base::gotoxy(1, 20);
	cout << "to go next and";
	Base::gotoxy(1, 21);
	cout << "previous page.";
}

CodingStuff::CodingStuff()
{
}
