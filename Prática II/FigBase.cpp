#include "FigBase.h"

FigBase::FigBase(const double x, const double y, const int espessura, const int cor, const int tipo): x(x), y(y) {
    this->setEspessura(espessura);
    this->setCor(cor);
    this->setTipo(tipo);
}

double FigBase::getX() const {
    return this->x;
}

void FigBase::setX(const double x) {
    this->x = x;
}

double FigBase::getY() const {
    return this->y;
}

void FigBase::setY(const double y) {
    this->y = y;
}

int FigBase::getEspessura() const {
    return this->espessura;
}

void FigBase::setEspessura(const int espessura) {
    this->espessura = (espessura < 1 || espessura > 5) ? 1 : espessura;
}

int FigBase::getCor() const {
    return this->cor;
}

void FigBase::setCor(const int cor) {
    this->cor = (cor < 1 || cor > 5) ? 1 : cor;
}

int FigBase::getTipo() const {
    return this->tipo;
}

void FigBase::setTipo(const int tipo) {
    this->tipo = (tipo < 1 || tipo > 3) ? 1 : tipo;
}

void FigBase::imprime(ostream &os) const {
    os << " Atributos da linha: " << endl;
    os << "     Espessura = " << this->getEspessura() << endl;
    os << "     Cor       = " << this->getCor() << endl;
    os << "     Tipo      = " << this->getTipo() << endl;
    os << " x = " << this->getX() << " y = " << this->getY() << endl;
}

void FigBase::le(istream &is) {
    double x, y;
    int espessura, cor, tipo;

    is >> x >> y >> espessura >> cor >> tipo;

    this->setX(x);
    this->setY(y);
    this->setEspessura(espessura);
    this->setCor(cor);
    this->setTipo(tipo);
}