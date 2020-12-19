#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <map>
#include <fstream>
using namespace std;



int main(int argc, char **argv) {	
	ifstream arquivoEntrada(argv[1]);
	vector<string> v; //para facilitar, vamos colocar todas palavras da entrada em um vetor
	string st;
	while(arquivoEntrada>>st) v.push_back(st);

	map<string,map<string,int> > frequencias;
	for(int i=0;i<v.size()-1;i++) 
		frequencias[v[i]][v[i+1]]++;
	while(true) {
		cout << "Digite duas palavras: ";
		string a,b;
		cin >> a >> b;
		cout << "Quantas vezes " << a << " aparece antes de " << b << " ? " << frequencias[a][b] << endl;
	}
}



