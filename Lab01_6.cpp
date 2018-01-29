// Lab01.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//


#include <iostream>
#define N 5

using namespace std;

int main()
{

	double tab[N];

	for (int i = 0;i < N;i++) {
		cin >> tab[i];
	}

	cout << "Pozycja\tWartosc\n";
	for (int i = 0;i < N;i++) {
		cout << i+1 << "\t" << tab[i] << endl;
	}


	return 0;
}
