#include "Avia.h"



Avia::Avia()
{
	_price = 0;
}

void Avia::ShowInfo()
{
	Transport::ShowInfo();
	cout << "�����: " << tickettype << endl;

}

void Avia::SetInfo()
{
	Transport::SetInfo();
	_price += 1000;
	int choice;
	cout << "������� ����: " << endl;
	cout << "1 - ������" << endl;
	cout << "2 - ������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		tickettype = "������";
		_price += 500;
		break;
	case 2:
		tickettype = "������";
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
