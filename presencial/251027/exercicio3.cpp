#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string nome;
	int qtd_linhas = 1;
	int qtd_espacos = 0;
	int qtd_virgulas = 0;
	int qtd_letras_numeros = 0;
	char atual;
	
	cout << "Digite o nome do arquivo: " << endl;
	getline(cin, nome);
	
	ifstream Arquivo(nome);
	
	if (!Arquivo.is_open()){
		cout << "Arquivo nao encontrado";
		return
	}
	
	while ( !Arquivo.eof() ) {
		atual = (char) Arquivo.get();
		if (atual == '\n') qtd_linhas++;
		else if (atual == ' ')  qtd_espacos++;
		else if (atual == ',')  qtd_virgulas++;
		else if ((atual >= 48 and atual <= 57)  or
			(atual >= 65 and atual <= 90)  or
			(atual >= 97 and atual <= 122)) {
			qtd_letras_numeros++;
		}
	}
	
	cout << "qtd_linhas: " << qtd_linhas << endl;
	cout << "qtd_espacos: " << qtd_espacos << endl;
	cout << "qtd_virgulas: " << qtd_virgulas << endl;
	cout << "qtd_letras_numeros: " << qtd_letras_numeros << endl;
	
	Arquivo.close();
}
