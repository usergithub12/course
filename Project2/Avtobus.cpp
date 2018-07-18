#include "Avtobus.h"



Avtobus::Avtobus()
{
	_price = 0;
}
void Avtobus::ShowInfo()
{
	Transport::ShowInfo();
}

void Avtobus::SetInfo()
{
	Transport::SetInfo();
	_price += 300;
}
int Avtobus::GetPrice()
{
	return _price;
}


Avtobus::~Avtobus()
{
}
