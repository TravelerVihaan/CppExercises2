// Lab01.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//


#include <iostream>
#define N 3

using namespace std;

int main()
{

	int tab[N];

	for (int i = 0;i < N;i++) {
		cin >> tab[i];
	}

	//wypisanie klasyczne
	for (int i = 0;i < N;i++) {
		cout << tab[i] << endl;
	}

	//wypisanie odwrotne
	for (int i = N - 1;i >= 0;i--) {
		cout << tab[i] << endl;
	}




}
