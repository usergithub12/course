#include "Transport.h"



Transport::Transport()
{
}

void Transport::ShowInfo()
{

	cout << "���� ����� : "  << start << endl;
	cout << "���� ����������: "  << end << endl;
	cout << "ʳ������ �������: "  <<  amountofTourists<< endl;
}

void Transport::SetInfo()
{
	cout << "���� ����� : "  << endl;
	cin >> start;
	cout << "���� ����������: "  << endl;
	cin >> end;
	cout << "������ ������� �������: " << endl;
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
