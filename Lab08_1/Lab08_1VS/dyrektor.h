#pragma once
#include "personel.h"

class dyrektor : virtual public personel
{
	int ilepracownikow;
	const int placa = 10000;
public:
	dyrektor();
	virtual double pensja();
	int getile();
	virtual ~dyrektor();
};

