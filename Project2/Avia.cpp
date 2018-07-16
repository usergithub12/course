#include "Avia.h"



Avia::Avia()
{
}

void Avia::ShowInfo()
{
	Transport::ShowInfo();
	cout << "Класс: " << tickettype << endl;

}

void Avia::SetInfo()
{
	Transport::SetInfo();

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

void Avia::SaveToFile()
{
	Transport::SaveToFile();
	ofstream out("tour.txt", ios_base::app);


	out << tickettype << ':';

	out.close();

}






Avia::~Avia()
{
}
