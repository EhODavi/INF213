#include "Horario.h"

Horario::Horario(const int h, const int m, const int s) {
    this->setHora(h);
    this->setMinuto(m);
    this->setSegundo(s);
}

Horario::Horario(const Horario &hr): hora(hr.getHora()), minuto(hr.getMinuto()), segundo(hr.getSegundo()) {}

void Horario::setHora(int h) {
    if (h < 0) h = 0;
    if (h > 23) h = 23;

    this->hora = h;
}

void Horario::setMinuto(int m) {
    if (m < 0) m = 0;
    if (m > 59) m = 59;

    this->minuto = m;
}

void Horario::setSegundo(int s) {
    if (s < 0) s = 0;
    if (s > 59) s = 59;

    this->segundo = s;
}

int Horario::getHora() const {
    return this->hora;
}

int Horario::getMinuto() const {
    return this->minuto;
}

int Horario::getSegundo() const {
    return this->segundo;
}

int Horario::difSegundos(const Horario &hms) const {
    return (this->getHora() - hms.getHora()) * 3600 + (this->getMinuto() - hms.getMinuto()) * 60 + (this->getSegundo()- hms.getSegundo());
}

int Horario::compHorario(const Horario &hms) const {
    if (this->difSegundos(hms) > 0) return 1;
    if (this->difSegundos(hms) == 0) return 0;

    return -1;
}

void Horario::imprime() const {
    cout << *this;
}

istream& operator>>(istream &is, Horario &h) {
    int hora;
    int minuto;
    int segundo;

    is >> hora >> minuto >> segundo;

    h.setHora(hora);
    h.setMinuto(minuto);
    h.setSegundo(segundo);

    return is;
}

ostream& operator<<(ostream &os, const Horario &h) {
    os << h.getHora() << " " << h.getMinuto() << " " << h.getSegundo();

    return os;
}