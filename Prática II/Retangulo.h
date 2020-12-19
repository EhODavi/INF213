#ifndef RETANGULO_H
#define RETANGULO_H

#include "FigBase.h"

class Retangulo: public FigBase {
    public:
        Retangulo(const double x = 0.0, const double y = 0.0, const double largura = 0.0, const double altura = 0.0, const int espessura = 1, const int cor = 1, const int tipo = 1);
        double getLargura() const;
        void setLargura(const double largura);
        double getAltura() const;
        void setAltura(const double altura);
        float area() const;
        float perimetro() const;
        void imprime(ostream &os) const;
        void le(istream &is);
        friend istream &operator>>(istream &is, Retangulo &r);
        friend ostream &operator<<(ostream &os, const Retangulo &r);
    private:
        double largura, altura;
};

istream &operator>>(istream &is, Retangulo &r);
ostream &operator<<(ostream &os, const Retangulo &r);

#endif