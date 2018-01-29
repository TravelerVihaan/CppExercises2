#pragma once
#include "pracownik.h"

class sprzedawca : public pracownik
{
	double procent;
	int sprzedaz;
public:
	sprzedawca();
	double dodatek();
	virtual double pensja();
	virtual ~sprzedawca();
};

