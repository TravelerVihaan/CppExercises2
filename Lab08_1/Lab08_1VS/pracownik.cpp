#include "stdafx.h"
#include "pracownik.h"
#include "personel.h"


pracownik::pracownik()
{
	godziny = 100;
	stawka = 10;
	liczbapracownikow++;
}

pracownik::pracownik(double g, double s)
{
	godziny = g;
	stawka = s;
	liczbapracownikow++;
}

double pracownik::pensja() {
	return (godziny*stawka);
}

pracownik::~pracownik()
{
	liczbapracownikow--;
	printf("Pracownik destruktor\n");
}
