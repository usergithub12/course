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
	
	int amountofTourists;
public:
	Transport();
	virtual void ShowInfo();
	virtual void SetInfo();
	virtual void SaveToFile();

	~Transport();
};

