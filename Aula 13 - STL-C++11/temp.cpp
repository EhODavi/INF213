#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Aluno {
	int matr;
	double nota;
};

template<class T>
class Compara {
public:
	bool operator()(const T &a,const T &b) {
		return a>b;
	}
};

int main() {
	vector<int> v;
	v.reserve(10000000);
	for(int i=0;i<10000000;i++) {
	 	v.push_back( rand() );
	}
	sort(v.begin(),v.end(), [](int a,int b) { return a>b;} );
	random_shuffle(v.begin(),v.end());
	cout << "Tem maior? " << any_of(v.begin(),v.end(), [](int i) { return i>1000000000;}) << endl;
	cout << "Soma: " << accumulate(v.begin(),v.end(),0, [](int a, int b) { return (a + b);}) << endl;



	// for(int i=0;i<10;i++) {
	// 	v.push_back( {rand()%10,rand()%100} );
	// }
	// Compara c;
	// sort(v.begin(),v.end(),c);

	// for(Aluno &i:v) cout << i.matr << " " << i.nota << endl;
}


