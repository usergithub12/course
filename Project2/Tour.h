#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tour
{
	string _way;
	string _start;
	string _end;
	int amountOftourist;
	int amountOfseats;
	string price;
	string dateStart;
	string dateEnd;

public:
	Tour();
	~Tour();
};

