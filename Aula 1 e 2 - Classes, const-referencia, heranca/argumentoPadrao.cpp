#include <iostream>

using namespace std;

void soma(const int a = 0, const int b = 0, const int c = 0) {
	cout << a + b + c << endl;
}

void testaF() {
	soma(1,2,3);
	soma(1,2);
	soma(1);
	soma();
}

void soma2(const int a, const int b, const int c) {
	cout << "soma2 (3 args) " << a  + b + c << endl;
}

void soma2(const int a, const int b) {
	cout << "soma2 (2 args) " << a  + b  << endl;
}

void soma2(const int a) {
	cout << "soma2 (1 arg) " << a  << endl;
}

void soma2() {
	cout << "soma2 (0 arg) " << 0 << endl;
}

void testaF1() {
	soma2(1,2,3);
	soma2(1,2);
	soma2(1);
	soma2();
}

int main() {
	testaF();
	testaF1();

	return 0;
}