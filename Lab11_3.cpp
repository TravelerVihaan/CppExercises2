#include <iostream>

using namespace std;


class LZesp{
protected:
    double re;
    double im;
public:
    LZesp(double are=0, double aim=0) { re = are; im = aim; }
    LZesp(const LZesp &z) {
    re = z.getRe();
    im = z.getIm();
    }
    double getRe() const { return re; }
    double getIm() const { return im; }
    void set(double are, double aim){
        re = are;
        im = aim;
    }
    LZesp operator+(const LZesp &l) const {
        return LZesp(re + l.getRe(), im + l.getIm());
    }
    LZesp& operator=(const LZesp &l){
        if (&l != this){
            re = l.getRe();
            im = l.getIm();
        }
        return *this;
    }
    // OPERATOR ODEJMOWANIA
    LZesp operator-(const LZesp &l){
        re=re-l.getRe();
        im=im-l.getIm();
        return *this;
    }
    // OPERATOR MNOZENIA
    LZesp operator*(const LZesp &l){
        int rre=0;
        int imm=0;
        rre=(re*l.getRe())-(im*l.getIm());
        imm=(re*l.getIm())+(l.getRe()*im);
    }
    // POROWNIANIE -STWIERDZENIE ROWNOSCI
    bool operator==(const LZesp &z){
        if((re==z.getRe())&&(im==z.getIm()))
            return true;
        else
            return false;
    }
    // POROWNIANIE -STWIERDZENIE ROZNOSCI
    bool operator!=(const LZesp &z){
        if((re!=z.getRe())||(im!=z.getIm()))
            return true;
        else
            return false;
    }
    const double & operator[](int idx){
        if(idx==0){
            return this->getRe();
        }else{
            return this->getIm();
        }
    }
    // FUNKCJA ZAPRZYJAZNIONA DO WYPISANIA WARTOSCI
    friend ostream& operator<<(ostream&, const LZesp&); // funkcja zaprzyjaŸniona
    // FUNKCJA DO WCZYTANIA WARTOSCI LICZBY ZESPOLONEJ
    friend istream& operator>> (istream&, LZesp&);
};

// FUNKCJA ZAPRZYJAZNIONA DO WYPISANIA LICZBY ZESPOLONEJ
    ostream& operator<<(ostream& out, const LZesp &a) {
            out << "(" << a.getRe() << ", " << a.getIm() << ")" << endl;
        return out;
    }
    // FUNKCJA DO WCZYTANIA WARTOSCI LICZBY ZESPOLONEJ
    istream& operator>> (istream &in, LZesp& lin){
        in >> lin.re >> lin.im ;
   return in;
}


int main(void){
    LZesp l1(2,3), l2(3,4), l3;
    l3 = l1 + l2; // tak naprawdê: // l3.operator=( l1.operator+(l2) );

    cout << l1 << " + " << l2 << " = " << l3 << endl;
    LZesp l4, l5;
    cin >> l4;
    cin >> l5;
    cout << l4 << " * " << l5 << " = " << l4*l5 << endl;
    cout << l4 << " - " << l5 << " = " << l4-l5 << endl;
    if (l4 == l5)
        cout << l4 << " jest rowna " << l5 << endl;
    else
        cout << l4 << " nie jest rowna " << l5 << endl;
    if (l4 != l5)
        cout << l4 << " rozni sie od " << l5 << endl;
    else
        cout << l4 << " nie rozni sie od " << l5 << endl;
return 0;
}
