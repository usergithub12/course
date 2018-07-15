#include "Transport.h"



Transport::Transport()
{
}

void Transport::ShowInfo()
{

	cout << "Дата виїзду : "  << start << endl;
	cout << "Дата повернення: "  << end << endl;
	cout << "Кількість туристів: "  <<  amountofTourists<< endl;
}

void Transport::SetInfo()
{
	cout << "Дата виїзду : "  << endl;
	cin >> start;
	cout << "Дата повернення: "  << endl;
	cin >> end;
	cout << "Введіть кількість туристів: " << endl;
	cin >> amountofTourists;
	
}

void Transport::SaveToFile()
{

	ofstream out("tour.txt",ios_base::app);


	out << start << ':';
	out << end << ':';

	out << amountofTourists << ':';

	//out << tickettype;
	out.close();

}


Transport::~Transport()
{
}
