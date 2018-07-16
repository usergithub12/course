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


	//int price=10000;
class Tour:public Transport,public Hotel,public Country
{
protected:
	Transport * t= new Transport;
	string typetransport;
	

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
void HotTour();
	~Tour();
};

