#ifndef MyQueue2_H__
#define MyQueue2_H__

#include <iostream>

#include "MyStack.h"

using namespace std;

template<class T>
class MyQueue2 {
public:
	MyQueue2();
	void push(const T&el);
	const T front(); //Nesta implementacao vamos permitir retorno por copia...
	void pop();
	bool empty();
	int size();
private:
	MyStack<T> pilha1; //nao mude nada nessa interface!!!
	MyStack<T> pilha2; //nao mude nada nessa interface!!!
};


/* Faca sua implementacao abaixo desta linha...*/
/* Faca sua implementacao abaixo desta linha...*/
/* Faca sua implementacao abaixo desta linha...*/
/* Faca sua implementacao abaixo desta linha...*/

template<class T>
MyQueue2<T>::MyQueue2() {}

template<class T>
void MyQueue2<T>::push(const T&el) {	
	pilha1.push(el);
}

template<class T>
const T MyQueue2<T>::front() {	
	if(pilha2.empty()) {
		while(!pilha1.empty()) {
			pilha2.push(pilha1.top());
			pilha1.pop();
		}	
	}
	
	return pilha2.top();
}

template<class T>
void MyQueue2<T>::pop() {
	if(pilha2.empty()) {
		while(!pilha1.empty()) {
			pilha2.push(pilha1.top());
			pilha1.pop();
		}	
	}
	
	pilha2.pop();
}

template<class T>
bool MyQueue2<T>::empty() {
	return pilha1.empty() && pilha2.empty();
}

template<class T>
int MyQueue2<T>::size() {
	return pilha1.size() + pilha2.size();
}

#endif