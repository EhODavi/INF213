#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>

using namespace std;

class Horario {
    public:
        Horario(const int h = 0, const int m = 0, const int s = 0);
        Horario(const Horario &hr);
        void setHora(int h);
        void setMinuto(int m);
        void setSegundo(int s);
        int getHora() const;
        int getMinuto() const;
        int getSegundo() const;
        int difSegundos(const Horario &hms) const;
        int compHorario(const Horario &hms) const;
        void imprime() const;
        friend istream &operator>>(istream &is, Horario &h);
        friend ostream &operator<<(ostream &os, const Horario &h);
    private:
        int hora;
        int minuto;
        int segundo;
};

istream &operator>>(istream &is, Horario &h);
ostream &operator<<(ostream &os, const Horario &h);

#endif