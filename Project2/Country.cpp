#include "Country.h"



Country::Country()
{
}

void Country::InitCountry()
{
	ifstream in("countries.txt");
	int x = 30;
	int y = 1;
			int x1=70;
			int y1=1;
			cout << "Enter country(1-142): " << endl;
	for (int i = 0; i < 142; i++)
	{
		getline(in, _nameofCountry);
	
			if (i < 50)
			{
		cout << i+1 << "."<< _nameofCountry<<endl;
	
			}
			if (i>49&&i<100)
			{
				SetPos(x, y);
				cout << i + 1 << "." << _nameofCountry << endl;
				y += 1;
			}
			if (i>99)
			{
				SetPos(x1, y1);
				cout << i + 1 << "." << _nameofCountry << endl;
				y1 += 1;
			}
			if (i == 141)
			{
				SetPos(0, y1 + 8);
			}
			
	}

	
	
			
	in.close();
}


void Country::SetPos(int x, int y)
{
		COORD c;
		c.X = x;
		c.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}

string & Country::GetName()
{
	return _nameofCountry;
	// TODO: вставьте здесь оператор return
}




Country::~Country()
{
}

ostream & operator<<(ostream & os, Country c)
{
	
	os << c._nameofCountry << endl;
	return os;
}
