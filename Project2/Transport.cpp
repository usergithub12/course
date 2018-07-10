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
	cout << "Введіть дату початку: " << endl;
	cin >> start;
	cout << "Введіть дату прибуття: " << endl;
	cin >> end;
	cout << "Введіть кількість туристів: " << endl;
	cin >> amountofTourists;
	
}


Transport::~Transport()
{
}
