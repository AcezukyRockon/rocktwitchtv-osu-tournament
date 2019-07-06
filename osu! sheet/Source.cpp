#include "Base.h"
#include "Rule.h"
#include "ListPlayers.h"
#include "Mappool.h"

int main() {
	Base* a = NULL,
		* b = NULL,
		* c = NULL,
		* d = NULL;

	a = new Base();
	b = new Rule();
	c = new ListPlayers();
	d = new Mappool();
	
	int dem = 1, dem2 = 1, ASCIIValue, ASCIIValue_first;
	char key, keyfirst;
	bool disable = false, disablefirst = true;

	a->NoCursorType(); // Hide console cursor

	// Print Welcome Screen
	a->PrintWelcome();
	cout << "   (Press Alt + Enter or double click at top bar to fullscreen for full view)";
	a->gotoxy(1, 3);
	cout << "Press any key to continue...";
	Sleep(500);

	while (!_kbhit()) { //flashing "Press any key to continue..."
		a->gotoxy(1, 3);
		for (int j = 1; j <= 30; j++)
			cout << " ";
		a->gotoxy(1, 3);
		Sleep(500);
		cout << "Press any key to continue...";
		Sleep(500);

	}

	while (1)
	{
		if (_kbhit())
		{
			a->NoCursorType();
			a->gotoxy(1, 3);
			cout << "                                   ";
			key = _getch();
			ASCIIValue = key;
			if (ASCIIValue == 119 && disable == false) { //coi mỗi giao diện là 1 con số, thay đổi con số là thay đổi giao diện
				dem--;
				a->DeleteLose();
			}
			if (ASCIIValue == 115 && disable == false) {
				dem++;
				a->DeleteLose();
			}
			if (ASCIIValue == 13) disable = true;
			if (ASCIIValue == 27)
			{
				disable = false;
				a->DeleteRight();
			}
			/*if (dem2 == 1) dem = 1;
			if (dem2 == 3) dem = 2;
			if (dem2 == 5) dem = 3;
			if (dem2 == 7) dem = 4;
			if (dem2 == 9) dem = 5;*/

	//		a->gotoxy(1, 13); 
	//		cout << "\n" << "dem = " << dem << /*" | dem2 = " << dem2 <<*/ " | disable = " << disable;

			if (dem < 1) //chặn highlight nếu như đã ở trên cùng mà vẫn bấm nút lên
			{
				dem = 1;
				//continue;
			}
			if (dem > 5) // chặn highlight nếu như đã ở dưới cùng mà vẫn bấm nút xuống
			{
				dem = 5;
				//continue;
			}

			if (dem == 1)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu1();
				if (ASCIIValue == 13) {
					b->PrintMenu1();
					b->PrintLose();
				}
				continue;
			}

			if (dem == 2)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu2(); //highlight chữ Help
				if (ASCIIValue == 13) {
					c->PrintMenu1();
					c->PrintLose();
				}
				continue;
			}
			if (dem == 3)
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
			if (dem == 4)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu4(); //highlight chữ Exit
				
		//		if (ASCIIValue == 13) break; //thoát khỏi game
				continue;
			}
			if (dem == 5)
			{
				a->PrintLose();
				a->PrintWelcome();
				a->PrintMenu5(); //highlight chữ Exit
				
				if (ASCIIValue == 13) break; //thoát khỏi game
				continue;
			}
		}
	}
	//cin.get();
	system("pause");
	return 0;
}