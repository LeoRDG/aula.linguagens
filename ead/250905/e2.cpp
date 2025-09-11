// Rotação dos Elementos de um Array
// Implemente uma função que rotacione os elementos do array. A função deve receber, além do array, mais dois parâmetros:
//     forward (bool) : se true, a rotação ocorre dos menores índices para os maiores, se false, o sentido inverte
//     steps (int): indica quandos índices a rotação deve avançar, se  por acaso o usuário informar um número não positivo, a rotação ocorre de 1 em 1.
// Escreva também uma função principal (main) para testar o seu código.

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    // troca os valores de um endereço para o outro
	int temp = *a;
	*a = *b;
	*b = temp;
}

void inverte (int arr[], int inicio, int fim) {
    // inverte as posições dos elementos de um array de acordo com um index inicial e final
    int tam = fim - inicio;
    int meio = tam/2 + inicio;
	for (int i = inicio; i < meio; i++){
        int i_inverso = tam - i - 1 + 2 * inicio;
		swap(arr[i], arr[i_inverso]);
	}
}

void rotaciona (int arr[], int tam, bool forward, int steps){
    cout << "Rotaciona " << steps << " passos ";
    if (steps <= 0) steps = 1;
    steps %= tam;

    // if (!forward) steps = tam - steps; "rotaciona" para esquerda pela direita

    // 1º inverter o array inteiro, depois inverter as 2 partes separadas pelo tamanho do passo
	inverte(arr, 0, tam);                 //  (1,2,3,4,5)  =>  (5,4,3,2,1)
    if (forward) {
        cout << "para a direita";
        inverte(arr, 0, steps);           // (5,4),(3,2,1) => (4,5),(3,2,1)
        inverte(arr, steps, tam);         // (4,5),(3,2,1) => (4,5),(1,2,3)
    } else {
        cout << "para a esquerda";
        inverte(arr, 0, tam-steps);       // (5,4,3),(2,1) => (3,4,5),(2,1)
        inverte(arr, tam-steps, tam);     // (3,4,5),(2,1) => (3,4,5),(1,2)
    }
    cout << endl;
}

int main (){
    int tamanho = 23;
    int array[tamanho];

    cout << "Antes:" << endl;
    for (int i = 0; i < tamanho; i++) {
        array[i] = i+1;
        cout << i+1 << " ";
    }
    cout << endl;
    
    rotaciona(array, tamanho, false, 22);

    cout <<"Depois:" << endl;
    for (int i : array) cout << i << " ";
    cout << endl;

    return 0;
}
