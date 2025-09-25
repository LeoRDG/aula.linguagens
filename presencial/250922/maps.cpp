#include <map>
#include <iostream>

using namespace std;

int main() {
	map <string, int> pessoas;
	
	pessoas["Daniel"] = 31;
	pessoas.insert( {"Vitor", 19} ) ;
	
	
	cout << "tamanho: " << pessoas.size() << endl;
	cout << pessoas["Vitor"] << endl;
	cout << pessoas["Daniel"] << endl;
	
	cout << "Utilizando o for-each em MAPA" << endl;
	for (auto pessoa : pessoas) {
		cout << pessoa.first << " - " << pessoa.second << endl;
	}
	
	return 0;
}