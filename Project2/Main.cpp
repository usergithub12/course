#include <iostream>
#include "Hotel.h"
#include"Tour.h"
#include "Country.h"
#include "Avia.h"
#include <Windows.h>
#include <forward_list>
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
	system("mode 140 , 60");

	Tour t;

	t.SetInfo();
	t.ShowInfo();
	forward_list<Tour>list;
	list.push_front(t);
	
	t.SaveToFile();
	system("pause");
	system("cls");

	



	system("pause");

}