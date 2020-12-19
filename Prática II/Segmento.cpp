#include "Segmento.h"
#include <cmath>

Segmento::Segmento(const double x, const double y, const double x2, const double y2, const int espessura, const int cor, const int tipo): FigBase(x, y, espessura, cor, tipo), x2(x2), y2(y2) {}

double Segmento::getX2() const {
    return this->x2;
}

void Segmento::setX2(const double x2) {
    this->x2 = x2;
}

double Segmento::getY2() const {
    return this->y2;
}

void Segmento::setY2(const double y2) {
    this->y2 = y2;
}

float Segmento::area() const {
    return 0;
}

float Segmento::perimetro() const {
    return sqrt(pow(this->getX2() - this->getX(), 2) + pow(this->getY2() - this->getY(), 2));
}

void Segmento::imprime(ostream &os) const {
    os << "--- [Segmento] ---" << endl;
    FigBase::imprime(os);
    os << " x2 = " << this->getX2() << " Y2 = " << this->getY2() << endl;
    os << " area = " << this->area() << " perimetro = " << this->perimetro() << endl;
}

void Segmento::le(istream &is) {
    double x2, y2;
    
    FigBase::le(is);

    is >> x2 >> y2;

    this->setX2(x2);
    this->setY2(y2);
}

istream &operator>>(istream &is, Segmento &s) {
    s.le(is);

    return is;
}

ostream &operator<<(ostream &os, const Segmento &s) {
    s.imprime(os);

    return os;
}