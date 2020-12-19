#include "Conjunto2.h"

int main(int argc, char **argv) {
    if (argc <= 1) {
        exit(1);
    }

    int n = atoi(argv[1]);

    Conjunto<int> A(n);
    Conjunto<int> B(n);

    for (int i = 1; i <= n; i++) {
        A.insere(i);
        B.insere(-i);
    }

    Conjunto<int> C = A + B;

    cout << C.pertence(10) << endl;
    
    return 0;
}