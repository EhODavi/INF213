#include <iostream>

using namespace std;

int main() {
    int N, K, S, V1, V2, I, J;
    string CPF;
    
    cin >> N;

    for(I = 0; I < N; I++) {
        cin >> CPF;

        S = 0;
        K = 10;
        for(J = 0; J < 9; J++) {
            S += (CPF[J] - '0') * K;
            K--;
        }
        
        V1 = (10 * S) % 11;
        
        if(V1 == 10) V1 = 0;
        
        CPF += to_string(V1);

        S = 0;
        K = 11;
        for(J = 0; J < 10; J++) {
            S += (CPF[J] - '0') * K;
            K--;
        }

        V2 = (10 * S) % 11;
        
        if(V2 == 10) V2 = 0;
        
        cout << V1 << V2 << endl;
    }

    return 0;
}