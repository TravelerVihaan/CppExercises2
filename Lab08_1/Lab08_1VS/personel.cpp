#include "stdafx.h"
#include "personel.h"
#include <string>

using namespace std;

personel::personel()
{
	nazwisko = "Nowak";
	biuro = 101;
}

personel::~personel()
{
	printf("Personel destruktor\n");
}
