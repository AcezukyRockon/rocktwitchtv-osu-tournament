#include "Base.h" //include function's header in this file. This .cpp is to define every function at Base.h
				  //go to Base.h to see function's meaning

void Base::gotoxy(int x, int y) 
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void Base::NoCursorType() 
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void Base::PrintWelcome() 
{
	gotoxy(1, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY); //color command
	cout << "WELCOME TO ROCKTWITCHTV TOURNAMENT !!!";
}

void Base::DeleteRight() 
{
	for (int i = 4; i < 40; i++) {
		gotoxy(25, i);
		for (int i = 25; i <= 150; i++)
			cout << " ";
	}
}

void Base::DeleteLose() 
{
	for (int i = 17; i < 22; i++) {
		gotoxy(1, i);
		for (int i = 1; i <= 21; i++)
			cout << " ";
	}
	/*Base::gotoxy(1, 17);
	for (int i = 1; i <= 21; i++) cout << " ";
	Base::gotoxy(1, 18);
	for (int i = 1; i <= 21; i++) cout << " ";*/
}

void Base::PrintMenu1()
{
	gotoxy(1, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); //Red + Green = yellow
	cout << "-> 1. QUICK RULES";
	gotoxy(1, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   2. PLAYERS & SCHEDULE";
	gotoxy(1, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   3. MAPPOOL";
	gotoxy(1, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   4. CODING STUFF";
	gotoxy(1, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   5. EXIT";
	Base::DeleteLose(); // fully delete long words when switching UI
	Base::gotoxy(1, 17);
	cout << "Use 'W' or 'S' to go";
	Base::gotoxy(1, 18);
	cout << "up and down";
	Base::gotoxy(1, 20);
	cout << "Press Enter to view";
}

void Base::PrintMenu2()
{
	gotoxy(1, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   1. QUICK RULES";
	gotoxy(1, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "-> 2. PLAYERS & SCHEDULE";
	gotoxy(1, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   3. MAPPOOL";
	gotoxy(1, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   4. CODING STUFF";
	gotoxy(1, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   5. EXIT";
	Base::DeleteLose();
	Base::gotoxy(1, 17);
	cout << "Use 'W' or 'S' to go";
	Base::gotoxy(1, 18);
	cout << "up and down";
	Base::gotoxy(1, 20);
	cout << "Press Enter to view";
}

void Base::PrintMenu3()
{
	gotoxy(1, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   1. QUICK RULES";
	gotoxy(1, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   2. PLAYERS & SCHEDULE";
	gotoxy(1, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "-> 3. MAPPOOL";
	gotoxy(1, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   4. CODING STUFF";
	gotoxy(1, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   5. EXIT";
	Base::DeleteLose();
	Base::gotoxy(1, 17);
	cout << "Use 'W' or 'S' to go";
	Base::gotoxy(1, 18);
	cout << "up and down";
	Base::gotoxy(1, 20);
	cout << "Press Enter to view";
}

void Base::PrintMenu4()
{
	Base::DeleteLose();
	gotoxy(1, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   1. QUICK RULES";
	gotoxy(1, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   2. PLAYERS & SCHEDULE";
	gotoxy(1, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   3. MAPPOOL";
	gotoxy(1, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "-> 4. CODING STUFF";
	gotoxy(1, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   5. EXIT";
	Base::gotoxy(1, 17);
	cout << "Use 'W' or 'S' to go";
	Base::gotoxy(1, 18);
	cout << "up and down";
	Base::gotoxy(1, 20);
	cout << "Press Enter to view";
}

void Base::PrintMenu5()
{
	gotoxy(1, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   1. QUICK RULES";
	gotoxy(1, 6);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   2. PLAYERS & SCHEDULE";
	gotoxy(1, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   3. MAPPOOL";
	gotoxy(1, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   4. CODING STUFF";
	gotoxy(1, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "-> 5. EXIT";
	Base::DeleteLose();
	Base::gotoxy(1, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Thank you for using";
	Base::gotoxy(1, 18);
	cout << "the application!";
}

void Base::PrintLose()
{
	gotoxy(1, 15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Lost?";
}

Base::Base()
{
}
