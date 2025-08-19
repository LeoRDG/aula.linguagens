//Leia 3 valores reais> A B e C 
//Se ( A < B + C ) e ( B < A + C ) e (C < A + C) é um triângulo.

//Se os 3 valores forem iguais é um triagulo equilatero
//Se apenas 2 fore iguais é um triangulo isosceles 
//Do contrario é um triangulo escaleno

#include <iostream>

using namespace std;

int main () {
	double a, b, c;
	
	cout << "Digite 3 valores: " << endl << "Valor A" << endl;
	cin >> a;
	
	cout << "Valor B " << endl;
	cin >> b;
	
	cout << "Valor C " << endl;
	cin >> c;
	
	if ( (a < b + c) && (b < a + c) && (c < a + b) ){
		if (a == b && b == c) {
			cout << "Triangulo equilatero";
		} else if ( a == b || b == c || a == c){
			cout << "Triangulo isosceles";
		} else {
			cout << "Triangulo escaleno";
		}			
	} else {
		cout << "Nao e triangulo";
	}
	
	return 0;
}
