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
	int x = 10;
	int y = f(x+1);
	double z = x+3.14;
	vector<int> v;
	vector<double> vd;
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) 
		cout << *it << endl;

	for(int i:v) {
		cout << i << endl;
	}
	for(double i:vd) {
		cout << i << endl;
	}
}



