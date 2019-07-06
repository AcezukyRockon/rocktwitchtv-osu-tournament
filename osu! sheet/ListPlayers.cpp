#include "ListPlayers.h"

void ListPlayers::PrintMenu1()
{
	int i = 4;
	string line_;
	ifstream file_("listplayers.txt");
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

void ListPlayers::PrintLose()
{
	Base::gotoxy(1, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Press 'ESC' to go";
	Base::gotoxy(1, 18);
	cout << "to menu";
}

ListPlayers::ListPlayers()
{
}
