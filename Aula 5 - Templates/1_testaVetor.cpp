#include <iostream>
using namespace std;

#include "1_vetor.h"

int main() {
	Vetor v;
	cout << v << endl;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v << endl;

	Vetor w;
	w[0]=1;
	w[1]=1;
	w[2]=5;

	cout << w << endl;
	cout << (v+w) << endl;

	Vetor w2 = w;
	cout << (w2==w) << endl;
	cout << (w2!=w) << endl;
	cout << (v==w) << endl;
	cout << (v!=w) << endl;
}