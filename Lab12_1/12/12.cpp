#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator> 
using namespace std;

void display_vector(const vector<double> &v)
{
	copy(v.begin(), v.end(),
		ostream_iterator<double>(cout, " "));
}

void oblicz_srednia(const vector<double> &v, float _howMany) {
	double temp;
	for (int i = 0; i < (v.size() / _howMany); i++) {
		cout << endl << i+1 << " ";
		temp = 0;
		for (int j = 0; j < _howMany; j++) {
			temp += v[i*_howMany + j];
		}
		cout << temp / _howMany;
	}
}

int main() {
	ifstream plik;
	plik.open("kolokwium.txt");
	string line;
	vector <double> sums;
	float howMany = 0;
	if (!getline(plik, line))
		return 0;
	while (!plik.eof()){
		istringstream stream(line);
		string name, secondName, hehe;
		char temp;

		stream >> name;
		stream >> secondName;
		cout << name;
		cout << " " << secondName;
		double points;
		double sum = 0;
		howMany = 0;
		while (stream >> points) {
			howMany++;
			sum += points;
			sums.push_back(points);
		}
		cout << " " << sum;
		getline(plik, line);
		cout << endl;
	}
	//display_vector(sums);
	oblicz_srednia(sums, howMany);
	cout << endl;
	return 0;

}