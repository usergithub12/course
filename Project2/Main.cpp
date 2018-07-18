
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


	MainMenu m;

	//system("mode 140 , 60");
	Tour *f=new Tour;
	
	vector<Tour>list;
	while (true)
	{
		switch (m.Menu())
		{
		case 0:
			f = new Tour;
			f->SetInfo();
			list.push_back(*f);
			//t.ShowInfo();
			f->SaveToFile();
			break;
		case 1:
			
			f->InitCountry();
			f->InitKurort();

		
			break;
		case 2:
			f->ReadFromFile();
			
			copy(
				list.begin(), //≤тератор початку вектора
				list.end(),   //≤тератор к≥нц€ вектора
				ostream_iterator<Tour>(cout, " "));
			
			
			system("pause");
			break;
		case 3:
			f->HotTour();
			system("pause");
			break;
		case 4:
			return ;
			break;
		default:
			break;

		}
	}
	system("pause");
}

	
