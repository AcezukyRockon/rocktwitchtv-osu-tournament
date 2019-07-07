#include "Rule.h"	//include function's header in this file. This .cpp is to define every function at Rule.h
				    //go to Rule.h to see function's meaning

void Rule::PrintMenu1()
{
	Base::gotoxy(25, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   Detail rules:";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY); //blue + green = light blue
	cout << "https://github.com/fireser/rocktwitchtv-osu-tournament/blob/master/README.md";
	Base::gotoxy(25, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   (just copy and paste the link like you do in normal way)";
	Base::gotoxy(28, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "  This is a private osu! standard 1v1 tourney and will only be hosted for No Title discord server.";
	Base::gotoxy(28, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "- Only Final has BO9 format. Everything else are BO7.";
	Base::gotoxy(28, 10);
	cout << "- A referee will invite you 15 minutes before matches";
	Base::gotoxy(28, 11);
	cout << "- You have 10 mins to show up after match starts, if not you will be dq-ed";
	Base::gotoxy(28, 13);
	cout << "- Higher roll will get first warmup pick, second ban and first pick.";
	Base::gotoxy(28, 15);
	cout << "- For FM maps, players are forced to pick at least one mod.";
	Base::gotoxy(28, 16);
	cout << "  The range of mods are HR, HD, EZ, FL and SO. You can stack these mods ";
	Base::gotoxy(28, 17);
	cout << "  for higher score if you want. This rule applies for Tiebreaker as well,";
	Base::gotoxy(28, 18);
	cout << "  but you are not forced to pick any mods at all.";
	Base::gotoxy(28, 20);
	cout << "- Updates will be posted in Update.md and in No Title server. If you have any";
	Base::gotoxy(28, 21);
	cout << "  questions, please feel free to DM rock-on#9446 or post at Issues tab at Github.";
	Base::gotoxy(28, 23);
	cout << "- That's all. I wish you the best!";
	Base::DeleteLose();
}

void Rule::PrintLose()
{
	Base::gotoxy(1, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Press 'ESC' to go";
	Base::gotoxy(1, 18);
	cout << "to menu";
}

Rule::Rule()
{
}
