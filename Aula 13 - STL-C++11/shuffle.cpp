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
	v.push_back("teste");
	v.push_back("teste2");

	random_shuffle(v.begin(),v.end());
	for(const string &st:v) cout << st << " ";
	cout << endl;

	random_shuffle(v.begin(),v.end());
	for(const string &st:v) cout << st << " ";
	cout << endl;

	random_shuffle(v.begin(),v.end());
	for(const string &st:v) cout << st << " ";
	cout << endl;		
}



