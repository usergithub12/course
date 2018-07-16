#include "Hotel.h"



Hotel::Hotel()
{
}

void Hotel::SetInfo()
{
	cout << "Введіть кількість зірок: " << endl;
	cin >> amountOfstars;
	int choice=0;
	cout << "Виберіть тип кімнати: " << endl;
	cout << "1. Економ" << endl;
	cout << "2. Стандарт" << endl;
	cout << "3. Люкс" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		typeRoom = "Економ";
		break;
	case 2:
		typeRoom = "Стандарт";
		break;
	case 3:
		typeRoom = "Люкс";
		break;
		
	default:
		break;
	}
}

void Hotel::ShowInfo()
{
	cout << "Кількість зірок: " << amountOfstars << endl;
	cout << "Тип кімнати: " << typeRoom << endl;
}

void Hotel::SaveToFile()
{
	ofstream out("tour.txt", ios_base::app);

	out << amountOfstars << ':';
	out << typeRoom << ':';


	out.close();

}




Hotel::~Hotel()
{
}
