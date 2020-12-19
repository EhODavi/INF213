#ifndef MY_SET_LIST_H
#define MY_SET_LIST_H

#include <algorithm> //classe pair esta aqui...
using namespace std;

template<class T>
class MySetIterator;

template  <class T>
class Node {
	public: //classe auxiliar.. vamos utiliza-la apenas neste arquivo (nao e' muito necessario ter encapsulamento)
		Node(const T &elem_) : elem(elem_),left(NULL), right(NULL) , parent(NULL) {}
		Node<T> *left, *right;
		Node<T> *parent;
		T elem;
};

template  <class T>
class MySet {

public:
	typedef MySetIterator<T> iterator;
	int size() const;
	MySet() : size_(0), root(NULL) {}

	pair<iterator,bool> insert(const T&elem); //retorna um iterador para o elemento inserido (o valor booleano sera' true se o elemento nao existia no conjunto e falso caso ele ja exista (ou seja, o novo elemento nao foi inserido) ).
	iterator find(const T&elem); //por simplicidade, nao vamos deixar implementar um find constante...

	iterator end() {return iterator(NULL);}; //por enquanto nao vamos ter um metodo "begin()"
	iterator begin() ;

	MySet(const MySet &other);
	MySet &operator=(const MySet &other);
	~MySet();

	void imprimeBFS() const;
	void imprimeDFS_pre() const;
	void imprimeDFS_in() const;
	void imprimeDFS_pos() const;
private:
	Node<T> *root;
	int size_;


	//funcoes auxiliares...
	pair<iterator,bool> insert(const T&elem, Node<T> *&root, Node<T> *parent); 
	iterator find(const T&elem, Node<T> *root);

	void deleteNodes(Node<T> *root);
	Node<T> * copyNodes(const Node<T> *root, Node<T> *parentOfCopy) const;

	void imprimeDFS_pre(const Node<T> *root) const;
	void imprimeDFS_in(const Node<T> *root) const;
	void imprimeDFS_pos(const Node<T> *root) const;
};




//por enquanto vamos desconsiderar os operadores ++ e -- em conjuntos...
//tais operadores serao "escondidos"
template<class T>
class MySetIterator {
	friend class MySet<T>;
public:
	MySetIterator(Node<T> *ptr_): ptr(ptr_) { }
	T &operator*() {return ptr->elem;}

	bool operator==(const MySetIterator &other) const {return ptr==other.ptr;}
	bool operator!=(const MySetIterator &other) const {return ptr!=other.ptr;}

	MySetIterator operator++();
private:
	Node<T> *ptr;
};

template  <class T>
MySetIterator<T> MySetIterator<T>::operator++() {
	if(ptr->right ==NULL) {
		if(!ptr->parent || ptr->parent->left == ptr)
			ptr = ptr->parent;
		else {
			while(ptr->parent && ptr == ptr->parent->right)
				ptr = ptr->parent;
			ptr = ptr->parent;
		}
	} else {
		ptr = ptr->right;
		while(ptr->left) ptr = ptr->left;
	}
	return *this;
}

template  <class T>
MySet<T>::MySet(const MySet &other) {
	size_=0;
	root= NULL;
	*this = other; //vamos usar o operador de atribuicao..
}


template  <class T>
void MySet<T>::deleteNodes(Node<T> *root) {
	if(!root) return;
	deleteNodes(root->left);
	deleteNodes(root->right);
	delete root;
}

template  <class T>
MySet<T>::~MySet() {
	deleteNodes(root);
}


template  <class T>
typename MySet<T>::iterator MySet<T>::begin() {
	Node<T> *ptr = root;
	if(!root) return end();
	while(ptr->left) ptr = ptr->left;
	return iterator(ptr);
}


template  <class T>
Node<T> * MySet<T>::copyNodes(const Node<T> *root, Node<T> *parentOfCopy) const {
	if(root==NULL) { //caso base
		return NULL;
	}
	Node<T> *  ans = new Node<T>(root->elem);
	ans->parent = parentOfCopy;

	ans->left = copyNodes(root->left,ans);
	ans->right = copyNodes(root->right,ans);

	return ans;
}

template  <class T>
MySet<T> & MySet<T>::operator=(const MySet &other,NULL) {
	if(this==&other) return *this; //testa auto-atribuicao...
	deleteNodes(root);
	root = copyNodes(other.root);
	size_ = other.size_;
	return *this;
}


template  <class T>
int MySet<T>::size() const {
	return size_; //exercicio: como calcular o tamanho de forma dinamica? (i.e., sem armazenar o inteiro "size" na classe)
}


