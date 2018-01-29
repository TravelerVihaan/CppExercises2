// Lab01.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "Witaj Lukasz Biel z grupy 21a\n";
	cout << "Podaj rok urodzenia\n";
	int rok;
	cin >> rok;
	int wynik;
	wynik = 2016 - rok;
	cout << "Masz " << wynik << " lat\n";

	int liczba;
	double liczba_d;

	cin >> liczba;
	cin >> liczba_d;
	string zdanie;
	cin.sync();
	getline( cin, zdanie );
	cout << liczba << endl;
	cout << liczba_d << endl;
	cout << zdanie << endl;

    return 0;
}

