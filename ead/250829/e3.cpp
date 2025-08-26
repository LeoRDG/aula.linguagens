// Criar uma função para calcular o n-ésimo número da série de Fibonacci. 
// A série inicia com os valores 1 e 1, e os números subsequentes são a soma dos dois anteriores. 
// (ex.: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...)
#include <iostream>
using namespace std;

int potencia(int base, int exp){
	if (exp == 0) return 1;
	return base * potencia(base, exp-1);
}

int main(){
	cout << potencia(10, 1);
	
	return 0;
} 
