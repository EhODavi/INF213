#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <unordered_set>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...

void removeRepetidos(vector<int> &v) {
	sort(v.begin(),v.end());
	vector<int>::iterator newEnd = unique(v.begin(),v.end());
	v.resize(newEnd-v.begin());
}

int main(int argc, char **argv) {
	int n = atoi(argv[1]);
	vector<int> v(n);
	for(int i=0;i<n;i++) v[i] = rand()%(n); //insere elementos entre 0 e n-1 em v...
	removeRepetidos(v);
	cout << v.size() << endl;
}



