#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data {
    public:
        Data(const int d = 1, const int m = 1, const int a = 2018);
        Data(const Data &dt);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        int getDia() const;
        int getMes() const;
        int getAno() const;
        int difDias(const Data &dma) const;
        int compData(const Data &dma) const;
        void imprime() const;
        friend istream &operator>>(istream &is, Data &d);
        friend ostream &operator<<(ostream &os, const Data &d);
    private:
        int dia;
        int mes;
        int ano;
};

istream &operator>>(istream &is, Data &d);
ostream &operator<<(ostream &os, const Data &d);

#endif