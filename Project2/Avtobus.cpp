#include "Avtobus.h"



Avtobus::Avtobus()
{
}
void Avtobus::ShowInfo()
{
	cout << "���� ����� : " << start << endl;
	cout << "���� ����������" << end << endl;
	cout << "ʳ������ �������: " << amountofTourists << endl;


}

void Avtobus::SetInfo()
{
	cout << "������ ���� �������: " << endl;
	cin >> start;
	cout << "������ ���� ��������: " << endl;
	cin >> end;
	cout << "������ ������� �������: " << endl;
	cin >> amountofTourists;


}


Avtobus::~Avtobus()
{
}
