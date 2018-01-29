// ConsoleApplication1.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include <iostream>

using namespace std;

void Dodawanie() {
    int a,b;
    cout << "Podaj pierwsza liczbe \n";
    cin >> a;
    cout << "Podaj druga liczbe \n";
    cin >> b;
    int w = a+b;
    cout << a << " + " << b << " = " << w << "\n";
};

void Odejmowanie() {
    int a,b;
    cout << "Podaj pierwsza liczbe \n";
    cin >> a;
    cout << "Podaj druga liczbe \n";
    cin >> b;
    int w = a-b;
    cout << a << " - " << b << " = " << w << "\n";
};

void Mnozenie() {
    int a,b;
    cout << "Podaj pierwsza liczbe \n";
    cin >> a;
    cout << "Podaj druga liczbe \n";
    cin >> b;
    int w = a*b;
    cout << a << " * " << b << " = " << w << "\n";
};

void Dzielenie() {
    int a,b;
    cout << "Podaj pierwsza liczbe \n";
    cin >> a;
    cout << "Podaj druga liczbe \n";
    cin >> b;
    int w = a/b;
    cout << a << " / " << b << " = " << w << "\n";
};

int main()
{
	char a;

	cout << "Wybierz opcjê kalkulatora \n 1 - Dodawanie \n 2 - Odejmowanie \n 3 - Mnozenie \n 4 - Dzielenie \n e - Zamkniecie programu \n";
	cin >> a;

	switch (a) {
	case '1':
		Dodawanie();
		break;
	case '2':
		Odejmowanie();
		break;
	case '3':
		Mnozenie();
		break;
	case '4':
		Dzielenie();
		break;
	case 'e':
		cout << "Zamykam program\n";
		break;
	}

    return 0;
}

