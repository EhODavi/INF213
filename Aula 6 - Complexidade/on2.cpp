#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



int main(int argc,char **argv) {
	int n = atoi(argv[1]);

	double ans = 0;
	for(int i=0;i<n;i++) { //T(n) = n^2
		for(int j=0;j<n;j++) {
			ans += sqrt(i*j);
		}
	}
	cout << ans << endl;
}