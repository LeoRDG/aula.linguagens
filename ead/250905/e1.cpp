// Escreva um programa que permita ao usuário inserir 10 números inteiros em um array.
// O programa deve conter uma função que rotacione os elementos do array para a direita uma vez 
// (o primeiro vai para o segundo, o segundo vai para o terceiro,
// até que o último elemento vai para o primeiro índice).
// Ao final, a função principal (main), deve exibir o array resultante.

#include <iostream>
#include <cmath>

using namespace std;

void swap(int * a, int * b) {
    // troca os valores de um endereço para o outro
	int temp = * a;
	*a = *b;
	*b = temp;
}

void inverte (int arr[], int tam, int inicio) {
    // inverte as posições dos elementos de um array
    int meio = (tam - inicio) / 2 + inicio;
	for (int i = inicio; i < meio; i++){
        int i_inverso = tam - i - 1 + inicio;
		swap(arr[i], arr[i_inverso]);
	}
}

void rotaciona (int arr[], int tam){
    // inverte o array inteiro e depois inverte o array começando do index 1
	inverte(arr, tam, 0);
    inverte(arr, tam, 1);
}

int main (){
    // inicia o array
    int tamanho = 10, val;
    int array[tamanho];
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite um valor (" << i+1 << "/"<< tamanho <<") : ";
        cin >> val;
        array[i] = val;
    }
    
    rotaciona(array, tamanho);

    // exibe o array rotacionado
    for (int i : array) cout << i << " ";
    cout << endl;

    return 0;
}
