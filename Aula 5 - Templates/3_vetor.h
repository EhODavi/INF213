#ifndef VETOR_H
#define VETOR_H

#include <ostream>

//precisamos declarar que a classe Vetor existe para que possamos utiliza-la na declaracao
//do operador << abaixo...
template <class T>
class Vetor;

//precisamos declarar a existencia do operador << do tipo T antes de poder
//declarar que ele e' friend da classe(abaixo)
//Ha outras alternativas para declarar o operador << friend, mas elas possuem alguns problemas
//Ha muita variacao sobre as exigencias dos compiladores a respeito de templates/friend
template <class T>
ostream &operator<<(ostream &,const Vetor<T> &v);


template <class T>
class Vetor {

	friend ostream &operator<< <T>(ostream &,const Vetor<T> &v); // o operador nao e' friend de Vetor... e' friend do Vetor de T! 
public:
	Vetor();
	T &operator[](int i) { return v[i]; } //implementada no cabecalho...
	const T& operator[](int) const; //versao constante do operador acima...
													        //T pode ser grande --> retornar por referencia!

	//nao existe mais a classe "Vetor"... existe "Vetor de T"
	Vetor<T> operator+(const Vetor<T> &other) const; //soma o vetor "this" com other, retornando o resultado
																						 //o vetor "this" nao eh modificado
	bool operator==(const Vetor<T> &other) const; //verifica se o vetor e' igual ao outro
	bool operator!=(const Vetor<T> &other) const;


private:
	T v[3];
};

//Definicao em C++ nao podem estar em arquivos .cpp (ao incluir o header
//em um .cpp o compilador precisa instanciar a classe imediatamente -- nao 
// eh possivel compilar de forma separada)
//Exemplo: se houvesse um .cpp contendo a implementacao de Vetor com templates, ao
//compilar esse .cpp de forma separada como o compilador saberia quais os tipos a serem usados
//no lugar de T?

//precisamos desse cabecalho em todas funcoes declaradas fora da classe
template <class T>
Vetor<T>::Vetor() {
	for(int i=0;i<3;i++)
		v[i] = T(); //construtor padrao to tipo T . Inteiros, float, char, etc. valem 0 por padrao.
}

template <class T>
ostream &operator<<(ostream &os,const Vetor<T> &vet) {
	for(int i=0;i<3;i++) os << vet.v[i] << " "; //poderiamos ter simplesmente utilizado vet[i], mas decidimos
																						  //acessar o array privado para praticar o uso de friend
	return os;
}

template <class T>
const T& Vetor<T>::operator[](int i) const { //versao constante do operador acima...
	return v[i];
}

template <class T>
Vetor<T> Vetor<T>::operator+(const Vetor<T> &other) const{ //soma o vetor "this" com other, retornando o resultado
	Vetor v = *this;
	for(int i=0;i<3;i++)
		v[i] += other[i];
	return v;
}

template <class T>												        //o vetor "this" nao eh modificado
bool Vetor<T>::operator!=(const Vetor<T> &other) const{ //verifica se o vetor e' igual ao outro
	return !(*this == other); 
}

template <class T>
bool Vetor<T>::operator==(const Vetor<T> &other) const{
	for(int i=0;i<3;i++)
		if(v[i]!=other.v[i]) 
			return false;
	return true;
}

#endif