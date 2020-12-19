#include "MySet.h"
#include "MyVecNewIterator.h"

int main(int argc, char **argv) {
    int totalPalavras = 0;
    int totalPalavrasUnicas = 0;
    string tipo = argv[1]; 
    string palavra;
    
    if(tipo == "myvec") {
        MyVec<string> palavrasUnicas;
        bool existe;
        
        while(cin >> palavra) {
            existe = false;

            for(int i = 0; i < palavrasUnicas.size(); i++) {
                if(palavrasUnicas[i] == palavra) {
                    existe = true;
                    break;
                }
            }

            if(!existe) palavrasUnicas.push_back(palavra);

            totalPalavras++;
        }

        totalPalavrasUnicas = palavrasUnicas.size();

    } else if(tipo == "myset") {
        MySet<string> palavrasUnicas;
        
        while(cin >> palavra) {
            palavrasUnicas.insert(palavra);

            totalPalavras++;
        }

        totalPalavrasUnicas = palavrasUnicas.size();
    }

    cout << totalPalavras << " " << totalPalavrasUnicas << endl;

    return 0;
}