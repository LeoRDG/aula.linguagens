// Criar uma função para calcular o n-ésimo número da série de Fibonacci. 
// A série inicia com os valores 1 e 1, e os números subsequentes são a soma dos dois anteriores. 
// (ex.: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...)
#include <iostream>
using namespace std;

int fib(int num){
	if (num < 3) return 1;
	
	return fib(num-1) + fib(num-2);
}

int main(){
	cout << fib(11);
	
	return 0;
} 
