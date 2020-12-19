#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<int,string>> alunos;
	alunos.push_back(pair<int,string>(52700,"salles"));
	alunos.push_back(make_pair(10000,"maria")); //forma alternativa de criar par...
	alunos.push_back(make_pair(10000,"abc")); 
	alunos.push_back(make_pair(99999,"ligia")); 
	alunos.push_back(make_pair(22222,"marcus")); 
	for(pair<int,string> p:alunos) 
		cout << p.first << " " << p.second << endl;
	sort(alunos.begin(),alunos.end()); //ordena os elementos...
	for(pair<int,string> p:alunos) 
		cout << p.first << " " << p.second << endl;
}




