#include "Avia.h"



Avia::Avia()
{
}

void Avia::ShowInfo()
{
	cout << "Дата виїзду : " << start << endl;
	cout << "Дата повернення" << end << endl;
	cout << "Кількість туристів: " << amountofTourists << endl;
	cout << "Класс: " << tickettype << endl;

}

void Avia::SetInfo()
{
	cout << "Введіть дату початку: " << endl;
	cin >> start;
	cout << "Введіть дату прибуття: " << endl;
	cin >> end;
	cout << "Введіть кількість туристів: " << endl;
	cin >> amountofTourists;

	int choice;
	cout << "Виберіть клас: " << endl;
	cout << "1 - Економ" << endl;
	cout << "2 - Бізнес" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		tickettype = "Економ";
		break;
	case 2:
		tickettype = "Бізнес";
		break;
	}

}




Avia::~Avia()
{
}
