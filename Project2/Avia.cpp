#include "Avia.h"



Avia::Avia()
{
}

void Avia::ShowInfo()
{
	cout << "���� ����� : " << start << endl;
	cout << "���� ����������" << end << endl;
	cout << "ʳ������ �������: " << amountofTourists << endl;
	cout << "�����: " << tickettype << endl;

}

void Avia::SetInfo()
{
	cout << "������ ���� �������: " << endl;
	cin >> start;
	cout << "������ ���� ��������: " << endl;
	cin >> end;
	cout << "������ ������� �������: " << endl;
	cin >> amountofTourists;

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




Avia::~Avia()
{
}
