#include "Hotel.h"



Hotel::Hotel()
{
}

void Hotel::SetInfo()
{
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
		break;
	case 2:
		typeRoom = "��������";
		break;
	case 3:
		typeRoom = "����";
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




Hotel::~Hotel()
{
}
