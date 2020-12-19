#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <map>
using namespace std;



int main(int argc, char **argv) {
	map<string,double> alunos;
	alunos["joao"] = 1.85;
	alunos["maria"] = 1.65;
	alunos["ligia"] = 1.7;
	alunos["fernando"] = 1.9;
	alunos["pedro"] = 1.7;

	cout << "Digite o nome do aluno: ";
	string nome;
	cin >> nome;
	if(alunos.find(nome)!=alunos.end())
		cout << "Altura: " << alunos[nome] << endl;
}



