#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Hotel.h"
#include"Tour.h"
#include "Country.h"
#include "Avia.h"
#include <Windows.h>
#include <iomanip>
#include <forward_list>
#include <iterator>

using namespace std;

void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int Menu();
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//system("mode 140 , 60");
	Tour f;
	




	/*	time_t rawtime;
		struct tm * timeinfo;

		time(&rawtime);
		timeinfo = localtime(&rawtime);
		cout<<"Точний час: "<< asctime(timeinfo);*/

	
	
	system("pause");

	forward_list<Tour>list;
	while (true)
	{
		switch (Menu())
		{
		case 0:
			f.SetInfo();
			list.push_front(f);
			//t.ShowInfo();
			f.SaveToFile();
			break;
		case 1:
			f.InitCountry();
			f.InitKurort();
			break;
		case 2:
		//	f.ReadFromFile();
			//copy(
			//	list.begin(), //Ітератор початку вектора
			//	list.end(),   //Ітератор кінця вектора
			//	ostream_iterator<Tour>(cout, " "));
			f.ShowInfo();
			system("pause");
			break;
		case 3:
			f.HotTour();
			system("pause");
			break;
		case '13':
			return;
			break;
		default:
			break;

		}
	}

	system("pause");
	


}



	int Menu()
	{


		int choice = 0;
		string menu[5];
		menu[0] = "Додати тур";
		menu[1] = "Країни та курорти";
		menu[2] = "Показати тури";
		menu[3] = "Гарячі тури";
		menu[4] = "Exit";


		SetPos(20, 20);
		while (true)
		{
			system("cls");


			int x = 40;
			int y = 10;
			SetPos(x, y);
			for (int i = 0; i < 4; i++)
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


