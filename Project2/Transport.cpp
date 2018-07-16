#include "Transport.h"



Transport::Transport()
{
}

void Transport::ShowInfo()
{

	cout << "���� ����� : "  << dstart << "/"<< mstart << "/" << ystart <<endl;
	cout << "���� ����������: "  << dend << "/" <<mend << "/" << yend << endl;
	cout << "ʳ������ �������: "  <<  amountofTourists<< endl;
}

void Transport::SetInfo()
{
	cout << "���� ����� : "  << endl;
	while (true)
	{
		cout << "����: " << endl;
		cin >> dstart;
		int i;
		try
		{
			if (dstart > 31 || dstart < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� ����!" << endl;
		}
	}
	while (true)
	{
		cout << "̳����: " << endl;
		cin >> mstart;
		try
		{
			if (mstart > 12 || mstart < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� �����!" << endl;
		}
	}
	while (true)
	{
		cout << "г�: " << endl;
		cin >> ystart;
		try
		{
			if (ystart < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� ��!" << endl;
		}
	}
	cout << "���� ����������: "  << endl;

	while (true)
	{
		cout << "����: " << endl;
		cin >> dend;
		try
		{
			if (dend > 31 || dend < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� ����!" << endl;
		}
	}
	while (true)
	{
		cout << "̳����: " << endl;
		cin >> mend;
		try
		{
			if (mend > 12 || mend < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� �����!" << endl;
		}
	}
	while (true)
	{
		cout << "г�: " << endl;
		cin >> yend;
		try
		{
			if (yend < 0)
			{
				throw 1;
			}
			else
				break;
		}
		catch (int i)//���� ���������� ����� 123
		{
			cout << "�� ��������� �������� ��!" << endl;
		}
	}
	cout << "������ ������� �������: " << endl;
	cin >> amountofTourists;
	
}

void Transport::SaveToFile()
{

	ofstream out("tour.txt",ios_base::app);
	
	out << dstart << mstart << ystart << ':';
	out << dend  << mend << yend<< ':';
	out << amountofTourists << ':';

	//out << tickettype;
	out.close();

}


Transport::~Transport()
{
}
