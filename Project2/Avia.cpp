#include "Avia.h"



Avia::Avia()
{
}

void Avia::ShowInfo()
{
	Transport::ShowInfo();
	cout << "�����: " << tickettype << endl;

}

void Avia::SetInfo()
{
	Transport::SetInfo();

	int choice;
	cout << "������� ����: " << endl;
	cout << "1 - ������" << endl;
	cout << "2 - ������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		tickettype = "������";
		break;
	case 2:
		tickettype = "������";
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






Avia::~Avia()
{
}
