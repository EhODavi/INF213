#include <iostream>
#include "MySet.h"

int main() {
    MySet<int> numeros;
    char opcao;
    int n;

    while(cin >> opcao) {
        cin >> n;

        if(opcao == 'C') numeros.insert(n);
        else {
            MySet<int>::iterator it = numeros.find(n);
            if(it != numeros.end()) {
                it++;
                if(it != numeros.end()) cout << *it << endl;
                else cout << "FALHA" << endl;
            } else cout << "FALHA" << endl;
        }
    }

    return 0;
}