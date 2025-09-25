#include <list>
#include <iostream>

using namespace std;

int main() {
	list<string> frutas = { "uva", "banana", "figo", "abacate"};
	
	/* Não funciona pq lista nao é acessivel por indice
	cout << frutas[0] << endl;
	cout << frutas.at(0) << endl << endl;
	*/
	
	// Laço for-each ("para todos" da estrutura)
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	/* Nao é possivel alterar qualquer um facilmente pos nao sao acessiveis por indice
	cout << frutas.at(2) << endl;
	frutas[2] = "kiwi";
	cout << frutas.at(2) << endl << endl;
	*/
	
	cout << frutas.front() << endl;
	cout << frutas.back() << endl;
	frutas.front() = "tomate";
	frutas.back() = "abacaxi";
	cout << frutas.front() << endl;
	cout << frutas.back() << endl << endl;
	                                     
	cout << "insercao com push_back e push_front" << endl;
	frutas.push_back("morango");         
	frutas.push_front("laranja");         
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	cout << "remocao com pop_back e pop_front" << endl;
	frutas.pop_back();
	frutas.pop_front();
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	cout << "tamanho: " << frutas.size() << endl;
	cout << "Vazia? " << frutas.empty() << endl;
	
	return 0;
}