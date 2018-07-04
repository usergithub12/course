#include "Country.h"



Country::Country()
{
}

void Country::InitCountry()
{
	ifstream in("countries.txt");
	
	//while(!in.eof())
		for (size_t i = 0; i < 144; i++)
		{
		//in >> _nameofCountry;
			getline(in,_nameofCountry[i]);
		}
		for (size_t i = 0; i < 144; i++)
		{
			cout << _nameofCountry[i]<< "\n";
		}
	in.close();
}


Country::~Country()
{
}

ostream & operator<<(ostream & os, Country c)
{
	
	os << c._nameofCountry << endl;
	return os;
}
