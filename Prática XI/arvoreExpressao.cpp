#include <iostream>
#include "MyVec.h"
using namespace std;


class ArvoreExpressao {
public:
	void imprimeArrays() const;

	void leArvore();
	void imprimeExpressao() const;
	int avaliaValor() const;
	int altura() const;
	int nivelMaisNodos() const;

private:
	//Nao adicione nenhum membro de dados na sua classe!!!!
	//Funcoes auxiliares podem ser adicionadas se necessario.

	MyVec<int> filhoEsquerdo;
	MyVec<int> filhoDireito;
	MyVec<char> operador;

	void imprimeExpressao(int root) const;
	int avaliaValor(int root) const;
	int altura(int root) const;
	void nivelMaisNodos(int root, int nivel, int numElems[]) const;
};

void ArvoreExpressao::imprimeArrays() const {
	for(int i=0;i<filhoEsquerdo.size();i++) cout << i << " "; cout << "\n";
	for(int i=0;i<filhoEsquerdo.size();i++) cout << filhoEsquerdo[i] << " "; cout << "\n";
	for(int i=0;i<filhoDireito.size();i++) cout << filhoDireito[i] << " "; cout << "\n";
	for(int i=0;i<operador.size();i++) cout << operador[i] << " "; cout << "\n";
}

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
//sua implementacao:


void ArvoreExpressao::leArvore() {
	int qtdVertice, nodo, filhoE, filhoD;
	char op;

	cin >> qtdVertice;

	for(int i = 0; i < qtdVertice; i++) {
		cin >> nodo >> filhoE >> filhoD >> op;
		filhoEsquerdo.insert(filhoE,nodo);
		filhoDireito.insert(filhoD,nodo);
		operador.insert(op,nodo);
	}
}

void ArvoreExpressao::imprimeExpressao() const {
	imprimeExpressao(0);
}

void ArvoreExpressao::imprimeExpressao(int root) const {
	if(root == -1) return;
	
	if(!isdigit(operador[root]) && root != 0) cout << "(";
	imprimeExpressao(filhoEsquerdo[root]);
	cout << operador[root];
	imprimeExpressao(filhoDireito[root]);
	if(!isdigit(operador[root]) && root != 0) cout << ")";
}

int ArvoreExpressao::avaliaValor() const {
	return avaliaValor(0);
}

int ArvoreExpressao::avaliaValor(int root) const {
	if(operador[root] == '*') return avaliaValor(filhoEsquerdo[root]) * avaliaValor(filhoDireito[root]);
	else if (operador[root] == '+') return avaliaValor(filhoEsquerdo[root]) + avaliaValor(filhoDireito[root]);
	else if (operador[root] == '-') return avaliaValor(filhoEsquerdo[root]) - avaliaValor(filhoDireito[root]);
	else return	operador[root] - '0';
}

int ArvoreExpressao::altura() const {
	return altura(0);
}

int ArvoreExpressao::altura(int root) const {
	int alturaEsquerda = 0, alturaDireita = 0;

	if(filhoEsquerdo[root] != -1) alturaEsquerda = altura(filhoEsquerdo[root]) + 1;
	if(filhoDireito[root] != -1) alturaDireita = altura(filhoDireito[root]) + 1;

	return max(alturaEsquerda,alturaDireita);
}

int ArvoreExpressao::nivelMaisNodos() const {
	int alt = altura();
	int numElemsNivel[alt + 1] = {0};

	nivelMaisNodos(0, 0, numElemsNivel);

	int maiorNivel = 1, maiorElemento = 0;

	for(int i = 0; i < alt + 1; i++) {
		if(numElemsNivel[i] > maiorElemento) {
			maiorElemento = numElemsNivel[i];
			maiorNivel = i + 1;
		}
	}

	return maiorNivel;
}

void ArvoreExpressao::nivelMaisNodos(int root, int nivel, int numElems[]) const {
	if(root == -1) return;

	nivelMaisNodos(filhoEsquerdo[root], nivel + 1, numElems);
	numElems[nivel]++;
	nivelMaisNodos(filhoDireito[root], nivel + 1, numElems);
}

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/

//Nao modifique aqui
//OBS: cada arquivo de teste começa com a descricao de uma arvore.
//A seguir, ha um numero indicando qual etapa sera testada...
int main() {
	ArvoreExpressao a;
	a.leArvore();

	int etapa;
	cin >> etapa; 
	switch(etapa) {
		case 1:
			cout << "Etapa 1:" << endl;
			a.imprimeArrays();
			break;
		case 2:
			cout << "Etapa 2:" << endl;
			a.imprimeExpressao();
			cout << endl;
			break;
		case 4:
			cout << "Etapa 4:" << endl;
			cout << a.avaliaValor() << endl;
			break;
		case 5:
			cout << "Etapa 5:" << endl;
			cout << a.altura() << endl;
			cout << a.nivelMaisNodos() << endl;
			break;
		default:
			cout << "Erro! Etapa invalida" << endl;
			break;
	}

}