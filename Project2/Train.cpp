#include "Train.h"



Train::Train()
{
}

void Train::ShowInfo()
{
	Transport::ShowInfo();
	cout << "�����: " << tickettype << endl;

}

void Train::SetInfo()
{
	Transport::SetInfo();
	_price += 500;
	int choice;
	cout << "������� ����: " << endl;
	cout << "1 - ����" << endl;
	cout << "2 - ����" << endl;
	cout << "3 - ��������" << endl;
	cout << "4 - ������ ����" << endl;
	cout << "5 - ������ ����" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		tickettype = "����";
		_price += 1000;
		break;
	case 2:
		tickettype = "����";
		_price += 800;
		break;
	case 3:
		tickettype = "��������";
		_price += 700;
		break;
	case 4:
		tickettype = "������ ����";
		_price += 500;
		break;
	case 5:
		tickettype = "������ ����";
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
