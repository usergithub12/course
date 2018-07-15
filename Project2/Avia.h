#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "Transport.h"
#include <conio.h>
#include <fstream>
using namespace std;

class Avia:public Transport
{
	string tickettype;

	// + в одну сторону чи туда і назад

public:
	Avia();
	virtual void ShowInfo();
	virtual void SetInfo();
	virtual void SaveToFile();
	~Avia();
};

