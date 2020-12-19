#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <iostream>

using namespace std;

class Data {
	public:
		Data(const int d = 1, const int m = 1, const int a = 2018);
		
		void setDia(int d);
		void setMes(int m);
		void setAno(int a);

		//O que ocorre se eu remover o const abaixo?
		void imprime() const; //Funcao const so pode chamar funcao const (do mesmo objeto ou de membros do objeto)
		
		int getDia() const {return this->dia;} //inline
		int getMes() const {return this->mes;}
		int getAno() const {return this->ano;}

		int compData(const Data &data) const;
		int difDias(const Data &dma) const;

		friend ostream& operator<<(ostream &out, const Data &data);
		friend istream& operator>>(istream &in, Data &data);
	private:
		int dia, mes, ano;
};

ostream& operator<<(ostream &out, const Data &data);
istream& operator>>(istream &in, Data &data);

#endif