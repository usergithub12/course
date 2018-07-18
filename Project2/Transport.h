#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Transport
{
protected:
	int dstart;
	int mstart;
	int ystart;
	int dend;
	int mend;
	int yend;
	
		int _price=0;

	int amountofTourists;
public:
	Transport();
	virtual void ShowInfo();
	virtual void SetInfo();
	virtual void SaveToFile();
	virtual int GetPrice();
	~Transport();
};

