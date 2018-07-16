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
protected:
	string _nameofCountry;
	string _kurort;
public:
	Country();
	void InitCountry();
	friend ostream& operator <<(ostream& os, Country c);
	void InitKurort();
	void SetPos(int x, int y);
	virtual void ShowInfo();
	string & GetName();

	~Country();
};

