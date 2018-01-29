#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(){
        x=0;
        y=0;
    }
    Point(int xx, int yy){
        x=xx;
        y=yy;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    void SetX(int xx){
        this->x=xx;
    }
    void SetY(int yy){
        this->y=yy;
    }
};

class Triangle{
private:
    Point A;
    Point B;
    Point C;
public:
    Triangle(){
        Point A();
        Point B();
        Point C();
    }
    Triangle(Point AA, Point BB, Point CC){
        this->A.SetX(AA.GetX());
        this->A.SetY(AA.GetY());
        this->B.SetX(BB.GetX());
        this->B.SetY(BB.GetY());
        this->C.SetX(CC.GetX());
        this->C.SetY(CC.GetY());
    }
    void Print(){
        cout << "Punkt A: x= " << A.GetX() << " ,y= " << A.GetY() << "\n";
        cout << "Punkt B: x= " << B.GetX() << " ,y= " << B.GetY() << "\n";
        cout << "Punkt C: x= " << C.GetX() << " ,y= " << C.GetY() << "\n";
    }
};

int main(){

    Point A1(2,2);
    Point B1(6,4);
    Point C1(4,3);
    Triangle T1(A1,B1,C1);
    T1.Print();

return 0;
};
