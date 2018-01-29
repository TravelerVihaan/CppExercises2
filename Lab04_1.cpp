#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Prostokat{
private:
    float dlugosc;
    float szerokosc;
    int id;
public:
    Prostokat();
    Prostokat(float dl, float szer);
    friend void Czy_Kwadrat(Prostokat &);
};

Prostokat::Prostokat(){
    dlugosc = 5;
    szerokosc = 5;
}

Prostokat::Prostokat(float dl, float szer){
    dlugosc = dl;
    szerokosc = szer;
}

void Czy_Kwadrat(Prostokat & Pr){
    if(Pr.dlugosc==Pr.szerokosc){
        cout << "Ten prostokat jest kwadratem \n";
    }else{
        cout << "Ten prostokat nie jest kwadratem \n";
    }
}

int main(){

    cout << "Prostokat z konstruktora bezparametrowego \n";
    Prostokat P1;
    Czy_Kwadrat(P1);
    cout << "Prostokat z konstruktora parametrowego (3,4) \n";
    Prostokat P2(3,4);
    Czy_Kwadrat(P2);

return 0;
};
