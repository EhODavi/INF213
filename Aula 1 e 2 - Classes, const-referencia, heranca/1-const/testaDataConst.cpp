#include "Data.h"
#include <iostream>

using namespace std;

int main() {
	Data d(1,2,2019);

	const Data &d2 = d;

	d2.imprime();
	cout << endl; 
	//d2.setAno(2019);
	
	return 0;
}