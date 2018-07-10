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
	system("mode 140 , 50");





	Tour t;
	t.SetInfo();
	t.ShowInfo();
	

	system("pause");

Country c;
	c.InitCountry();
	//c.CountryMenu();
	c.InitKurort();
	



	system("pause");

}