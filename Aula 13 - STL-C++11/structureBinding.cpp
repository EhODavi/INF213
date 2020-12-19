#include <iostream>
#include <map>
#include <array>
#include <vector>
using namespace std;

array<int,3> funcao() {
	return {1,2,3};
}

int main() {
	const auto &[a,b,c] = funcao();
	//auto &[a,b,c] = funcao(); --> erro...
	//const auto &[a,b,c] = funcao(); --> ok
	cout << a << " " << b << " " << c << "\n";

	array<int,2> elementos = {10,20};
	{
		auto [e1,e2] = elementos;
		e1 = 0;
		cout << elementos[0] << " " << elementos[1] << "\n";
	}
	{
		auto &[e1,e2] = elementos;
		e1 = 0;
		cout << elementos[0] << " " << elementos[1] << "\n";
	}



	map<string,int> m;
	m["ab"] = 10;
	m["teste"] = 100;
	m["ufv"] = 1234;

	//a funcao insert de map retorna um par contendo um iterador e um bool
	//podemos desmembra-lo...
	const auto &[it,ok] = m.insert(make_pair("ab",2));
	cout << it->second << " " << ok << endl;

	const auto &[it2,ok2] = m.insert(make_pair("ww",2));
	cout << it2->second << " " << ok2 << endl;

	auto &[chave,valor] = *m.begin();
	cout << chave << " " << valor << "\n";

	for(map<string,int>::const_iterator it = m.begin();it!=m.end();it++) {
		cout << it->first << " " << it->second << "\n";
	}
	cout << endl;
	for(const auto &[chave,valor]:m) cout << chave << " " << valor << "\n";

	vector<pair<string,int> > v(m.begin(),m.end());
	for(const auto &[f,s]:v) cout << f << " " << s << "\n";

}