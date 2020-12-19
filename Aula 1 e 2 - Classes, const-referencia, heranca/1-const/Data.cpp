#include "Data.h"

Data::Data(const int d, const int m, const int a) {
	setDia(d);
	setMes(m);
	setAno(a);	
}
	
void Data::setDia(int d) {
	if(d < 1 || d > 30) {
		if(d < 1)
			d = 1;
		if(d > 30)
			d = 30;
	}

	this->dia = d;	
}

void Data::setMes(int m) {
	if(m < 1 || m > 12) {
		if(m < 1)
			m = 1;
		if(m > 12)
			m = 12;
	}

	this->mes = m;
}

void Data::setAno(int a) {
	if(a < 2018 || a > 2020) {
		if(a < 2018)
			a = 2018;
		if(a > 2020)
			a = 2020;
	}	

	this->ano = a;
}

void Data::imprime() const {
	/*
	Data d2(1,5,2020);
	d2.setAno(2019); //chamadas de funcao nao const... o que ocorre?

	setAno(2019);
	*/
	cout << *this;
}

int Data::compData(const Data &data) const {
	int dif = difDias(data);

	if (dif < 0) return -1;
	else if (dif ==0) return 0;
	else return 1;
}

int Data::difDias(const Data &dma) const {
	return (this->getAno() * 360 +  this->getMes() * 30 + dia) - (dma.getAno() * 360 +  dma.getMes() * 30 + dma.getDia()) ;
}

istream& operator>>(istream &in, Data &data) {
	int d, m, a;
	
	in >> d >> m >> a;
	
	data.setDia(d);
	data.setMes(m);
	data.setAno(a);
	
	return in;
}

ostream& operator<<(ostream &out, const Data &data) {
	out << data.getDia() << " " << data.getMes() << " " << data.getAno();
	
	return out;
}