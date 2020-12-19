#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <set>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...

int main() {
	set<int> s;
	s.insert(1);
	s.insert(10);
	s.insert(1);
	s.insert(5);
	cout << s.size() << endl;
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
		cout << *it << " ";
	cout << endl;
}



