// Escreva um programa que permita ao usuário inserir 10 números inteiros em um array.
// O programa deve conter uma função que rotacione os elementos do array para a direita uma vez 
// (o primeiro vai para o segundo, o segundo vai para o terceiro,
// até que o último elemento vai para o primeiro índice).
// Ao final, a função principal (main), deve exibir o array resultante.

#include <iostream>
#include <cmath>

using namespace std;

// 1 4  0, 3
// 2 1  1, 0
// 3 2  2, 1
// 4 3  3, 2


void swap(int * a, int * b) {
	int temp = * a;
	*a = *b;
	*b = temp;
}


void rotaciona (int arr[], int tam){
	swap(arr[0], arr[tam - 1]);
	for (int i = 1; i < tam -1; i++) {
		cout << i << " > " << (i -1) % tam << endl ;
		swap(arr[i], arr[(i - 1) % tam]);
	}
}

int main (){
    int tamanho = 4;
    int array[tamanho];
    int val;

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite um valor (" << i+1 << "/10) : ";
        cin >> val;
        array[i] = val;
    }
    
    rotaciona(array, tamanho);

    for (int i : array) {
        cout << i << endl;
    }

    return 0;
}
