#include <iostream>
#include <map>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

double CRAMedio1(const map<string,double> &CRA) {
    double somaCRA = 0;
    int qtd = 0;

    for(map<string,double>::const_iterator it = CRA.cbegin(); it != CRA.cend(); it++) {
        somaCRA += it->second;
        qtd++;
    }
    
    return somaCRA / (double)qtd;
}

double CRAMedio2(const map<string,double> &CRA) {
    double somaCRA = 0;
    int qtd = 0;

    for(const auto &it:CRA) {
        somaCRA += it.second;
        qtd++;
    }
    
    return somaCRA / (double)qtd;
}

double CRAMedio3(const map<string,double> &CRA) {
    double somaCRA = 0;
    int qtd = 0;
    
    for(const auto &[key,value]:CRA){
        somaCRA += value;
        qtd++;
    }
    
    return somaCRA / (double)qtd;
}

double CRAMedio4(const map<string,double> &CRA) {
    auto functor = [](double valorAtual, const pair<string,double> &atual) {return valorAtual + atual.second;};

    return accumulate(CRA.cbegin(),CRA.cend(),0.0,functor) / (double)CRA.size();
}

void imprime1(const map<string,double> &CRA) {
    for(map<string,double>::const_iterator it = CRA.cbegin(); it != CRA.cend(); it++) cout << it->first << " " << it->second << endl;
}

void imprime2(const map<string,double> &CRA) {
    vector<pair<double,string>> vetor;

    for(map<string,double>::const_iterator it = CRA.cbegin(); it != CRA.cend(); it++) vetor.push_back(make_pair(-it->second,it->first));

    sort(vetor.begin(),vetor.end());

    int size = vetor.size();
    for(int i = 0; i < size; i++) cout << vetor[i].second << " " << -vetor[i].first << endl;
}

int count60(const map<string,double> &CRA) {
    auto functor = [](const pair<string,double> &atual) {return atual.second >= 60.0;};

    return count_if(CRA.cbegin(),CRA.cend(),functor);
}

int main() {
    map<string,double> CRA;
    string nomeAluno;
    double CRAAluno;

    while(cin >> nomeAluno) {
        cin >> CRAAluno;

        CRA[nomeAluno] = CRAAluno;
    }

    cout << "CRAMedio1: " << CRAMedio1(CRA) << endl;
    cout << "CRAMedio2: " << CRAMedio2(CRA) << endl;
    cout << "CRAMedio3: " << CRAMedio3(CRA) << endl;
    cout << "CRAMedio4: " << CRAMedio4(CRA) << endl;

    cout << endl;
    imprime1(CRA);
    cout << endl;

    cout << endl;
    imprime2(CRA);
    cout << endl;

    cout << endl;
    cout << count60(CRA);
    cout << endl;

    return 0;
}