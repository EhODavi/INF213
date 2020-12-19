#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

int main() {
	vector<int> v;
	for(int i=0;i<6;i++) v.push_back(i+1);
	
	cout << "Soma dos 6 elementos: " << accumulate(v.begin(),v.end(),0) << endl;
	cout << "Soma de metade do array menos a soma da outra metade: " 
		<< accumulate(v.begin(),v.begin()+v.size()/2,0)-accumulate(v.begin()+v.size()/2,v.end(),0) << endl;
	cout << "Produtorio: " << accumulate(v.begin(),v.end(),1,multiplies<int>()) << endl;

	vector<double> v2(2,1.5); //v2 = {1.5,1.5}
	cout << "Soma dos 2 elementos: " << accumulate(v2.begin(),v2.end(),0) << endl; //atencao! saida: 2
	cout << "Soma dos 2 elementos: " << accumulate(v2.begin(),v2.end(),0.) << endl; //saida: 3
}



