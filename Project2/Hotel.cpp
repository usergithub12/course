#include "Hotel.h"



Hotel::Hotel()
{
}

void Hotel::SetInfo()
{
	_price += 500;
	cout << "������ ������� ����: " << endl;
	cin >> amountOfstars;
	int choice=0;
	cout << "������� ��� ������: " << endl;
	cout << "1. ������" << endl;
	cout << "2. ��������" << endl;
	cout << "3. ����" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		typeRoom = "������";
		_price += 200;
		break;
	case 2:
		typeRoom = "��������";
		_price += 500;
		break;
	case 3:
		typeRoom = "����";
		_price += 1000;
		break;
		
	default:
		break;
	}
}

void Hotel::ShowInfo()
{
	cout << "ʳ������ ����: " << amountOfstars << endl;
	cout << "��� ������: " << typeRoom << endl;
}

void Hotel::SaveToFile()
{
	ofstream out("tour.txt", ios_base::app);

	out << amountOfstars << ':';
	out << typeRoom << ':';


	out.close();

}
//
//int Hotel::GetStars()
//{
//	return amountOfstars;
//}
int Hotel::GetPrice()
{
	return _price;
}




Hotel::~Hotel()
{
}
