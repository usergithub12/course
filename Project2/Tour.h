#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tour
{
	string _way;
	string _startplace;
	string _endplace;
	int amountOftourist;
	int amountOfseats;
	string price;
	string dateStart;
	string dateEnd;

public:
	Tour();
	friend ostream &operator << (ostream&os, Tour p);
	friend istream &operator >> (istream&is, Tour p);

	~Tour();
};

