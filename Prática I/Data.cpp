#include "Data.h"

Data::Data(const int d, const int m, const int a) {
    this->setDia(d);
    this->setMes(m);
    this->setAno(a);
}

Data::Data(const Data &dt): dia(dt.getDia()), mes(dt.getMes()), ano(dt.getAno()) { }

void Data::setDia(int d) {
    if (d < 1) d = 1;
    if (d > 30) d = 30;

    this->dia = d;
}

void Data::setMes(int m) {
    if (m < 1) m = 1;
    if (m > 12) m = 12;

    this->mes = m;
}

void Data::setAno(int a) {
    if (a < 2018) a = 2018;
    if (a > 2020) a = 2020;

    this->ano = a;
}

int Data::getDia() const {
    return this->dia;
}

int Data::getMes() const {
    return this->mes;
}

int Data::getAno() const {
    return this->ano;
}

int Data::difDias(const Data &dma) const {
    return (this->getAno() - dma.getAno()) * 365 + (this->getMes() - dma.getMes()) * 30 + (this->getDia() - dma.getDia());
}

int Data::compData(const Data &dma) const {
    if (this->difDias(dma) > 0) return 1;
    if (this->difDias(dma) == 0) return 0;

    return -1;
}

void Data::imprime() const {
    cout << *this;
}

istream& operator>>(istream &is, Data &d) {
    int dia;
    int mes;
    int ano;

    is >> dia >> mes >> ano;

    d.setDia(dia);
    d.setMes(mes);
    d.setAno(ano);

    return is;
}

ostream& operator<<(ostream &os, const Data &d) {
    os << d.getDia() << " " << d.getMes() << " " << d.getAno();

    return os;
}