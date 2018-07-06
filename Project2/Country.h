#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
using namespace std;

class Country
{
	string _nameofCountry;
public:
	Country();
	void InitCountry();
	friend ostream& operator <<(ostream& os, Country c);

	void SetPos(int x, int y);

	string & GetName();
		
	~Country();
};

