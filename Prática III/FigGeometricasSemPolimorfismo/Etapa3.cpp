#include <iostream>

#include "FigBase.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "Segmento.h"

using namespace std;

int main() {

    Circulo c1;
    Circulo c2;
    Retangulo r1;
    Segmento s1;
    Segmento s2;
    
    FigBase *p[5];

    p[0] = &c1;
    p[1] = &c2;
    p[2] = &r1;
    p[3] = &s1;
    p[4] = &s2;

    cout << "-----------------------------------\n";
    cout << "           Lendo os valores        \n";
    cout << "-----------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cin >> *p[i];
        cout << "-----------------------------------\n";
    }

    cout << "-----------------------------------\n";
    cout << "           Imprimindo os valores   \n";
    cout << "-----------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << *p[i];
        cout << "-----------------------------------\n";
    }

    return 0;
}