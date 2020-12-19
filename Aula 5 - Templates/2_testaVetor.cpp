#include <iostream>
using namespace std;

#include "2_vetor.h"


int main() {
	Vetor<int> v;
	cout << v << endl;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v << endl;

	Vetor<int> w;
	w[0]=1;
	w[1]=1;
	w[2]=5;

	cout << w << endl;
	//cout << (v+w) << endl;

/*
	Vetor<int> w2 = w;
	cout << (w2==w) << endl;
	cout << (w2!=w) << endl;
	cout << (v==w) << endl;
	cout << (v!=w) << endl;

	Vetor<double> z;
	//if(z==w) {cout << "Igual" << endl;} //o que acontece se tentarmos comparar?

	cout << "Vetor z: " << z << endl;

	//Vetor<string> vs;  //oops... nao podemos criar um vetor de strings... por que?
											 //resolva esse problema

*/
}