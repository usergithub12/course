#pragma once
#include <iostream>
#include <string>
#include "Hotel.h"
#include "Transport.h"
#include "Avia.h"
#include "Avtobus.h"
#include"Train.h"
#include "Country.h"
using namespace std;

class Tour:public Transport,public Hotel
{

protected:
	Transport * t;
	
	
	Country c;

	/*string _way;
	string _startplace;
	string _endplace;
	int amountOftourist;
	int amountOfseats;
	string price;
	string dateStart;
	string dateEnd;
*/
public:
	Tour();
	/*friend ostream &operator << (ostream&os, Tour p);
	friend istream &operator >> (istream&is, Tour p);*/
	virtual void SetInfo();
	virtual void ShowInfo();
	~Tour();
};

