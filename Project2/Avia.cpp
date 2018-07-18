#include "Avia.h"



Avia::Avia()
{
	_price = 0;
}

void Avia::ShowInfo()
{
	Transport::ShowInfo();
	cout << "Класс: " << tickettype << endl;

}

void Avia::SetInfo()
{
	Transport::SetInfo();
	_price += 1000;
	int choice;
	cout << "Виберіть клас: " << endl;
	cout << "1 - Економ" << endl;
	cout << "2 - Бізнес" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		tickettype = "Економ";
		_price += 500;
		break;
	case 2:
		tickettype = "Бізнес";
		_price += 1500;
		break;
	}

}

void Avia::SaveToFile()
{
	Transport::SaveToFile();
	ofstream out("tour.txt", ios_base::app);


	out << tickettype << ':';

	out.close();

}

int Avia::GetPrice()
{
	return _price;
}




Avia::~Avia()
{
}
