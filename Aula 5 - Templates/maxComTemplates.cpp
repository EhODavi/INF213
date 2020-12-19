#include <iostream>

using namespace std;

//retorna o maior dos n primeiros elementos em v[]
//n deve ser pelo menos 1
//funcao "generica" max
//a palavra-chave class aqui indica: "qualquer tipo" (pre-definido ou criado pelo programador)
//T e' referido como "parametro de template de tipo"
template <class T>
T max(T v[], int n) {
	T mx = v[0];
	for(int i=0;i<n;i++) 
		if(v[i]>mx) 
			mx = v[i];
	return mx;
}

/*
float max(float v[], int n) {
	float mx = v[0];
	for(int i=0;i<n;i++) 
		if(v[i]>mx) 
			mx = v[i];
	return mx;
}
*/


int main() {
	float f[] = {3.14,-5,100,20,200.99};
	int i[] = {1,2,20,-1,2};
	char c[] = {'a','w','x','b','a'};
	string s[] = {"zbz","za","abcdedf","c","b"};
	bool b[] = {false,false,true,true,false};

	//Imprime o maior elemento em cada array...
	cout << max(f,5) << endl;
	cout << max(i,5) << endl;
	cout << max(c,5) << endl;
	cout << max(s,5) << endl;
	cout << max(b,5) << endl; // Em C++, true=1 e false=0...
}