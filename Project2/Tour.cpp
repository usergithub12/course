#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "Кількість вільних місць: " << p.amountOfseats << endl;
	os << "Кількість туристів: " << p.amountOftourist << p.amountOftourist << endl;
	os << "Дата кінця туру: " << p.dateEnd << endl;
	os << "Дата початку туру" << p.dateStart << endl;
	os << "Ціна: " << p.price << endl;
	os << "Звідки: " << p._endplace << endl;
	os << "Куди: " << p._startplace << endl;
	os << "Шлях: " << p._way << endl;
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
