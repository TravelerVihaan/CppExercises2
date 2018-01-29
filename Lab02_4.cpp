#include <iostream>
using namespace std;

//#define MAX_SIZE 100

//declaration of class CStack
class CStack
{
	//private members
	int max_size;
	// ZADANIE - Definicja dynamicznej tablicy
	double * tab;
	//double arr_stack[MAX_SIZE];  //tablica elementow
	int noitems;        //aktualna ilosc elementow w steku
public:
	CStack();           //Konstruktor
	CStack(double msize); // ZADANIE - konstruktor sparametryzowany
	void push(double mem);
	double pop();
	int getnumb();
	// ZADANIE - Destruktor ze zwalnianiem pamieci po tablicy
	~CStack(){
        delete [] tab;
        tab = NULL
    }
};

CStack::CStack(){
    noitems = 0;
    max_size = 20;
    tab = NULL;
};

//definicje funkcji-metod klasy CStack
CStack::CStack(double msize)
{
	//konstruktor alokuje pamiec
	noitems = 0;
	// ZADANIE - Maksymalny rozmiar stosu okreslany w konstruktorze
	max_size = msize;
	// ZADANIE - Tablica poki co jest pusta
    tab = NULL;

}


void CStack::push(double mem)
{
	//umieszcza nowy element do steku
	if(noitems >= max_size)
	{
		cout << "stack jest wypelniony\n";
		return;
	}

	if(tab==NULL){
        tab = new double[1];
        tab[0] = mem;
        noitems = 1;
	}else{
        double *tab_nowa = new double[noitems+1];
        for(int i=0;i<noitems+1;i++){
            tab_nowa[i] = tab[i];
        }
        tab_nowa[noitems] = mem;
        tab = tab_nowa;
        noitems++;
        }
}

double CStack::pop()
{
	//dostaje z steku ostatnij element
	if(noitems <= 0)
	{
		cout << "stack jest pusty\n";
		return 0;
	}

	noitems--;
	return tab[noitems];
}

int CStack::getnumb()
{
	return noitems;
}


int main()
{
	int op = 0;
	double var;
	CStack st(5);  //tablica obiektow typu CStack

	while(op != 3)
	{
		cout << "kod dzialania? (0 - push, 1 - pop, 2 - ilosc elementow, 3 - skacz)\n";
		cin >> op;

		switch(op)
		{
		case 0:  //push
			cout << "wprowadz wartosc\n";
			cin >> var;
			st.push(var);
			break;

		case 1:  //pop
			var = st.pop();
			cout << "  wartosc var = " << var << "\n";
			break;
		case 2:
			cout << " pozostalo " << st.getnumb() << " elementow\n";
			break;
		case 3:
			break;
		default:
			cout << "bledne dzialanie\n";
		};
	}
	return 0;
}

//#undef MAX_SIZE
