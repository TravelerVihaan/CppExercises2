#pragma once
#include "personel.h"

class pracownik : public personel
{
	double godziny;
	double stawka;
public:
	virtual double pensja();
	double getgodziny() { return godziny; };
	double getstawka() { return stawka; };
	pracownik();
	pracownik(double g, double s);
	static int liczbapracownikow;
	virtual ~pracownik();
};

