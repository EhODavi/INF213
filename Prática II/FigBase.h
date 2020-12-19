#ifndef FIGBASE_H
#define FIGBASE_H

#include <iostream>

using namespace std;

class FigBase {
    public:
        FigBase(const double x, const double y, const int espessura, const int cor, const int tipo);
        double getX() const;
        void setX(const double x);
        double getY() const;
        void setY(const double y); 
        int getEspessura() const;
        void setEspessura(const int espessura);
        int getCor() const;
        void setCor(const int cor);
        int getTipo() const;
        void setTipo(const int tipo);
        void imprime(ostream &os) const;
        void le(istream &is);
    private:
        double x, y;
        int espessura; // inteiro entre 1 e 5, sendo que 1 indica a linha mais fina e 5 a mais grossa;
        int cor; // inteiro entre 1 e 5, sendo que: 1 = preta; 2 = vermelha; 3 = verde; 4 = azul; 5 = amarela;
        int tipo; // inteiro entre 1 e 3, sendo que 1 = contínua; 2 = tracejada; 3 = pontilhada
};

#endif