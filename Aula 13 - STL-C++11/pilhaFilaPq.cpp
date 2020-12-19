#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <map>
#include <stack>
#include <queue>
#include <fstream>
using namespace std;



int main(int argc, char **argv) {	
	queue<int> q; //cria uma fila...
	q.push(15);
	q.push(20);
	q.push(1);
	while(!q.empty()) { //imprime 15,20,1
		cout << q.front() << endl;
		q.pop();
	}
	stack<int> s;
	s.push(15);
	s.push(20);
	s.pop(); //remove 20...
	s.push(1);
	s.push(30);
	while(!s.empty()) { //imprime 30,1,15
		cout << s.top() << endl;
		s.pop();
	}	
	priority_queue<int> pq;
	pq.push(15);
	pq.push(20);
	pq.push(1);
	while(!pq.empty()) { //imprime 20,15,1
		cout << pq.top() << endl;
		pq.pop();
	}	
	priority_queue<int, vector<int>, greater<int> > pq2; //1,15,20
	pq2.push(15);
	pq2.push(20);
	pq2.push(1);
	while(!pq2.empty()) { //imprime 20,15,1
		cout << pq2.top() << endl;
		pq2.pop();
	}
}



