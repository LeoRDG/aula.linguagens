#include <deque>
#include <iostream>

using namespace std;

int main() {
	deque < string > frutas = {"uva", "banana", "figo", "abacate"};
	
	cout << "Elemento de indice 2" << endl;
	cout << frutas[2] << endl;
	cout << frutas.at(2) << endl << endl;
	
	cout << "Laco for-each mostrando todos os elementos" << endl;
	for (string fruta : frutas) {
	cout << fruta << endl;
	}
	cout << endl;
	
	cout << "alterando o elemento de indice 2" << endl;
	frutas.at(2) = "abacaxi";
	cout << frutas[2] << endl << endl;
	
	cout << "consulta de FRONT e BACK" << endl;
	cout << frutas.front() << endl;
	cout << frutas.back() << endl << endl;
	
	cout << "insercao com PUSH_FRONT e PUSH_BACK" << endl;
	frutas.push_front("laranja");
	frutas.push_back("morango");
	
	for (string fruta : frutas) {
	cout << fruta << endl;
	}
	cout << endl;	
	
	cout << "Tamanho: " << frutas.size() << endl;
	
	cout << "Removendo com POP_FRONT e POP_BACK()" << endl;
	frutas.pop_front();
	frutas.pop_back();
	
	for (string fruta : frutas) {
	cout << fruta << endl;
	}
	cout << "Tamanho: " << frutas.size() << endl;
	
	return 0;
}