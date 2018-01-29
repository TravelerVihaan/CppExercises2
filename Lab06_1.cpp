#include <iostream>

using namespace std;

// Prototyp funkcji

int liczbaSekund(int godziny, int minuty=0, int sekundy=0);    // Prototyp funkcji z domyœlnymi wartoœciami argumentów

// Funkcja g³ówna
int main()
{
    cout << liczbaSekund(1) << endl;        // informacja zad5.

    cout << liczbaSekund(1,0,4) << endl;      // infmacja zad6.

     cout << liczbaSekund(1, 10, 25) << endl;
      return 0;
}
// Definicja funkcji

int liczbaSekund(int godziny, int minuty, int sekundy)
{
    int suma = 0;
     suma = godziny * 60 * 60;
     suma += minuty * 60;
     suma += sekundy;

return sekundy;
}
