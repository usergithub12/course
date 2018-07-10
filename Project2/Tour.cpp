#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "Кількість вільних місць: " << p.amountOfseats << endl;
	os << "Кількість туристів: " << p.amountOftourist << endl;
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
	cout << "Кількість вільних місць: " << endl;
	is >> p.amountOfseats;
	cout << "Кількість туристів: " << endl;
	is >> p.amountOftourist;
	cout << "Дата кінця туру: " << endl;
	is >> p.dateEnd;;
	cout << "Дата початку туру" << endl;
	is >> p.dateStart;
	cout << "Ціна: " << endl;
	is >> p.price;
	cout << "Звідки: " << endl;
	is >> p._endplace;
	cout << "Куди: " << endl;
	is >> p._startplace;
	cout << "Шлях: " << endl;
	is >> p._way;
	return is;
}






void Tour::SetInfo()
{
	cout << "Введіть шлях: " << endl;
	cin >> _way;
	cout << "Звідки: " << endl;
	cin >> _startplace;
	cout << "Куди: " << endl;
	cin >> _endplace;
	cout << "Введіть кількість туристів: " << endl;
	cin >> amountOftourist;
	cout << "Date: " << endl;
	cin >> dateStart;
	cout << "Date end: " << endl;
	cin >> dateEnd;
}

void Tour::ShowInfo()
{
	cout << "Шлях: " << _way<< endl;
	cout << "Звідки: "<< _startplace << endl;
	cout << "Куди: " << _endplace<<endl;
	cout << "Кількість туристів: "<<amountOftourist << endl;
	cout << "Date: " <<dateStart <<endl;
	cout << "Date end: "<< dateEnd << endl;

}

Tour::~Tour()
{


}
