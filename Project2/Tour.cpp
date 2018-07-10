#include "Tour.h"



Tour::Tour()
{
}
//
//ostream &operator << (ostream&os, Tour p)
//{
//
//	os << "Кількість вільних місць: " << p.amountOfseats << endl;
//	os << "Кількість туристів: " << p.amountOftourist << endl;
//	os << "Дата кінця туру: " << p.dateEnd << endl;
//	os << "Дата початку туру" << p.dateStart << endl;
//	os << "Ціна: " << p.price << endl;
//	os << "Звідки: " << p._endplace << endl;
//	os << "Куди: " << p._startplace << endl;
//	os << "Шлях: " << p._way << endl;
//	return os;
//}
//istream &operator >> (istream & is, Tour p)
//{
//	cout << "Кількість вільних місць: " << endl;
//	is >> p.amountOfseats;
//	cout << "Кількість туристів: " << endl;
//	is >> p.amountOftourist;
//	cout << "Дата кінця туру: " << endl;
//	is >> p.dateEnd;;
//	cout << "Дата початку туру" << endl;
//	is >> p.dateStart;
//	cout << "Ціна: " << endl;
//	is >> p.price;
//	cout << "Звідки: " << endl;
//	is >> p._endplace;
//	cout << "Куди: " << endl;
//	is >> p._startplace;
//	cout << "Шлях: " << endl;
//	is >> p._way;
//	return is;
//}






void Tour::SetInfo()
{
	cout << "\t\tВибір готелю " << endl;
	Hotel::SetInfo();
	cout << "\t\tОберіть транспорт " << endl;
	int choice = 0;
	cout << "1 - Авіа" << endl;
	cout << "2 - Автобус" << endl;
	cout << "3 - Поїзд" << endl;
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
