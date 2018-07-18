#include "Train.h"



Train::Train()
{
}

void Train::ShowInfo()
{
	Transport::ShowInfo();
	cout << "Класс: " << tickettype << endl;

}

void Train::SetInfo()
{
	Transport::SetInfo();
	_price += 500;
	int choice;
	cout << "Виберіть клас: " << endl;
	cout << "1 - Люкс" << endl;
	cout << "2 - Купе" << endl;
	cout << "3 - Плацкарт" << endl;
	cout << "4 - Перший клас" << endl;
	cout << "5 - Другий клас" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		tickettype = "Люкс";
		_price += 1000;
		break;
	case 2:
		tickettype = "Купе";
		_price += 800;
		break;
	case 3:
		tickettype = "Плацкарт";
		_price += 700;
		break;
	case 4:
		tickettype = "Перший клас";
		_price += 500;
		break;
	case 5:
		tickettype = "Другий клас";
		_price += 300;
		break;
	}

}

void Train::SaveToFile()
{
	
		Transport::SaveToFile();
		ofstream out("tour.txt", ios_base::app);

		out << tickettype << ':';

		//out << tickettype;
		out.close();

	
}

int Train::GetPrice()
{
	return _price;
}

Train::~Train()
{
}
