#include <iostream>

using namespace std;

int main(){
	int soma, val;
	
	cout << "Digite um numero inteiro: ";
	cin >> val;
	while (val) {
		cout << "Digite outro numero inteiro: ";
		soma += val;
		cin >> val;
	}

	cout << "Soma = " << soma << endl;

	return 0;
} 
