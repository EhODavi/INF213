#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Estudante {
public:
	int getMatr() const {return matr;}
	const string& getNome() const {return nome;}
	double getCR() const {return cr;}
	Estudante(const string &nome0, int matr0,int cr0): nome(nome0),matr(matr0), cr(cr0) {}
	bool operator<(const Estudante &other) const {
		return getNome() < other.getNome();
	}
private:
	string nome;
	int matr;
	double cr;
};
bool comparaPorNome(const Estudante &a, const Estudante &b) {
	return a.getNome() < b.getNome();
}
bool comparaPorCr(const Estudante &a, const Estudante &b) {
	return a.getCR() < b.getCR();
}
int main() {
	vector<Estudante> v;
	v.push_back(Estudante("joao",52123,80.5));
	v.push_back(Estudante("maria",1234,70));
	v.push_back(Estudante("ana",99999,95));	
	sort(v.begin(),v.end()); //ordena usando o operador < da classe!
	sort(v.begin(),v.end(),comparaPorCr); //ordena por cr
	sort(v.begin(),v.end(),comparaPorNome); //ordena nome
}



