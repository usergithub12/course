#pragma once
#include <iostream>
#include <string>
#include "Hotel.h"
#include "Transport.h"
#include "Avia.h"
#include "Avtobus.h"
#include "Train.h"
#include "Country.h"
#include <fstream>
using namespace std;

	
class Tour:public Transport,public Hotel,public Country
{
protected:
	Transport * t= new Transport;
	string typetransport;
	int price = 10000;

public:
	Tour();
	friend ostream &operator << (ostream&os, Tour p);
	
	virtual void SetInfo();
	virtual void ShowInfo();
	virtual	void SaveToFile();
	void ReadFromFile();
	void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

//int GetPrice();
void HotTour();
	~Tour();
};

