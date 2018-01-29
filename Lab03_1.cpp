#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Kolo{
private:
    float promien;
    int kolor;
public:
    Kolo();
    Kolo(float prom, int kol);
    float Oblicz_Pole();
    void Ustaw_Promien(float new_prom);
    void Ustaw_Kolor(int new_col);
    friend void Porownaj_Kola(Kolo& , Kolo& );

};

float Kolo::Oblicz_Pole(){
    float pole;
    pole = pow(M_PI*promien,2);
    return pole;
}

void Kolo::Ustaw_Kolor(int new_col){
    kolor = new_col;
}

void Kolo::Ustaw_Promien(float new_prom){
    promien = new_prom;
}

void Porownaj_Kola(Kolo& A, Kolo& B){
    if((A.kolor==B.kolor)&&(A.Oblicz_Pole()==B.Oblicz_Pole())){
        cout << "Kola sa identyczne \n";
    }else{
        cout <<"Kola nie sa jednakowe \n";
    }
}

Kolo::Kolo(){
    promien = 5;
    kolor = 2;
}

Kolo::Kolo(float prom, int kol){
    promien = prom;
    kolor = kol;
}

int main(){

    Kolo KoloA;
    Kolo KoloB(5,3);
    Porownaj_Kola(KoloA, KoloB);
    KoloA.Ustaw_Kolor(3);
    Porownaj_Kola(KoloA, KoloB);
    KoloB.Ustaw_Promien(7);
    Porownaj_Kola(KoloA, KoloB);


return 0;
};
