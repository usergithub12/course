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
	
	

public:
	Hotel();
	virtual void SetInfo();
	virtual void ShowInfo();
	virtual void SaveToFile();
	~Hotel();
};

