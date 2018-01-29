#pragma once
#include <string>

using namespace std;

class personel
{
	string nazwisko;
	int biuro;
public:
	personel();
	virtual double pensja() = 0;
	int getbiuro() { return biuro; };
	virtual ~personel();
};

