#include "Data.h"

int main() {
	Data d(1,5,2019);

	d.setDia(15);

	cout << d << endl;

	Data &dRef = d;
	Data *dPtr = &d;

	dRef.setDia(10);
	cout << d << endl;

	dPtr->setDia(11);
	cout << d << endl;

	//como modificar o dia usando dPtr, mas sem usar o operador -> ?
	(*dPtr).setDia(12);
	cout << d << endl;

	return 0;
}