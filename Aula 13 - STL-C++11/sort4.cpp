#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int v[] = {5,6,9,1,2,15,5};
	sort(v,v+7);
	reverse(v,v+7);
	for(int i:v) cout << i << " ";
	cout << endl;
}




