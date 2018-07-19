#include <iostream>
#include "Hotel.h"
#include"Tour.h"
#include "Country.h"
#include "Avia.h"
#include <Windows.h>
#include <iomanip>
#include <vector>
#include <iterator>
#include "MainMenu.h"

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Tour>::iterator it;
	MainMenu m;

	system("mode 140 , 60");
	vector<Tour> list;
		int size = 0;
	Tour *t = new Tour[size];
	
	while (true)
	{
		switch (m.Menu())
		{
		case 0:
		size++;
		t = new Tour[size];
		t->SetInfo();
		list.insert(list.end(), *t);
		t->SaveToFile();
			break;
		case 1:
			t->InitCountry();
			t->InitKurort();
			system("pause");
			
			break;
		case 2:
			for (size_t i = 0; i < size; i++)
			{

				cout << list[i] << endl;

				system("pause");

			}
			t->ReadFromFile();
			break;
		case 3:
			t->HotTour();
			system("pause");
			break;
		case 4:
			if (!list.empty())
			{
				switch (m.DelMenu())
				{
				case 0:
					list.erase(list.begin());
					break;
				case 1:
					list.pop_back();
					break;
				}
			}
		    break;
		case 5:
			return ;
			break;
		default:
			break;

		}
	}
	system("pause");
}

	
