#include "Transport.h"



Transport::Transport()
{
}

void Transport::ShowInfo()
{

	cout << "Дата виїзду : "  << dstart << "/"<< mstart << "/" << ystart <<endl;
	cout << "Дата повернення: "  << dend << "/" <<mend << "/" << yend << endl;
	cout << "Кількість туристів: "  <<  amountofTourists<< endl;
}

void Transport::SetInfo()
{
	cout << "Дата виїзду : "  << endl;
	while (true)
	{
		cout << "День: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений день!" << endl;
		}
	}
	while (true)
	{
		cout << "Місяць: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений місяць!" << endl;
		}
	}
	while (true)
	{
		cout << "Рік: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений рік!" << endl;
		}
	}
	cout << "Дата повернення: "  << endl;

	while (true)
	{
		cout << "День: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений день!" << endl;
		}
	}
	while (true)
	{
		cout << "Місяць: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений місяць!" << endl;
		}
	}
	while (true)
	{
		cout << "Рік: " << endl;
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
		catch (int i)//сюда передастся число 123
		{
			cout << "Не правильно введений рік!" << endl;
		}
	}
	cout << "Введіть кількість туристів: " << endl;
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
