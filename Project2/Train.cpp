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
		break;
	case 2:
		tickettype = "Купе";
		break;
	case 3:
		tickettype = "Плацкарт";
		break;
	case 4:
		tickettype = "Перший клас";
		break;
	case 5:
		tickettype = "Другий клас";
		break;
	}

}

Train::~Train()
{
}
