#include <array> //!!!
#include <iostream>

using namespace std;


void print(const array<int,3> &v) {
	for(int i=0;i<v.size();i++) cout << v[i] << " ";
	cout << endl;
}

int main() {
	array<int,3> v = {1,2,3};
	array<int,5> u = {1,5,5,6,2};

	cout << v.size() << endl;

	array<int,3> v2 = v;


	print(v);
	print(v2);
	//print(u); // Erro de compilação
}