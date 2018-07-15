#pragma once
#include <iostream>
#include <string>
#include "Hotel.h"
#include "Transport.h"
#include "Avia.h"
#include "Avtobus.h"
#include"Train.h"
#include "Country.h"
#include <fstream>
using namespace std;

class Tour:public Transport,public Hotel,public Country
{
protected:
	Transport * t;
	string typetransport;
	Avia m;

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
	friend ostream &operator << (ostream&os, Tour p);
	//friend istream &operator >> (istream&is, Tour p);
	virtual void SetInfo();
	virtual void ShowInfo();
	void SaveToFile();
	~Tour();
};

