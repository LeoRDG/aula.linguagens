#include <stack>
#include <iostream>

using namespace std;

int main() {
	/* Nao pode inserir elementos na criacao
	list<string> frutas = { "uva", "banana", "figo", "abacate"};
	*/
	
	stack<string> frutas;
	frutas.push("uva");
	frutas.push("banana");
	frutas.push("figo");
	frutas.push("abacate");
	
	// remocao somente com POP (elemento do topo)
	frutas.pop();
	cout << frutas.top() << endl;
	
	
	/* Não funciona pq pilha nao é acessivel por indice
	cout << frutas[0] << endl;
	cout << frutas.at(0) << endl << endl;
	*/
	
	
	/* Não funciona em pilhas
	cout << frutas.front() << endl;
	cout << frutas.back() << endl;
	*/
	
	/* Nao tem acesso ao for-each
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	*/
	
	cout << "tamanho: " << frutas.size() << endl;
	cout << "Vazia? " << frutas.empty() << endl;
	
	return 0;
}