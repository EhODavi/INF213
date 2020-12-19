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
		//Se nome_ nao fosse "const string &" --> nao haveria problemas de compilacao
		//A passagem por referencia aqui e' apenas com objetivo de performance.
		Par(const int a_, const int b_, const string &nome_): a(a_), b(b_), nome(nome_) {} 

	private:
		int a, b;
		//variaveis const nao podem ser modificadas por atribuicao
		//mas podem ser inicializadas no construtor com um inicializador de membro
		const string nome; //const --> cada Par pode ter um nome distinto, mas apos a criacao de um par seu nome nao pode ser alterado!
};


int main() {

}