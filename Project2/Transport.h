#pragma once
#include <iostream>
#include <string>
using namespace std;
class Transport
{
protected:
	string start;
	string end;
	/*string sdata;
	string edata;*/
	int amountofTourists;
public:
	Transport();
	virtual void ShowInfo();
	virtual void SetInfo();
	~Transport();
};

