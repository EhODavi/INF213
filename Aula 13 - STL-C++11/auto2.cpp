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

int f(int x) {
	return x*2;
}
int main(int argc, char **argv) {	
	auto x = 10;
	auto y = f(x+1);
	auto z = x+3.14;
	vector<int> v;
	vector<double> vd;
	for(auto it=v.begin();it!=v.end();it++) 
		cout << *it << endl;

	for(auto i:v) {
		cout << i << endl;
	}
	for(auto i:vd) {
		cout << i << endl;
	}
}



