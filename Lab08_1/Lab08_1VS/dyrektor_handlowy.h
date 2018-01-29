#pragma once
#include "sprzedawca.h";
#include "dyrektor.h";

class dyrektor_handlowy : public dyrektor, public sprzedawca
{
public:
	dyrektor_handlowy();
	double pensja();
	~dyrektor_handlowy();
};

