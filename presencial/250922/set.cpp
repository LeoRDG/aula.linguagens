#include <set>
#include <iostream>

using namespace std;

int main() {
	// set <int> conjunto = {1, 2, 90, 1, 4, 5};
	// Ordem descendente
	set <int, greater<int> > conjunto = {1, 2, 90, 1, 4, 5};
	
	cout << "tamanho: " << conjunto.size() << endl;
	
	cout << "laco for-each para mostrar todos os elementos" << endl;
	for(int elemento : conjunto) {
		cout << elemento << endl;
	}
	
	conjunto.insert(2);
	cout << "tamanho: " << conjunto.size() << endl;
	conjunto.insert(3);
	cout << "tamanho: " << conjunto.size() << endl;
	
	cout << "laco for-each para mostrar todos os elementos" << endl;
	for(int elemento : conjunto) {
		cout << elemento << endl;
	}
	
	
	cout << "remocao de um elemento" << endl;
	conjunto.erase(90);
	
	cout << "tamanho: " << conjunto.size() << endl;
	cout << "laco for-each para mostrar todos os elementos" << endl;
	for(int elemento : conjunto) {
		cout << elemento << endl;
	}
	
	
	return 0;
}