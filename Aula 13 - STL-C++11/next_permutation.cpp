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
	vector<string> v;
	v.push_back("abc");
	v.push_back("x");
	v.push_back("salles");


	sort(v.begin(),v.end());
	do {
		for(const string &st:v) cout << st << " ";
		cout << endl;
	} while(next_permutation(v.begin(),v.end()));
}



