#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "ʳ������ ������ ����: " << p.amountOfstars << endl;
	os << "ʳ������ �������: " << p.amountofTourists << endl;
	os << "���� ���� ����: " << p.end << endl;
	os << "���� ������� ����" << p.start << endl;
	os << "ֳ��: " << p.typeRoom << endl;
	os << "�����: " << p.typetransport << endl;
	
	return os;
}
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
		typetransport = "���";
		t->SetInfo();
		m.SaveToFile();
	
		break;
	case 2:
		t = new Avtobus;
		typetransport = "�������";
		t->SetInfo();
		Transport::SaveToFile();
	
		break;
	case 3:
		t = new Train;
		typetransport = "����";
		t->SetInfo();
	Transport::SaveToFile();
		
		break;
	default:
		break;
	}
	system("cls");
	Country::InitCountry();
	Country::InitKurort();
	

}

void Tour::ShowInfo()
{
	Hotel::ShowInfo();
	t->ShowInfo();
	cout << "���������: " << typetransport<< endl;
}

void Tour::SaveToFile()
{
	ofstream out("tour.txt",ios_base::trunc);
	out << start << ':';
	out << end << ':';

	out << amountofTourists << ':';
	out << typetransport << ':';
	out << amountOfstars << ':';
	out << _nameofCountry << ':';
	out<< _kurort << ':';
	out << typeRoom << ';';
	
	//out << tickettype;
	out.close();

}

Tour::~Tour()
{


}
