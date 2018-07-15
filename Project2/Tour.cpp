#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "Кількість вільних місць: " << p.amountOfstars << endl;
	os << "Кількість туристів: " << p.amountofTourists << endl;
	os << "Дата кінця туру: " << p.end << endl;
	os << "Дата початку туру" << p.start << endl;
	os << "Ціна: " << p.typeRoom << endl;
	os << "Звідки: " << p.typetransport << endl;
	
	return os;
}
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
		typetransport = "Авіа";
		t->SetInfo();
		m.SaveToFile();
	
		break;
	case 2:
		t = new Avtobus;
		typetransport = "Автобус";
		t->SetInfo();
		Transport::SaveToFile();
	
		break;
	case 3:
		t = new Train;
		typetransport = "Поїзд";
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
	cout << "Транспорт: " << typetransport<< endl;
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
