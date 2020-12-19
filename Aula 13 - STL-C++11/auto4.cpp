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
#include <vector>
using namespace std;

int main(int argc, char **argv) {	
	map<string,vector<int> > m;
	m["salles"].push_back(1);
	m["salles"].push_back(5);
	m["abc"].push_back(10);

	//imprima cada string em m e os numeros associados a ela!
	for(const auto &entrada:m) {
		cout << entrada.first << " : ";
		for(const auto &num: entrada.second) 
			cout << num << " ";
		cout << endl;
	}
}



