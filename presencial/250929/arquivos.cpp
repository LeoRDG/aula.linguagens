#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// Criação de um arquivo de saida de nome "teste.txt"
	ofstream arquivo("teste.txt");
	
	arquivo << "ALGUNS DADOS" << "\n";
	arquivo << 12345 << "\n";
	arquivo << 2.768 << "\n";
	
	arquivo.close();
	return 0;
}