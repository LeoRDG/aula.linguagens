// A EHEV (Erechim Hybrid and Electrical Vehicles) está lançando seus veículos no mercado. 
// É possível escolher entre três modelos base: A, B e C. 
// O modelo A tem 3 opções de bateria: X, Y e Z. Os modelos B e C tem apenas 2 opções: Y e Z.
// O modelo A pode ser configurado com rodas de aro tamanho 14 e 15.
// O modelo B, apenas tamanho 16.
// O modelo C, podem ser 15 ou 16.
// Escreva um programa que leia as 3 características, modelo (char), bateria (char) e roda (int).
// Dadas as restrições descritas, informe se o carro a ser fabricado é VALIDO ou INVALIDO

#include <iostream>

using namespace std;

int main() {
	char modelo, bateria;
	int roda;
	
	cout << "Informe o modelo: (A, B, C)" << endl;
	cin >> modelo;
	
	cout << "Informe a bateria (X, Y, Z)" << endl;
	cin >> bateria;
	
	cout << "Informe o aro da roda (14, 15, 16)" << endl;
	cin >> roda;
	
	bool valido = true;
	
	switch (modelo) {
		case 'A':
			switch (bateria) {
				case 'X':
				case 'Y':
				case 'Z':
					break;
				default:
					valido = false;
			}	
			switch (roda) {
				case 14:
				case 15:
					break;
				default:
					valido = false;
			}
			break;
			
		case 'B':
			switch (bateria) {
				case 'Y':
				case 'Z':
					break;
				default:
					valido = false;
			}
			switch (roda) {
				case 16:
					break;
				default:
					valido = false;
			}
			break;
			
		case 'C':
			switch (bateria) {
				case 'Y':
				case 'Z':
					break;
				default:
					valido = false;
			}
			switch (roda) {
				case 15:
				case 16:
					break;
				default:
					valido = false;
			}
			break;
		
		default:
			valido = false;
	}
	
	if (valido) {
		cout << "VALIDO";
	} else {
		cout << "INVALIDO";
	}
	
    return 0;
}