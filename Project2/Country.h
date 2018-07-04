#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Country
{
	string _nameofCountry[144];
public:
	Country();
	void InitCountry();
	friend ostream& operator <<(ostream& os, Country c);
	~Country();
};

