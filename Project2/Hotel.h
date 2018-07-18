#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Hotel
{
protected:
	int amountOfstars;
	string typeRoom;
	int _price=0;
	
	

public:
	Hotel();
	virtual void SetInfo();
	virtual void ShowInfo();
	virtual void SaveToFile();
	virtual int GetPrice();
	//virtual int GetStars();
	~Hotel();
};

