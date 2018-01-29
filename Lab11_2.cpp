#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float pln,gbp=5.0405,eur=4.3658,usd=4.1005,chf=4.0705,cad=3.0746,dkk=0.5872,jpy=3.5632;


    cout<<"KANTOR\n\n\n\n"<<endl;

    do{

    cout << "Podaj ile masz zlotowek :" << endl;
    cin>>pln;




    cout<<setfill('-');
    cout<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<endl;
    cout<<setfill(' ');
    cout<<"|"<<setw(10)<<"WALUTA"<<setw(10)<<"|"<<setw(10)<<"KRAJ"<<setw(10)<<"|"<<setw(10)<<"KWOTA"<<setw(10)<<"|"<<endl;
    cout<<setfill('-');
    cout<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<endl;
    cout<<setfill(' ');
    cout<<"|"<<"UNIA"<<setw(16)<<"|"<<setw(10)<<"EUR"<<setw(10)<<"|"<<setw(10)<<pln/eur<<setw(10)<<"|"<<endl;
    cout<<"|"<<"USA"<<setw(17)<<"|"<<setw(10)<<"USD"<<setw(10)<<"|"<<setw(10)<<pln/usd<<setw(10)<<"|"<<endl;
    cout<<"|"<<"W.BRYTANIA"<<setw(10)<<"|"<<setw(10)<<"GBP"<<setw(10)<<"|"<<setw(10)<<pln/gbp<<setw(10)<<"|"<<endl;
    cout<<"|"<<"SZWAJCARIA"<<setw(10)<<"|"<<setw(10)<<"CHF"<<setw(10)<<"|"<<setw(10)<<pln/chf<<setw(10)<<"|"<<endl;
    cout<<"|"<<"KANADA"<<setw(14)<<"|"<<setw(10)<<"CAD"<<setw(10)<<"|"<<setw(10)<<pln/cad<<setw(10)<<"|"<<endl;
    cout<<"|"<<"DANIA"<<setw(15)<<"|"<<setw(10)<<"DKK"<<setw(10)<<"|"<<setw(10)<<pln/dkk<<setw(10)<<"|"<<endl;
    cout<<"|"<<"JAPONIA"<<setw(13)<<"|"<<setw(10)<<"JKY"<<setw(10)<<"|"<<setw(10)<<pln/jpy<<setw(10)<<"|"<<endl;
    cout<<setfill('-');
    cout<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<setw(20)<<"|"<<endl;
    }while(pln!=0);
    return 0;
}
