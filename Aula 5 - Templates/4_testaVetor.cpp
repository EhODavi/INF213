#include <iostream>
using namespace std;

#include "4_vetor.h"

int main() {
	Vetor<int,3> v;
	cout << v << endl;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v << endl;

	Vetor<int,3> w;
	w[0]=1;
	w[1]=1;
	w[2]=5;

	cout << w << endl;
	cout << (v+w) << endl;

	Vetor<int,3> w2 = w;
	cout << (w2==w) << endl;
	cout << (w2!=w) << endl;
	cout << (v==w) << endl;
	cout << (v!=w) << endl;

	Vetor<double,3> z;
	//if(z==w) {cout << "Igual" << endl;} //o que acontece se tentarmos comparar?

	cout << "Vetor z: " << z << endl;

	Vetor<string,3> vs,vs2;  //oops... nao podemos criar um vetor de strings... por que?
											 //resolva esse problema
	vs[0] = "ab";
	vs[1] = "w";

	vs2[0] = "c";
	vs2[1] = 'z';
	vs2[2] = "k";

	cout << "Vs: " << vs << endl;
	cout << "Vs2: " << vs2 << endl;
	cout << "Vs+vs2: " << (vs+vs2) << endl;

	Vetor<int,3> vInt3;
	vInt3[0]=14;
	vInt3[1]=1;

	Vetor<int,2> vInt2;
	vInt2[0] = 14;
	vInt2[1] = 1;
	//if(vInt3 ==vInt2) cout << "abc" << endl;
	//else cout << "Def" << endl;
}