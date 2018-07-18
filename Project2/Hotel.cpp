#include "Hotel.h"



Hotel::Hotel()
{
}

void Hotel::SetInfo()
{
	_price += 500;
	cout << "Введіть кількість зірок: " << endl;
	cin >> amountOfstars;
	int choice=0;
	cout << "Виберіть тип кімнати: " << endl;
	cout << "1. Економ" << endl;
	cout << "2. Стандарт" << endl;
	cout << "3. Люкс" << endl;
	while (true)
	{
		cin >> choice;

		switch (choice)
		{
		case 1:
			typeRoom = "Економ";
			_price += 200;
			break;
		case 2:
			typeRoom = "Стандарт";
			_price += 500;
			break;
		case 3:
			typeRoom = "Люкс";
			_price += 1000;
			break;

		default:
			cout << "Виберіть 1-3." << endl;
			break;
		}
		if (choice <=3) { break; }
	
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

int Hotel::GetPrice()
{
	return _price;
}




Hotel::~Hotel()
{
}
