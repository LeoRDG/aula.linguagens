#include <vector> 
#include <iostream>

using namespace std;

int main() {
	vector<string> frutas = { "uva", "banana", "figo", "abacate"};
	
	cout << frutas.at(0) << endl << endl;
	
	// Laço for-each ("para todos" da estrutura)
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	cout << frutas.at(2) << endl;
	frutas[2] = "kiwi";
	cout << frutas.at(2) << endl << endl;
	                                     
	cout << "insercao com push_back" << endl;
	frutas.push_back("morango");         
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	cout << "remocao com pop_back" << endl;
	frutas.pop_back();
	for (string fruta : frutas) {
		cout << fruta << endl;
	}
	cout << endl;
	
	cout << "tamanho: " << frutas.size() << endl;
	cout << "Vazia? " << frutas.empty() << endl;
	
	return 0;
}