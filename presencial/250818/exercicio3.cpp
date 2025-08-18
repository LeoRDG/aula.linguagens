// Leia 2 numeros reais e um numero inteiro. Se o numero inteiro for 1, some os 2 reais. Se o inteiro for 2, multiplique os reais. 
// Se o inteiro for 3, subtraia o primeiro real do segundo

#include <iostream>

using namespace std;

int main(){
	double num1, num2;
	int num3;
	
	cout << "Informe um numero real ";
	cin >> num1;
	
	cout << "Informe outro numero real ";
	cin >> num2;
	
	cout << "Informe um numero inteiro ";
	cin >> num3;
	
	switch (num3){
		case 1:
			cout << "Soma: " << num1 + num2;
			break;	
		case 2:
			cout << "Mult: " << num1 * num2;
			break;	
		case 3:	
			cout << "Sub: " << num2 - num1;
			break;	
	}
		
	return 0;
}