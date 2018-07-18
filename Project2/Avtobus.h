#pragma once
#include "Transport.h"
class Avtobus: public Transport
{
public:
	Avtobus();
	virtual void ShowInfo();
	virtual void SetInfo();
	virtual  int GetPrice();
	~Avtobus();
};

