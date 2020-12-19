#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	for(int i=0;i<6;i++) v.push_back(i);
	for(vector<int>::iterator it = v.begin();it!=v.end();it++)
		cout << *it << " ";
	cout << endl;
	//vectors (e outras estr. de dados) possui um construtor
	//rbegin() --> iterador "reverso"...
	//(usado para percorrer container "de tras para a frente")
	vector<int> w(v.rbegin(),v.rend());	
	//w e' uma copia invertida de v!
	for(int i:w) { //itera o container w usando o range-for do C++11
		cout << i << " "; 
	}
	cout << endl;
}



