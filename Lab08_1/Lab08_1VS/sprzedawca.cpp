#include "stdafx.h"
#include "sprzedawca.h"
#include "pracownik.h"


sprzedawca::sprzedawca()
{
	procent = 5;
	sprzedaz = 500;
}

double sprzedawca::dodatek()
{
	return (procent*sprzedaz);
}

double sprzedawca::pensja()
{	
	return ((getgodziny()*getstawka()) + dodatek());
}

sprzedawca::~sprzedawca()
{
	printf("Sprzedawca destruktor\n");
}
