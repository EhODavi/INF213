#include <iostream>

#include "MyMap.h"

int main() {
    MyMap<string,int> mapa;
    string palavra;
    int n = 0;

    while(cin >> palavra) {
        pair<MyMapIterator<string,int>,bool> resultado = mapa.insert(make_pair(palavra,n));

        if(resultado.second) n++;

        cout << (*(resultado.first)).first << " " << (*(resultado.first)).second << endl;
    }

    return 0;
}