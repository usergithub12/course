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
	in.seekg(0);
	int choice=0;
	cin >> choice;
	for (size_t i = 0; i < choice; i++)
	{
		getline(in, _nameofCountry);
	}
	cout << _nameofCountry;
			
	in.close();
}


void Country::InitKurort()
{
	system("cls");
	ifstream in("base.txt");
	
	
	while (!in.eof()) {
		    getline(in, _kurort, '\n');
	        getline(in, _kurort, ':');
			if(_nameofCountry==_kurort)
			{
			getline(in, _kurort, ';');
			
			cout << _kurort << endl;
			break;
		    }
			else
			{
				getline(in, _kurort, ';');
			}
			//break;
			//in.seekg(0);
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

void Country::CountryMenu()
{
	int choice=0;
	while (true)
	{
		system("cls");
		cin >> choice;
		switch (choice)
		{
		case 1: {	break; }
		case 2: {	break; }
		case 3: {	break; }
		case 4: {	break; }
		case 5: {	break; }
		case 6: {	break; }
		case 7: {	break; }
		case 8: {	break; }
		case 9: {	break; }
		case 10: {	break; }
		case 11: {	break; }
		case 12: {	break; }
		case 13: {	break; }
		case 14: {	break; }
		case 15: {	break; }
		case 16: {	break; }
		case 17: {	break; }
		case 18: {	break; }
		case 19: {	break; }
		case 21: {	break; }
		case 22: {	break; }
		case 23: {	break; }
		case 24: {	break; }
		case 25: {	break; }
		case 26: {	break; }
		case 27: {	break; }
		case 28: {	break; }
		case 29: {	break; }
		case 30: {	break; }
		}
	}
}




Country::~Country()
{
}

ostream & operator<<(ostream & os, Country c)
{
	
	os << c._nameofCountry << endl;
	return os;
}
