#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "FigBase.h"

class Segmento: public FigBase {
    public:
        Segmento(const double x = 0.0, const double y = 0.0, const double x2 = 0.0, const double y2 = 0.0, const int espessura = 1, const int cor = 1, const int tipo = 1);
        double getX2() const;
        void setX2(const double x2);
        double getY2() const;
        void setY2(const double y2);
        float area() const;
        float perimetro() const;
        void imprime(ostream &os) const;
        void le(istream &is);
        friend istream &operator>>(istream &is, Segmento &s);
        friend ostream &operator<<(ostream &os, const Segmento &s);
    private:
        double x2, y2;
};

istream &operator>>(istream &is, Segmento &s);
ostream &operator<<(ostream &os, const Segmento &s);

#endif