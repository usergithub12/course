#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "Transport.h"
#include <conio.h>
using namespace std;

class Avia:public Transport
{
	string tickettype;

	// + в одну сторону чи туда і назад

public:
	Avia();
	virtual void ShowInfo();
	virtual void SetInfo();
		
	~Avia();
};

