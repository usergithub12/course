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
	cout << "������ ���� �������: " << endl;
	cin >> start;
	cout << "������ ���� ��������: " << endl;
	cin >> end;
	cout << "������ ������� �������: " << endl;
	cin >> amountofTourists;
	
}


Transport::~Transport()
{
}
