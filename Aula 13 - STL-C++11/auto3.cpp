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
	for(map<string,vector<int> >::const_iterator it = m.begin();it!=m.end();it++) {
		cout << it->first << " : ";
		for(vector<int>::const_iterator it2 = it->second.begin();it2!=it->second.end();it2++) 
			cout << *it2 << " ";
		cout << endl;
	}
}



