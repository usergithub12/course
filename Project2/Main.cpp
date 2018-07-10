#include <iostream>
#include "Hotel.h"
#include"Tour.h"
#include "Country.h"
#include "Avia.h"
#include <Windows.h>
using namespace std;
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Tour t;
	//t.SetInfo();
	//t.ShowInfo();
	//cin >> t;
	system("mode 140 , 50");
	Transport *t=new Avia;
	t->SetInfo();
	t->ShowInfo();
	system("pause");

Country c;
	c.InitCountry();
	//c.CountryMenu();
	c.InitKurort();
	//cout << c;
		//Avia h;
	//int choice=1;
	//cin >> choice;
	//switch (choice)
	//{
	//case 1:
	//	cout << "Транспорт: " << endl;
	//	cout << "1. Авіа" << endl;
	//	cout << "2. Автобус" << endl;
	//	cout << "3. Поїзд" << endl; // плацкарт купе люкс сидячі(1-2) клас
	////case 1:
	////case 1:
	//}




	system("pause");

}