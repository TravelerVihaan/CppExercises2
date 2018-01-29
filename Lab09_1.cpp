#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <stddef.h>

using namespace std;

class Figura{
protected:
    double s;
public:
    static size_t alloc; //ile razy by³a dynamicznie alokowana pamiêæ dla //obiektów klas pochodnych
    Figura(){s=0;};
    virtual void area(){
        s=0*0;
    }
    virtual void Disp(){
        cout << "s = 0 \n";
    }
    virtual ~Figura(){
    }
};

size_t Figura::alloc = 0;

class Circle : public Figura{
double r;
const double PI;
public:
    Circle() : r(0) , PI(3.14159236) {};
    Circle(double rr) : r(rr), PI(3.14159236) {};
    void Disp(){
        cout << "Circle s = " << s << "\n";
    }
    void area();
    //~Circle();
};

void Circle::area(){
    s=PI*r*r;
};

class Triangle : public Figura{
double a,h;
public:
    Triangle(): a(0) , h(0) {};
    Triangle(double aa, double hh) : a(aa), h(hh){};
    void Disp(){
        cout << "Triangle s = " << s << "\n";
    };
    void area();
    //~Triangle();
};

void Triangle::area(){
    s=(a*h)/2;
}

class Rectangle : public Figura{
    double *dat;
public:
    Rectangle(){
        dat = NULL;
    }
    Rectangle(double a, double b){
        dat = new double[2];
        dat[0] = a;
        dat[1] = b;
        Figura::alloc++;
    }
    void Disp(){
        cout << "Rectangle s = " << s << "\n";
    }
    ~Rectangle(){
        delete [] dat;
        dat = NULL;
        cout << "alloc: " << alloc << "\n";
        Figura::alloc--;
    }
};


int main(){
    Figura *ptr = NULL, *ptr_rect = NULL;

    ptr_rect = new Rectangle(2,3);

    Circle cl(2), cl1(3);
    Triangle tr(2, 4);

    srand(time(NULL));

    for(int it=0; it<10; ++it){
        int ind = rand()%4;
        switch(ind){
            case 0: ptr = &cl;
                break;
            case 1: ptr = &cl1;
                break;
            case 2: ptr = &tr;
                break;
            case 3: ptr = ptr_rect;
                break;
        };
        ptr->area();
        ptr->Disp();
    }

    delete ptr_rect;
    ptr_rect = NULL;

    cout << Figura::alloc << "\n";

    if(Figura::alloc)
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << "error: leak of memory\n";

    system("pause");
    return 0;

};
