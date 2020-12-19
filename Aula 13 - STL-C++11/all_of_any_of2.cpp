#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...

int main() {
	vector<int> v;
	for(int i=0;i<6;i++) v.push_back(i+1);
	cout << "Ha algum elemento par no vetor? " 
				<< any_of(v.begin(),v.end(), [](int n) {return n%2==0;} ) << endl;
	cout << "Todos elementos sao pares? " 
				<< all_of(v.begin(),v.end(), [](int n) {return n%2==0;} ) << endl;
	cout << "Todos elementos sao maiores que 0? " 
				<< all_of(v.begin(),v.end(), [](int n) {return n>0;} ) << endl;	
	cout << "Quantos pares? " 
				<< count_if(v.begin(),v.end(),[](int n) {return n%2==0;} ) << endl;
}



