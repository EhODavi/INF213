#include <list>
#include <iostream>
#include "MyHashMap.h"
using namespace std;

#include <string>
using namespace std;

//functor que calcula o hash de uma string
class MyStringHash1 {
public:
	unsigned operator()(const string &s) const { //nesse exemplo, o hash sera o codigo ASCII do primeiro caractere da string
		return (int)s[0];
	}
};

class MyStringHash2 {
public:
	unsigned operator()(const string &s) const {
		return 0;
	}
};

class MyStringHash3 {
public:
	unsigned operator()(const string &s) const {
		if(s.size() % 2 == 0) return 0;
		
		return 1;
	}
};

class MyStringHash4 {
public:
	unsigned operator()(const string &s) const {
		int sum = 0;

		for(int i = 0; i < s.size(); i++) sum += (int)s[i];
		
		return sum;
	}
};

//conta a frequencia de cada string (usando uma tabela hash) no vetor chaves..
//entao, imprime o tamanho dos baldes na tabela hash.
template<class HashFunctor>
void testaHash(const MyVec<string> &chaves) {
	MyHashMap<string,int,HashFunctor > map;

	int sz = chaves.size();
	for(int i=0;i<sz;i++) {  //vamos contar a frequencia de cada chave...
		if(map.count(chaves[i])==0)
			map.set(chaves[i],1);
		else 
			map.set(chaves[i],map.getValue(chaves[i])+1);
	}
	map.imprimeTamanhoBaldes();
}




//Exercicio: crie outras funcoes hash e teste-as!
int main(int argc, char **argv) {
	MyVec<string> chaves;
	string st;
	while(cin >> st) {
		chaves.push_back(st);
	}

	int qualFunctorUsar = atoi(argv[1]);
	switch(qualFunctorUsar) {
		case 1:
			cout << "Testando com o functor 1 (usando o codigo ASCII do primeiro caractere de cada string como hash)" << endl;
			testaHash<MyStringHash1>(chaves); //realiza o teste usando o functor MyStringHash1
			break;
		case 2: //implemente seus proprios functors e os teste...
			cout << "Testando com o functor 2 (.....)" << endl;
			testaHash<MyStringHash2>(chaves); //realiza o teste usando o functor MyStringHash2
			break;
		case 3:
			cout << "Testando com o functor 3 (.....)" << endl;
			testaHash<MyStringHash3>(chaves); //realiza o teste usando o functor MyStringHash3
			break;
		case 4:
			cout << "Testando com o functor 4 (.....)" << endl;
			testaHash<MyStringHash4>(chaves); //realiza o teste usando o functor MyStringHash4
			break;
	}

}