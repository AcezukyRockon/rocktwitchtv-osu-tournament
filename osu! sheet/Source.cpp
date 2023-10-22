#include "Base.h" //include this to use Base.h functions
#include "Rule.h" //include this to use Rule.h functions
#include "ListPlayers.h" //include this to use ListPlayers.h functions
#include "Mappool.h" //include this to use Mappool.h functions
#include "CodingStuff.h" //include this to use CodingStuff.h functions

int main() {
	Base* a = NULL, //set this to NULL so there will be no error
		* b = NULL,
		* c = NULL,
		* d = NULL,
		* e = NULL;

	a = new Base(); //basic class command
	b = new Rule();
	c = new ListPlayers();
	d = new Mappool();
	e = new CodingStuff();
	
	int dem = 1, // this is important for User Interfact 
		dem2 = 1, // this is for CodingStuff menu only
		ASCIIValue; // this is for key input
	char key, keyfirst; // this is for key input
	bool disable = false, disablefirst = true; // this is for key input

	a->NoCursorType(); // Hide console cursor

	// Print Welcome Screen
	a->PrintWelcome();
	cout << "   (Press Alt + Enter or double click at top bar to fullscreen for full view)";
	a->gotoxy(1, 3);
	cout << "Press any key to continue...";
	Sleep(500);

	while (!_kbhit()) { //flashing "Press any key to continue..." until user presses a key
		a->gotoxy(1, 3);
		for (int j = 1; j <= 30; j++)
			cout << " ";
		a->gotoxy(1, 3);
		Sleep(500);
		cout << "Press any key to continue...";
		Sleep(500);

	}

	while (1) //basic infinite loop
	{
		if (_kbhit()) //when user press a key, this one run
		{
			a->NoCursorType(); //hide cursor second time after fullscreen CMD
			a->gotoxy(0, 3); //delete "press any key to continue"
			cout << "                                   ";
			key = _getch(); //basic commands for key input
			ASCIIValue = key;
			if (ASCIIValue == 119 && disable == false) { //pretend each menu is a number, change number is changing menu
				dem--; //if press "s", dem will be reduced
				a->DeleteLose(); //delete ?Lost?" 
			}
			if (ASCIIValue == 115 && disable == false) {//if press "w", dem will be increased
				dem++;
				a->DeleteLose();
			}
			if (ASCIIValue == 13) disable = true; // this is to support upper commands
			if (ASCIIValue == 27) // this is to support upper commands
			{
				disable = false;
				a->DeleteRight(); //when press ESC, everything at the right side will be deleted
		//		a->DeleteLose();
			}
			if (dem < 1) //deny dem to reduce to keep highlight at 1.Quick rule. 
			{
				dem = 1;
				//continue;
			}
			if (dem > 5) //deny dem to reduce to keep highlight at 5. Exit. 
			{
				dem = 5;
				//continue;
			}

			if (dem == 1)// print menu and highlight 1. QUICK RULE
			{
				a->PrintLose(); //print Lost?
				a->PrintWelcome(); //print Welcome message
				a->PrintMenu1(); //highlight 1. QUICK RULE
				if (ASCIIValue == 13) { //if press enter
					b->PrintMenu1(); //print quick rules
					b->PrintLose(); //print Lost? about "ESC"
				}
				continue; //continue if(_khbit) without reading below
			}

			if (dem == 2)// print menu and highlight 2. PLAYERS & SCHEDULE (pretty same to quick rule)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu2(); 
				if (ASCIIValue == 13) {
					c->PrintMenu1();
					c->PrintLose();
				}
				continue;
			}
			if (dem == 3)// print menu and highlight 3. Mappool (pretty same to quick rule)
			{
				a->PrintWelcome();
				a->PrintMenu3(); //highlight chữ Credit
				a->PrintLose();
				if (ASCIIValue == 13) {
					d->PrintMenu1();
					d->PrintLose();
				}
				continue;
			}
			if (dem == 4)// print menu and highlight 4. CODING STUFF (pretty same to quick rule)
			{
				a->PrintWelcome();
				a->PrintMenu4();
				a->PrintLose();
				if (ASCIIValue == 13) { //press enter is the first page of this menu
					dem2 = 1; //this to prevent program to jump to 2nd page 
					e->PrintMenu1();
					e->PrintLose();
					continue;
				}
				///////////////////////////////////////////////////////// same UI codes to dem
				if (disable == true) { //to ensure that user already pressed enter and no need to press it again 
					if (ASCIIValue == 97) { //dem2 is for a and d, while dem is for w an d
						dem2--; // if press a, dem2 will be reduced
					}
					if (ASCIIValue == 100) {// if press d, dem2 will be increased
						dem2++;
					}	
					//deny highlight like in dem
					if (dem2 < 1) 
					{
						dem2 = 1;
						//continue;
					}
					if (dem2 > 2) 
					{
						dem2 = 2;
						//continue;
					}
					//each dem2 is a page of Coding stuff
					if (dem2 == 1) { //print page 1 of Coding stuff
						e->PrintMenu1();
						e->PrintLose();
						continue;
					}
					if (dem2 == 2) { //print page 2 of Coding stuff
						e->PrintMenu2();
						e->PrintLose();
						continue;
					}
				}
		//		continue;
			}
			if (dem == 5) // print menu and highlight 5. EXIT (pretty same to quick rule)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu5();
				if (ASCIIValue == 13) break; //Exit the program
				continue;
			}
		}
		else Sleep(1); // reduce CPU usage
	}
	//cin.get();
	a->gotoxy(1, 20); //move cursor to (1,20) and let the program print "Press any key to continue" at that coordinate
	system("pause"); //pause the screen so that you can see the result (some IDE doesn't need this)
	return 0; //bye bye
}
