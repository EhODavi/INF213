#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
using namespace std;

//struct: classe onde tudo e' public
//usada aqui por simplicidade...

int main() {
	//strings se comportam basicamente como um vector<char>!
	string st = "Ola, como voces estao?";
	string::iterator newEnd;
	newEnd = remove_if(st.begin(),st.end(),[](char c) {return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';});
	st.resize(newEnd-st.begin()); //"corta" a string para que ela fique com o tamanho correto
	cout << st << endl;
}



