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
		break;
	case 2:
		tickettype = "����";
		break;
	case 3:
		tickettype = "��������";
		break;
	case 4:
		tickettype = "������ ����";
		break;
	case 5:
		tickettype = "������ ����";
		break;
	}

}

Train::~Train()
{
}
