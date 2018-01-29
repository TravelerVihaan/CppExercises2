#include "stdafx.h"
#include "dyrektor_handlowy.h"
#include "sprzedawca.h"
#include "dyrektor.h"


dyrektor_handlowy::dyrektor_handlowy()
{
}

double dyrektor_handlowy::pensja()
{
	double pen = dyrektor::pensja()*dodatek();
	return pen;
}


dyrektor_handlowy::~dyrektor_handlowy()
{
}
