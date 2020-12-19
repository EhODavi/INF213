#include <iostream>

using namespace std;

class Simples {
	public:
		Simples(const int val_) {
			this->val = val_; 
		}
		int getVal() const {
			return this->val;
		}
	private:
		int val;
};

void testaSimples() {
	Simples s(10);
	cout << s.getVal() << endl;

	Simples s2 = s; //construtor de copia...
	cout << s2.getVal() << endl;
}

//------------------------------------------------

class ComMemoriaDinamica {
	public:
		ComMemoriaDinamica(const int val_) {
			this->val = new int;
			*val = val_; 
		}
		int getVal() const {
			return *val;
		}
		~ComMemoriaDinamica() {
			delete this->val;
		}
		ComMemoriaDinamica(const ComMemoriaDinamica &a) {
			this->val = new int;
			*val = a.getVal(); 
		}
		ComMemoriaDinamica & operator=(const ComMemoriaDinamica &a) {
			if (this == &a) return *this;
			
			*val = a.getVal(); 
			
			return *this;
		}

	private:
		int *val;
};

void testaMemoriaDinamica() {
	ComMemoriaDinamica d(20);
	cout << d.getVal() << endl; //20

	//Qual o problema aqui?
	//resolva o leak

	//O que acontece se copiarmos objetos?
	ComMemoriaDinamica d2 = d;
	cout << d2.getVal() << endl; //20

	ComMemoriaDinamica d3(30);
	d3 = d2;
	cout << d3.getVal() << endl; //20

}

int main() {
	cout << "Testes com classe simples..." << endl;
	testaSimples();
	cout << "Testes com classe com memoria dinamica..." << endl;
	testaMemoriaDinamica();

	return 0;
}