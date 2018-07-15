#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Transport
{
protected:
	string start;
	string end;
	
	int amountofTourists;
public:
	Transport();
	virtual void ShowInfo();
	virtual void SetInfo();
	virtual void SaveToFile();

	~Transport();
};

