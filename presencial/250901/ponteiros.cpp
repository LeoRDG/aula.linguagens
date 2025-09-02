#include <iostream>

using namespace std;

int incremento( int valor ) {
	valor ++;
	return valor;
} 

// int * endereco de uma variavel inteira
int ptr_incremento ( int * valor ) {
	(*valor) ++;
	return *valor;
}

int main (){
	int numero = 15;
	int resultado;
	
	cout << "Numero antes : " << numero << endl;
	resultado = incremento(numero);
	cout << "Numero depois : " << numero << endl;
	cout << "Resultado : " << resultado << endl;
	
	
	cout << "Numero antes : " << numero << endl;
	resultado = ptr_incremento(&numero);
	cout << "Numero depois : " << numero << endl;
	cout << "Resultado : " << resultado << endl;
	
	cout << "endereco numero : " << &numero << endl;
	cout << "endereco resultado : " << &resultado << endl;	
	
	return 0;
}