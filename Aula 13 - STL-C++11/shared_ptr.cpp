#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <map>
#include <stack>
#include <queue>
#include <fstream>
#include <memory>
using namespace std;

struct Aluno {
	Aluno(const string &n, int mat) : nome(n), matr(mat) {};
	int matr;
	string nome;
};

int main(int argc, char **argv) {	
	shared_ptr<Aluno> ptr(new Aluno("abc",123));
	shared_ptr<Aluno> ptr2 = ptr;
	//ptr e ptr2 apontam para o mesmo aluno 

	//sem vazamento de memoria! o aluno sera
	//desalocado quando ptr perder escopo!
}


