#ifndef VETOR_H
#define VETOR_H

#include <ostream>

class Vetor {
public:
	Vetor();
	int &operator[](int i) { return v[i]; } //implementada no cabecalho...
	const int operator[](int) const; //versao constante do operador acima...

	Vetor operator+(const Vetor &other) const; //soma o vetor "this" com other, retornando o resultado
																						 //o vetor "this" nao eh modificado
	bool operator==(const Vetor &other) const; //verifica se o vetor e' igual ao outro
	bool operator!=(const Vetor &other) const;

	friend ostream &operator<<(ostream &,const Vetor &v);
private:
	int v[3];
};

Vetor::Vetor() {
	for(int i=0;i<3;i++)
		v[i] = 0;
}


ostream &operator<<(ostream &os,const Vetor &vet) {
	for(int i=0;i<3;i++) os << vet.v[i] << " "; //poderiamos ter simplesmente utilizado vet[i], mas decidimos
																						  //acessar o array privado para praticar o uso de friend
	return os;
}

const int Vetor::operator[](int i) const { //versao constante do operador acima...
	return v[i];
}

Vetor Vetor::operator+(const Vetor &other) const{ //soma o vetor "this" com other, retornando o resultado
	Vetor v = *this;
	for(int i=0;i<3;i++)
		v[i] += other[i];
	return v;
}
																					        //o vetor "this" nao eh modificado
bool Vetor::operator!=(const Vetor &other) const{ //verifica se o vetor e' igual ao outro
	return !(*this == other); 
}

bool Vetor::operator==(const Vetor &other) const{
	for(int i=0;i<3;i++)
		if(v[i]!=other.v[i]) 
			return false;
	return true;
}

#endif