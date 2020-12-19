#include "Retangulo.h"

Retangulo::Retangulo(const double x, const double y, const double largura, const double altura, const int espessura, const int cor, const int tipo): FigBase(x, y, espessura, cor, tipo), largura(largura), altura(altura) {}

double Retangulo::getLargura() const {
    return this->largura;
}

void Retangulo::setLargura(const double largura) {
    this->largura = largura;
}

double Retangulo::getAltura() const {
    return this->altura;
}

void Retangulo::setAltura(const double altura) {
    this->altura = altura;
}

float Retangulo::area() const {
    return this->getAltura() * this->getLargura();     
}      
          
float Retangulo::perimetro() const {
    return 2 * (this->getLargura() + this->getAltura());      
}

void Retangulo::imprime(ostream &os) const {
    os << "--- [Retangulo] ---" << endl;
    FigBase::imprime(os);
    os << " largura = " << this->getLargura() << " altura = " << this->getAltura() << endl;  
    os << " area = " << this->area() << " perimetro = " << this->perimetro() << endl; 
}

void Retangulo::le(istream &is) {
    double largura, altura;
    
    FigBase::le(is);

    is >> largura >> altura;
    
    this->setLargura(largura);
    this->setAltura(altura);
}

istream &operator>>(istream &is, Retangulo &r) {
    r.le(is);

    return is;
}

ostream &operator<<(ostream &os, const Retangulo &r) {
    r.imprime(os);

    return os;
}