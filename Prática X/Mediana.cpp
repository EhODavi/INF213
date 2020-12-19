#include "Mediana.h"

void Mediana::insere(int x) {
	if(esquerdo.size() == 0) esquerdo.push(x);
	else if(esquerdo.size() > direito.size()) {
		//Temos que colocar no lado direito
		if(x >= esquerdo.top()) direito.push(-x);
		else {
			direito.push(-esquerdo.top());
			esquerdo.pop();
			esquerdo.push(x);
		}
	} else if(direito.size() > esquerdo.size()) {
		//Temos que colocar no lado esquerdo
		if(x <= -direito.top()) esquerdo.push(x);
		else {
			esquerdo.push(-direito.top());
			direito.pop();
			direito.push(-x);
		}
	} else if(esquerdo.size() == direito.size()) {
		// Escolher um dos lados
		if(x <= esquerdo.top()) esquerdo.push(x);
		else direito.push(-x);
	}
}

int Mediana::getMediana() const {
	if(esquerdo.size() == direito.size()) return (esquerdo.top() - direito.top()) / 2;
	else if(esquerdo.size() > direito.size()) return esquerdo.top();
	
	return -direito.top();
}