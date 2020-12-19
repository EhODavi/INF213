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
	//que espera como argumento dois iteradores e constroi o 
	//vetor com os elementos no intervalo definido pelos iteradores
	vector<int> w(v.begin(),v.begin()+v.size()/2);	
	for(int i:w) { //itera o container w usando o range-for do C++11
		cout << i << " "; 
	}
	cout << endl;
}



