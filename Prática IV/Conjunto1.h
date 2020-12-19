#ifndef CONJUNTO1_H
#define CONJUNTO1_H

#include <iostream>

using namespace std;

template <class T>
class Conjunto;

template <class T>
ostream &operator<<(ostream &os, const Conjunto<T> &c);

template <class T>
istream &operator>>(istream &is, Conjunto<T> &c);

template <class T>
class Conjunto {    
    friend ostream& operator<< <T>(ostream &os, const Conjunto<T> &c);
    friend istream& operator>> <T>(istream &is, Conjunto<T> &c);
public:
    Conjunto(int tamanho = 10);
    Conjunto(const Conjunto<T> &c);
    ~Conjunto();
    bool pertence(const T &elemento) const;
    bool insere(const T &elemento);
    int numelementos() const;
    bool operator==(const Conjunto<T> &c) const;
    Conjunto<T> & operator=(const Conjunto<T> &c);
private:
    T *elementos;
    int num_elementos;
    int tam_array;
};

template <class T>
ostream& operator<<(ostream &os, const Conjunto<T> &c) {
    os << "{";

    if (c.num_elementos > 0) {
        os << c.elementos[0];
        for (int i = 1; i < c.num_elementos; i++) {
            os << "," << c.elementos[i];
        }
    }
    
    os << "}";
    
    return os;
}

template <class T>
istream& operator>>(istream &is, Conjunto<T> &c) {
    T elementoLido;
    
    while(is >> elementoLido) {
        c.insere(elementoLido);
    }

    return is;
}

template <class T>
Conjunto<T>::Conjunto(int tamanho): tam_array(tamanho) {
    elementos = new T[tamanho];
    num_elementos = 0;
}

template <class T>
Conjunto<T>::Conjunto(const Conjunto<T> &c) {
    elementos = NULL;
	*this = c;
}

template <class T>
Conjunto<T>::~Conjunto() {
    delete []elementos;
}

template <class T>
bool Conjunto<T>::pertence(const T &elemento) const {
    for(int i = 0; i < num_elementos; i++) {
        if (elementos[i] == elemento) return true;
    }
    return false;
}

template <class T>
bool Conjunto<T>::insere(const T &elemento) {
    if (pertence(elemento)) return false;
    if (num_elementos == tam_array) return false;

    elementos[num_elementos] = elemento;
    num_elementos++;

    return true;
}

template <class T>
int Conjunto<T>::numelementos() const {
    return num_elementos;
}

template <class T>
bool Conjunto<T>::operator==(const Conjunto<T> &c) const {
    if (num_elementos != c.num_elementos) return false;

    for (int i = 0; i < num_elementos; i++) {
        if (!pertence(c.elementos[i])) return false;
    }

    return true;
}

template <class T>
Conjunto<T> & Conjunto<T>::operator=(const Conjunto<T> &c) {
    if (&c == this) return *this;
	delete []elementos;
    num_elementos = c.num_elementos;
    tam_array = c.tam_array;
	elementos = new T[tam_array];
	for(int i = 0; i < num_elementos; i++) elementos[i] = c.elementos[i];
	return *this;
}

#endif