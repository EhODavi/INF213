#ifndef MEDIANA_H
#define MEDIANA_H

#include "MyPriorityQueue.h"

class Mediana {
public:
	void insere(int x);
	int getMediana() const;
private:
	MyPriorityQueue<int> esquerdo;
    MyPriorityQueue<int> direito;
};

#endif