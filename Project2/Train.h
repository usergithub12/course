#pragma once
#include "Transport.h"
#include  <fstream>
class Train :public Transport
{
	string tickettype;
public:
	Train();
	virtual void ShowInfo();
	virtual void SetInfo();
	 void SaveToFile();
	~Train();
};