//funcao auxiliar...
//exercicio: por que a raiz precisa ser passada por referencia?
template  <class T>
pair<typename MySet<T>::iterator,bool> MySet<T>::insert(const T&elem, Node<T> * &root, Node<T> *parent) { //retorna um iterador para o elemento inserido (o valor booleano sera' true se o elemento nao existia no conjunto e falso caso ele ja exista (ou seja, o novo elemento nao foi inserido) ).
	if(!root) {
		root = new Node<T>(elem);
		root->parent = parent;
		size_++;
		return make_pair(iterator(root),true);
	} else {
		if(root->elem > elem) return insert(elem, root->left,root);
		else if (root->elem < elem) return insert(elem, root->right, root);
		else return make_pair(iterator(root),false);//igual..
	}
}

template  <class T>
pair<typename MySet<T>::iterator,bool> MySet<T>::insert(const T&elem) { //retorna um iterador para o elemento inserido (o valor booleano sera' true se o elemento nao existia no conjunto e falso caso ele ja exista (ou seja, o novo elemento nao foi inserido) ).
	return insert(elem,root,NULL);
}



//funcao auxiliar...
template  <class T>
typename MySet<T>::iterator MySet<T>::find(const T&elem, Node<T> *root) { //retorna um iterador para o elemento inserido (o valor booleano sera' true se o elemento nao existia no conjunto e falso caso ele ja exista (ou seja, o novo elemento nao foi inserido) ).
	if(!root) {		
		return iterator(NULL);
	} else {
		if(root->elem > elem) return find(elem, root->left);
		else if (root->elem < elem) return find(elem, root->right);
		else return iterator(root);//igual..
	}
}


template  <class T>
typename MySet<T>::iterator MySet<T>::find(const T&elem) {
	return find(elem,root);
}




#include "MyQueue.h"

/*
template  <class T>
void MySet<T>::imprimeBFS() const { //um nivel por vez..
	MyQueue<Node<T> *> q;
	MyQueue<Node<T> *> u;
	if(!root) return;
	u.push(root);

	int nivel = 0;
	while(!u.empty()) {
		q = u;
		u = MyQueue<Node<T> *>();

		cout <<  "Nivel " << nivel++ << " : ";
		while(!q.empty()) {
			Node<T> * p = q.front();
			q.pop();
			cout << p->elem << " ";
			if(p->left) u.push(p->left);  
			if(p->right) u.push(p->right);
		}
		cout << endl;
	}
	
}*/
/*

template  <class T>
void MySet<T>::imprimeBFS() const {
	MyQueue<Node<T> *> q;
	if(!root) return;
	q.push(root);

	while(!q.empty()) {
		Node<T> * p = q.front();
		q.pop();
		cout << p->elem << " ";
		if(p->left) q.push(p->left);  
		if(p->right) q.push(p->right);
	}
}*/




template <class T>
void MySet<T>::imprimeBFS() const {
	cout << "Imprimindo BFS" << endl;
	MyQueue<pair<const Node<T> *,int> > q;
	q.push(make_pair(root,0) );

	int nivelAtual = -1;
	while(!q.empty()) {
		pair<const Node<T> *,int> p = q.front();
		q.pop();
		
		int nivel = p.second;
		if(nivel!=nivelAtual) {
			cout << "\n";
			cout << "Nivel " << nivel << " :";
			nivelAtual = nivel;
		}
		cout << p.first->elem << ",";
		if(p.first->left) 
			q.push(make_pair(p.first->left,p.second+1));
		if(p.first->right) 
			q.push(make_pair(p.first->right,p.second+1));
	}

}




template  <class T>
void MySet<T>::imprimeDFS_pre(const Node<T> *p) const {
	if(!p) return;
	cout << p->elem << " ";
	imprimeDFS_pre(p->left);
	imprimeDFS_pre(p->right);
} 

template  <class T>
void MySet<T>::imprimeDFS_in(const Node<T> *p) const {
	if(!p) return;	
	imprimeDFS_in(p->left);
	cout << p->elem << " ";
	imprimeDFS_in(p->right);
} 


template  <class T>
void MySet<T>::imprimeDFS_pos(const Node<T> *p) const {
	if(!p) return;
	imprimeDFS_pos(p->left);
	imprimeDFS_pos(p->right);
	cout << p->elem << " ";
} 


template  <class T>
void MySet<T>::imprimeDFS_pre() const {
	imprimeDFS_pre(root);
}

template  <class T>
void MySet<T>::imprimeDFS_in() const {
	imprimeDFS_in(root);
}

template  <class T>
void MySet<T>::imprimeDFS_pos() const {
	imprimeDFS_pos(root);
}





#endif