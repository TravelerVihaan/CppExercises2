#include "stdafx.h"
#include <iostream>
#include "pracownik.h"
#include "dyrektor.h"
#include "dyrektor_handlowy.h"
#include "personel.h"
#include "sprzedawca.h"

int pracownik::liczbapracownikow = 0;


using namespace std;

int main(){
	
	personel *p = new pracownik();
	personel *s = new sprzedawca();
	personel *d = new dyrektor();

	dyrektor *dh = new dyrektor_handlowy();

	cout << p->pensja() << "\n";
	cout << s->pensja() << "\n";
	cout << d->pensja() << "\n";
	cout << dh->pensja() << "\n";

	cout << "pracownik \n";
	delete p;
	cout << "sprzedawca \n";
	delete s;
	cout << "dyrektor \n";
	delete d;
	cout << "Handlowy \n";
	delete dh;

	system("PAUSE");
	return 0;
}

