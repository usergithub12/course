#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "ʳ������ ������ ����: " << p.amountOfseats << endl;
	os << "ʳ������ �������: " << p.amountOftourist << p.amountOftourist << endl;
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
	is >> p.amountOfseats;
	is >> p.amountOftourist;
	is >> p.dateEnd;
	is >> p.dateStart;
	is >> p.price;
	is >> p._endplace;
	is >> p._startplace;
	is >> p._way;
	return is;
}






Tour::~Tour()
{
	

}
