#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <iostream>

using namespace std;

class Data {
	friend ostream& operator<<(ostream &out, const Data &data);
	friend istream& operator>>(istream &in, Data &data);
	public:
		Data(const int d = 1, const int m = 1, const int a = 2018);
		void setDia(int d);
		void setMes(int m);
		void setAno(int a);
		void imprime() const;
		int getDia() const {return this->dia;} //inline
		int getMes() const {return this->mes;}
		int getAno() const {return this->ano;}
		int compData(const Data &data) const;
		int difDias(const Data &dma) const;	
	private:
		int dia,mes,ano;
};

istream& operator>>(istream &in, Data &data);
ostream& operator<<(ostream &out, const Data &data);

#endif