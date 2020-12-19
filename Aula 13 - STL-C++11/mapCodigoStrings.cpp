#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <map>
#include <fstream>
using namespace std;



int main(int argc, char **argv) {	
	map<string,int> m;

	string st;
	while(cin >> st) {
		if(m.find(st)==m.end()) {
			int sz = m.size();
			m[st] = sz;
		}
	}

	//agora m[st] sera o codigo da string st...
}



