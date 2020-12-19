#include <iostream>

using namespace std;


// Insira aqui o codigo para a etapa 1....

//Voce pode adicionar includes como o abaixo...
//#include "MyStack.h"

#include "MyStack.h"
#include "MyQueue.h"

void etapa1() {
	MyStack<int> pilha;
	MyQueue<int> fila;
	int n;

	for(int i = 0; i < 6; i++) {
		cin >> n;
		pilha.push(n);
		fila.push(n);
	}

	for(int i = 0; i < 6; i++) {
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << "\n";

	for(int i = 0; i < 6; i++) {
		cout << fila.front() << " ";
		fila.pop();
	}
	cout << "\n";
}

//---------------------------------------

// Insira aqui o codigo para a etapa 2....

bool etapa2Aux() {
	MyStack<char> pilha;
	string s;

	cin.ignore();
	getline(cin,s);

	pilha.push('-');

	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '[' || s[i] == '(' || s[i] == '{')  {
			pilha.push(s[i]);
		} else if(s[i] == ']') {
			if(pilha.top() != '[') return false;
			pilha.pop();
		} else if(s[i] == ')') {
			if(pilha.top() != '(') return false;
			pilha.pop();
		} else if(s[i] == '}') {
			if(pilha.top() != '{') return false;
			pilha.pop(); 
		}
	}
	
	return pilha.size() == 1;
}

void etapa2() {
	if(etapa2Aux()) { 
		cout << "Consistente\n";
	} else {
		cout << "Inconsistente\n";
	}
}

//---------------------------------------

// Na etapa 3 voce deve implementar MyQueue2.h e descomentar os codigos de teste abaixo...


#include "MyQueue2.h"
void etapa3() {
	char operacao;
	MyQueue2<string> q;

	//le um arquivo contendo "comandos" para a fila e aplica-os a fila criada com sua classe...
	while(cin>> operacao) {
		if(operacao=='p') {
			string st;
			cin >> st;
			q.push(st); //insere um novo elemento na sua fila...
		} else if(operacao=='f') {
			cout << q.front() << "\n";
		} else if(operacao=='P') {
			q.pop();
		} else if(operacao=='e') {
			cout << ((q.empty())?"vazia":"cheia") << "\n";
		} else cout << q.size() << "\n";
	}	
}

//---------------------------------------

// Insira aqui o codigo para a etapa 4....

bool etapa4Aux() {
	MyStack<int> s;
	int ct, n, x;

	cin >> n >> x;

	for(int i = 1; i < x; i++) s.push(i);
	ct = x;

	for(int i = 1; i < n; i++) {
		cin >> x;

		if(!s.empty() && x == s.top()) s.pop();
		else if (x > ct) {
			for(int i = ct + 1; i < x; i++) s.push(i);
			ct = x;
		} else if (x < ct) return false;
	}

	return true;
}

void etapa4() {
	if(etapa4Aux()) { 
		cout << "SIM\n";
	} else {
		cout << "NAO\n";
	}
}

//---------------------------------------


int main() {
	int etapa;
	cin >> etapa;
	switch(etapa) {
		case 1:
			cout << "Etapa 1" << endl;
			etapa1();
			break;
		case 2:
			cout << "Etapa 2" << endl;
			etapa2();
			break;
		case 3:
			cout << "Etapa 3" << endl;
			etapa3();
			break;
		case 4:
			cout << "Etapa 4" << endl;
			etapa4();
			break;
	}
}