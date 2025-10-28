#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string nome;
	string linha;
	
	cout << "Digite o nome do arquivo: " << endl;
	getline(cin, nome);
	
	ifstream Arquivo(nome);
	
	while ( getline(Arquivo, linha) ) cout << linha << "\n";
}
