// Lab2.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include <iostream>

using namespace std;

class my_vol {
private:
	double a, b, c;
public:
	my_vol() {
		cin >> a;
		cin >> b;
		cin >> c;
	}
	double Volume();
	void Print_vol() {
		double Vol = Volume();
		cout << Vol << endl;
	}
};

double my_vol::Volume(){
	return (a*b*c);
}

int main(){
	my_vol bryla;
	bryla.Print_vol();
}

