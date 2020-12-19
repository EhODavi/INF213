#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <set>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...

void removeRepetidos(vector<int> &v) {
	set<int> s(v.begin(),v.end());
	v = vector<int>(s.begin(),s.end());
}

int main(int argc, char **argv) {
	int n = atoi(argv[1]);
	vector<int> v(n);
	for(int i=0;i<n;i++) v[i] = rand()%(n/10); //insere elementos entre 0 e n-1 em v...
	removeRepetidos(v);
	cout << v.size() << endl;
}



