#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5);
	for(int i=0;i<5;i++) v[i] = i*i;
	v.reserve(100); //muda a capacidade (pre-aloca) do vetor para 100
	v.push_back(15); //adicione 15 a posicao 5 do vetor...
	v.resize(50); //redimensiona o vetor (preenchendo os novos elementos com valores padrao)
	//agora v tem size() 50 e capacidade 100
	v.push_back(1);
	//o numero 1 foi adicionado a posicao 50 (o vetor agora tem 51 elementos)

	vector<vector<double> > m(100,vector<double>(200,0)); //cria uma matriz 100x200 de 0s
	vector<vector<double> > m2 = m; //vetores possuem construtores de copia
}

