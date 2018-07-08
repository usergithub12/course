#pragma once
#include "Transport.h"
class Train :public Transport
{
	string tickettype;
public:
	Train();
	virtual void ShowInfo();
	virtual void SetInfo();
	~Train();
};

