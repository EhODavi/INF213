#include <iostream>
#include <string>

using namespace std;

class Par {
	public:
		/*Par(int a_,int b_, string nome_) {
			a = a_;
			b = b_;
			nome = nome_; //?
		}*/

		//usando inicializadores de membros (validos apenas no construtor)
		//inicializadores de membros: performance
		Par(const int a_, const int b_, const string &nome_) : a(a_),b(b_), nome(nome_) {} 

		const string &getNome() const {
			return this->nome;
		}

		friend ostream & operator<<(ostream &out, const Par &p);

	private:
		int a, b;
		//variaveis const nao podem ser modificadas por atribuicao
		//mas podem ser inicializadas no construtor com um inicializador de membro
		const string nome; //const --> cada Par pode ter um nome distinto, mas apos a criacao de um par seu nome nao pode ser alterado!
};

ostream & operator<<(ostream &out, const Par &p) {
	out << p.getNome();
	out << p.nome; 
	
	return out;
}


int main() {
	Par p(1,2,"teste");
	cout << p << endl;
}