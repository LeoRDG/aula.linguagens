// Escreva uma funcao que receba um array de inteiros e inverta a posição dos valores;
// da 0 oara n-1, 1 para n-2, e assim por diante

#include <iostream>

using namespace std;

void inverte (int arr[], int tam) {
	
	int temp;
	for (int i = 0; i < tam/2; i++){
		temp = arr[i];
		arr[i] = arr[tam - i - 1];
		arr[tam - i - 1] = temp;
	}
	
}

int main(){
	int vetor[] = {10, 2, 3, 4, 90, 23, 0};
	inverte (vetor, 7);
	
	for (int i = 0 ; i < 7; i++) {
		cout << vetor[i] << ", ";
	}

	return 0;
}