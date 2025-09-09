// Rotação dos Elementos de um Array
// Implemente uma função que rotacione os elementos do array. A função deve receber, além do array, mais dois parâmetros:
// forward (bool) : se true, a rotação ocorre dos menores índices para os maiores, se false, o sentido inverte
// steps (int): indica quandos índices a rotação deve avançar, se  por acaso o usuário informar um número não positivo, a rotação ocorre de 1 em 1.
// Escreva também uma função principal (main) para testar o seu código.

#include <iostream>
#include <cmath>

using namespace std;

// 1 4  0, 2  
// 2 1  1, 3  
// 3 2  2, 4
// 4 3  3, 0
//      4, 1


void swap(int * a, int * b) {
	int temp = * a;
	*a = *b;
	*b = temp;
}


void rotaciona (int arr[], int tam, bool forward, int steps){
	if (steps<=0) steps = 1;
	
	for (int i = 0; i < tam; i++){
		for ()
	}
	

}

int main (){
    int tamanho = 5;
    int array[tamanho];
    int val;

    for (int i = 0; i < tamanho; i++) {
        // cout << "Digite um valor (" << i+1 << "/10) : ";
        // cin >> val;
        array[i] = i;
    }
    
    rotaciona(array, tamanho, true, 2);

    for (int i : array) {
        cout << i << endl;
    }

    return 0;
}
