#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "ʳ������ ������ ����: " << p.amountOfseats << endl;
	os << "ʳ������ �������: " << p.amountOftourist << endl;
	os << "���� ���� ����: " << p.dateEnd << endl;
	os << "���� ������� ����" << p.dateStart << endl;
	os << "ֳ��: " << p.price << endl;
	os << "�����: " << p._endplace << endl;
	os << "����: " << p._startplace << endl;
	os << "����: " << p._way << endl;
	return os;
}
istream &operator >> (istream & is, Tour p)
{
	cout << "ʳ������ ������ ����: " << endl;
	is >> p.amountOfseats;
	cout << "ʳ������ �������: " << endl;
	is >> p.amountOftourist;
	cout << "���� ���� ����: " << endl;
	is >> p.dateEnd;;
	cout << "���� ������� ����" << endl;
	is >> p.dateStart;
	cout << "ֳ��: " << endl;
	is >> p.price;
	cout << "�����: " << endl;
	is >> p._endplace;
	cout << "����: " << endl;
	is >> p._startplace;
	cout << "����: " << endl;
	is >> p._way;
	return is;
}






void Tour::SetInfo()
{
	cout << "������ ����: " << endl;
	cin >> _way;
	cout << "�����: " << endl;
	cin >> _startplace;
	cout << "����: " << endl;
	cin >> _endplace;
	cout << "������ ������� �������: " << endl;
	cin >> amountOftourist;
	cout << "Date: " << endl;
	cin >> dateStart;
	cout << "Date end: " << endl;
	cin >> dateEnd;
}

void Tour::ShowInfo()
{
	cout << "����: " << _way<< endl;
	cout << "�����: "<< _startplace << endl;
	cout << "����: " << _endplace<<endl;
	cout << "ʳ������ �������: "<<amountOftourist << endl;
	cout << "Date: " <<dateStart <<endl;
	cout << "Date end: "<< dateEnd << endl;

}

Tour::~Tour()
{


}
