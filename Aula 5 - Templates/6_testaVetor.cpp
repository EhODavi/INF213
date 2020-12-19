#include <iostream>
using namespace std;

#include "6_vetor.h"

int main() {
	Vetor<int> v(3);
	cout << v << endl;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v << endl;

	Vetor<int> w(3);
	w[0]=1;
	w[1]=1;
	w[2]=5;

	cout << w << endl;

	cout << (v+w) << endl;
}