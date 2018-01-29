#include <iostream>

using namespace std;

int main()
{
    const int szesc = 6;
    const int *wsk_c = &szesc;
    int * wsk_norm;

    wsk_norm = const_cast<int*>(wsk_c);

    cout << *wsk_norm;

    return 0;
}
