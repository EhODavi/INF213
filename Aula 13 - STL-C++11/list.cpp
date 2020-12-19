#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l,u;
	for(int i=0;i<5;i++) l.push_back(i*i);
	for(int i=0;i<5;i++) l.push_front(i); //podemos inserir no inicio de uma lista
	cout << l.size() << endl; //listas da STL, em geral, usam tempo O(n) para size()! 
													  //elas nao "armazenam" o tamanho!
	list<int>::iterator it = l.begin();
	it++; //it aponta para 3	
	l.insert(it,5);   //insercao no meio de listas e' eficiente...
										//insere o numero 5 na posicao 1
	for(int i:l) cout << i << " ";
	cout << endl;	

	l.sort(); // listas possuem um metodo chamado sort
						//vectors nao! (ha um sort "externo" ao vector)

	for(int i:l) cout << i << " ";
	cout << endl;	

	u.push_back(100);
	u.splice(u.begin(),l,it,l.end());
	for(int i:l) cout << i << " ";
	cout << endl;
	for(int i:u) cout << i << " ";
	cout << endl;
}



