#include "Mappool.h"	//include function's header in this file. This .cpp is to define every function at Mappool.h
					     //go to Mappool.h to see function's meaning

void Mappool::PrintMenu1()
{
	Base::gotoxy(25, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   Detail mappool:";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "https://docs.google.com/spreadsheets/d/1IqsZYKsojLxQJijOA-ERuLDBX20CvSLbc_HIaNfZrbk/edit?usp=sharing";
	Base::gotoxy(25, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   (just copy and paste the link like you do in normal way)";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	//Commands to open and read mappool.txt
	int i = 7;
	string line_;
	ifstream file_("mappool.txt");
	if (file_.is_open()) {
		while (getline(file_, line_)) {
			Base::gotoxy(30, i);
			cout << line_ << "\n";
			i++;
		}
		file_.close();
	}
	else cout << "file is not open\n";
	Base::DeleteLose();
}

void Mappool::PrintLose()
{
	Base::gotoxy(1, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Press 'ESC' to go";
	Base::gotoxy(1, 18);
	cout << "to menu";
}

Mappool::Mappool()
{
}
