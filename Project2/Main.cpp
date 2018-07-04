#include <iostream>
#include "Hotel.h"
#include"Tour.h"
#include "Country.h"
#include <Windows.h>
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Tour t;
	//cin >> t;

	Country c;
	c.InitCountry();
	cout << c;
	system("pause");

}