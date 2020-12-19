#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool funcaoComparaDecrescente(int i, int j) {
	return i>j;
}

int main() {
	int v[] = {5,6,9,1,2,15,5};
	sort(v,v+7,funcaoComparaDecrescente);
	for(int i:v) cout << i << " ";
	cout << endl;
}


class FunctorComparaDecres {
public:
	bool operator() (int i, int j) const {
		return i>j;
	}
};

