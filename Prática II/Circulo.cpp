#include "Circulo.h"

const float PI = 3.141592653589;

Circulo::Circulo(const double x, const double y, const double raio, const int espessura, const int cor, const int tipo): FigBase(x, y, espessura, cor, tipo), raio(raio) {}

double Circulo::getRaio() const {
    return this->raio;
}

void Circulo::setRaio(const double raio) {
    this->raio = raio;
}

float Circulo::area() const {
    return PI * this->getRaio() * this->getRaio();    
}      
          
float Circulo::perimetro() const {
    return 2 * PI * this->getRaio();      
}

void Circulo::imprime(ostream &os) const {
    os << "--- [Circulo] ---" << endl;
    FigBase::imprime(os);
    os << " raio = " << this->getRaio() << endl; 
    os << " area = " << this->area() << " perimetro = " << this->perimetro() << endl; 
}

void Circulo::le(istream &is) {
    double raio;

    FigBase::le(is);

    is >> raio;

    this->setRaio(raio);
}

istream &operator>>(istream &is, Circulo &c) {
    c.le(is);

    return is;
}

ostream &operator<<(ostream &os, const Circulo &c) {
    c.imprime(os);

    return os;
}