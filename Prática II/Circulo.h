#ifndef CIRCULO_H
#define CIRCULO_H

#include "FigBase.h"

using namespace std;

class Circulo: public FigBase {
    public:
        Circulo(const double x = 0.0, const double y = 0.0, const double raio = 0.0, const int espessura = 1, const int cor = 1, const int tipo = 1);
        double getRaio() const;
        void setRaio(const double raio);
        float area() const;
        float perimetro() const;
        void imprime(ostream &os) const;
        void le(istream &is);
        friend istream &operator>>(istream &is, Circulo &c);
        friend ostream &operator<<(ostream &os, const Circulo &c);
    private:
        double raio;
};

istream &operator>>(istream &is, Circulo &c);
ostream &operator<<(ostream &os, const Circulo &c);

#endif