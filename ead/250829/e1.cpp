// Escreva uma função que receba como parâmetro um número inteiro, no intervalo de 1 a 20,
// e retorne uma String correspondente ao número por extenso.
// Caso o número seja menor que 1 ou maior que 20, o método deve retornar o texto “inválido”.

#include <iostream>
using namespace std;

string func(int num){
	switch (num) {
		case 1:
			return "Um";
			break;
	
		case 2:
			return "Dois";
			break;
	
		case 3:
			return "Tres";
			break;
	
		case 4:
			return "Quatro";
			break;
	
		case 5:
			return "Cinco";
			break;
	
		case 6:
			return "Seis";
			break;
	
		case 7:
			return "Sete";
			break;
	
		case 8:
			return "Oito";
			break;
	
		case 9:
			return "Nove";
			break;
		case 10:
			return "Dez";
			break;
	
		case 11:
			return "Onze";
			break;
	
		case 12:
			return "Doze";
			break;
	
		case 13:
			return "Treze";
			break;
	
		case 14:
			return "Quatorze";
			break;
	
		case 15:
			return "Quinze";
			break;
	
		case 16:
			return "Dezesseis";
			break;
	
		case 17:
			return "Dezessete";
			break;
	
		case 18:
			return "Dezoito";
			break;
	
		case 19:
			return "Dezenove";
			break;
		case 20:
			return "Vinte";
			break;
		default:
			return "invalido";
	}
}

int main(){
	cout << func(16);
	
	return 0;
	
} 
