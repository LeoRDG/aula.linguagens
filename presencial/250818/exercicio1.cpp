// Leia um número inteiro e informe se ele é par ou impar
#include <iostream>

using namespace std;

int main() {
	int num;
	
	cout << "Digite um numero ";
	
	cin >> num;
	
	if (num % 2){
		cout << "O numero " << num << " e impar";
	} else {
		cout << "O numero " << num << " e par";
	}
	
	return 0;
}
