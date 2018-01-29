#include "stdafx.h"
#include "dyrektor.h"
#include "pracownik.h"


dyrektor::dyrektor()
{
	ilepracownikow = pracownik::liczbapracownikow;
}

double dyrektor::pensja()
{
	double pen = placa + (1500 * pracownik::liczbapracownikow);
	return pen;
}

int dyrektor::getile()
{
	return ilepracownikow;
}


dyrektor::~dyrektor()
{
	printf("Dyrektor destruktor\n");
}
