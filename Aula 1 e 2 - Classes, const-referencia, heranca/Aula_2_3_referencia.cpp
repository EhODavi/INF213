#include <iostream>
#include <string>

using namespace std;

//Obs: essa classe e' apenas ilustrativa... ela nao faz muito sentido!!!
class Pessoa {
public:
	Pessoa(const string &st): nome(st) {}
	bool comparaNome(const string &nomeOutro) const {
		return nome == nomeOutro;
	}
	//se a string fosse por referencia, poderiamos modificar o nome de fora da classe?
	const string & getNome() const {
		return nome;
	}
	void setNome(const string &novoNome) {
		nome = novoNome;
	}
	string getNomeReverso() const {
		string reverso;
		for(int i=nome.size()-1;i>=0;i--) reverso += nome[i];
		return reverso;
	}
	void setId(const int novoId) {
		id = novoId;
	}
	int getId() const {
		return id;
	}
	void getIdETamanhoNome(int &idToGet, int &tamanhoNome) const {
		idToGet = id;
		tamanhoNome = nome.size();
	}
private:
	int id;
	string nome;
};

void f(const Pessoa &p) {
	cout << p.getNome() << endl;
	cout << p.getNomeReverso() << endl;
	cout << p.comparaNome("Maria") << endl;
}

int main() {
	Pessoa p("Joaquim");
	cout << p.getNome() << endl;
	cout << p.comparaNome("Maria") << endl;
	cout << p.comparaNome("Joaquim") << endl;
	cout << p.getNomeReverso() << endl;

	p.setId(10);
	int id,tamanhoNome;
	p.getIdETamanhoNome(id,tamanhoNome);
	cout << "Id e tamanho do nome: " <<  id << " " << tamanhoNome << endl;

	const Pessoa p2("Maria");
	

	f(p);
	f(p2);

	return 0;
}
