#include <iostream>

using namespace std;

int main(){
	double nota;
	
	cout << "Digite a nota de 0 a 10" << endl;
	cin >> nota;
	
	while (nota < 0 || nota > 10) {
		cout << "Nota invalida" << endl;
		cout << "Digite a nota de 0 a 10" << endl;
		cin >> nota;
	}
	
	cout << nota;
	return 0;
} 
