#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...
struct MaiorQue {
	MaiorQue(int val): n(val) {}
	int n;
	bool operator()(int x) {
		return x > n;
	}
};
struct Par {	
	bool operator()(int x) {
		return x%2 ==0;
	}
};
int main() {
	vector<int> v;
	for(int i=0;i<6;i++) v.push_back(i+1);
	cout << "Ha algum elemento par no vetor? " << any_of(v.begin(),v.end(),Par()) << endl;
	cout << "Todos elementos sao pares? " << all_of(v.begin(),v.end(),Par()) << endl;
	cout << "Todos elementos sao maiores que 0? " << all_of(v.begin(),v.end(),MaiorQue(0)) << endl;	
	cout << "Quantos pares? " << count_if(v.begin(),v.end(),Par()) << endl;
}



