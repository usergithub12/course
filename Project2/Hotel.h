#pragma once
#include <iostream>
#include <string>
using namespace std;

class Hotel
{
	int amountOfstars;
	string typeRoom;
	//econom
	//standart
	//luxe
	

public:
	Hotel();
	virtual void SetInfo();
	virtual void ShowInfo();
	~Hotel();
};

