#include <iostream>
using namespace std;

#include "3_vetor.h"



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
	cout << (v+w) << endl;

	Vetor<int> w2 = w;
	cout << (w2==w) << endl;
	cout << (w2!=w) << endl;
	cout << (v==w) << endl;
	cout << (v!=w) << endl;

	Vetor<double> z;
	//if(z==w) {cout << "Igual" << endl;} //o que acontece se tentarmos comparar?

	cout << "Vetor z: " << z << endl;

	Vetor<string> vs,vs2;  //oops... nao podemos criar um vetor de strings... por que?
											 //resolva esse problema
	vs[0] = "ab";
	vs[1] = "w";

	vs2[0] = "c";
	vs2[1] = 'z';
	vs2[2] = "k";

	cout << "Vs: " << vs << endl;
	cout << "Vs2: " << vs2 << endl;
	cout << "Vs+vs2: " << (vs+vs2) << endl;


}