#include "MainMenu.h"



MainMenu::MainMenu()
{
}


int MainMenu::Menu()
{
	int choice = 0;
	string menu[5];
	menu[0] = "Додати тур";
	menu[1] = "Країни та курорти";
	menu[2] = "Показати тури";
	menu[3] = "Гарячі тури";
	menu[4] = "Вихід";


	SetPos(20, 20);
	while (true)
	{
		system("cls");

		time_t rawtime;
		struct tm * timeinfo;
		time(&rawtime);
		timeinfo = localtime(&rawtime);
		cout << "Точний час: " << asctime(timeinfo);

		int x = 40;
		int y = 10;
		SetPos(x, y);
		for (int i = 0; i < 5; i++)
		{
			//SetColor(11);
			if (choice == i)
			{
				SetColor(11);
				SetPos(x, y);
				cout << "->";
			}

			cout << "  ";
			cout << i + 1 << ". " << menu[i] << endl;
			SetPos(x, y += 2);
			SetColor(7);
		}

		switch (_getch())
		{
		case 224:
		{
			switch (_getch())
			{
			case 80:
				choice < 4 ? choice++ : choice = 0;
				break;
			case 72:
				choice >0 ? choice-- : choice = 4;
				break;
			}
			break;
		}
		case 13:
		{
			return choice;
		}
		case 27:
			return -1;
		}
	}
}

void MainMenu::SetColor(int col)
{
	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
	
}

void MainMenu::SetPos(int x, int y)
{
		COORD c;
		c.X = x;
		c.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}

MainMenu::~MainMenu()
{
}
