#include "Avtobus.h"



Avtobus::Avtobus()
{
}
void Avtobus::ShowInfo()
{
	cout << "Дата виїзду : " << start << endl;
	cout << "Дата повернення" << end << endl;
	cout << "Кількість туристів: " << amountofTourists << endl;


}

void Avtobus::SetInfo()
{
	cout << "Введіть дату початку: " << endl;
	cin >> start;
	cout << "Введіть дату прибуття: " << endl;
	cin >> end;
	cout << "Введіть кількість туристів: " << endl;
	cin >> amountofTourists;


}


Avtobus::~Avtobus()
{
}
