#include "Tour.h"



Tour::Tour()
{
}
//
//ostream &operator << (ostream&os, Tour p)
//{
//
//	os << "ʳ������ ������ ����: " << p.amountOfseats << endl;
//	os << "ʳ������ �������: " << p.amountOftourist << endl;
//	os << "���� ���� ����: " << p.dateEnd << endl;
//	os << "���� ������� ����" << p.dateStart << endl;
//	os << "ֳ��: " << p.price << endl;
//	os << "�����: " << p._endplace << endl;
//	os << "����: " << p._startplace << endl;
//	os << "����: " << p._way << endl;
//	return os;
//}
//istream &operator >> (istream & is, Tour p)
//{
//	cout << "ʳ������ ������ ����: " << endl;
//	is >> p.amountOfseats;
//	cout << "ʳ������ �������: " << endl;
//	is >> p.amountOftourist;
//	cout << "���� ���� ����: " << endl;
//	is >> p.dateEnd;;
//	cout << "���� ������� ����" << endl;
//	is >> p.dateStart;
//	cout << "ֳ��: " << endl;
//	is >> p.price;
//	cout << "�����: " << endl;
//	is >> p._endplace;
//	cout << "����: " << endl;
//	is >> p._startplace;
//	cout << "����: " << endl;
//	is >> p._way;
//	return is;
//}






void Tour::SetInfo()
{
	cout << "\t\t���� ������ " << endl;
	Hotel::SetInfo();
	cout << "\t\t������ ��������� " << endl;
	int choice = 0;
	cout << "1 - ���" << endl;
	cout << "2 - �������" << endl;
	cout << "3 - ����" << endl;
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		t = new Avia;
		break;
	case 2:
		t = new Avtobus;
		break;
	case 3:
		t = new Train;
		break;
	default:
		break;
	}
	t->SetInfo();
	c.InitCountry();
	c.InitKurort();


}

void Tour::ShowInfo()
{
	
	
	Hotel::ShowInfo();
	t->ShowInfo();
}

Tour::~Tour()
{


}
