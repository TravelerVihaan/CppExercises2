#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"WIZYTOWKA"<<endl;
    string e=" Lukasz Biel";
    string w="e-mail : l.biel@gmail.com ";
    string t="       tel:124163434 ";

 cout<<"*****************************************"<<endl;
 cout<<"*\t\t"<<e<< setw( 13 )<<"*" <<endl;
 cout<<"*\t"<<setw( 5 )<<w<<setw(7)<<"*"<<endl;
 cout<<"*\t"<<t<< setw( 12 )<<"*" <<endl;
 cout<<"*****************************************"<<endl;


}
