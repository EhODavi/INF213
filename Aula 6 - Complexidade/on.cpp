#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



int main(int argc,char **argv) {
	int n = atoi(argv[1]);

	double ans = 0;
	for(int i=0;i<10000;i++) { //T(n) = 10000*(3+n) = 30000 + 10000n
		ans += sqrt(i);
		ans += sin(i);
		ans += sqrt(i);		
		for(int j=0;j<n;j++) {
			ans += sqrt(i*j);
		}
	}
	cout << ans << endl;
}