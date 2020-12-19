#include <iostream>
using namespace std;

#include "5_vetor.h"

int main() {
	Vetor<int,3,int> v(0);
	cout << v << endl;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v << endl;

	Vetor<int,3,string> w("Jose"); //Por que nao colocar o identifcador ("Jose") como template? (em vez de passa-lo no construtor?)
	w[0]=1;
	w[1]=1;
	w[2]=5;

	cout << w << endl;
}