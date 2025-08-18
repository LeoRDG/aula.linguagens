// Leia um numero real double e informe se ele é positivo, zero ou negativo

#include <iostream>
using namespace std;

int main(){
	double num;
	
	cout << "Digite um numero real ";
	
	cin >> num;
	
	if (num > 0){
		cout << "O numero " << num << " e positivo";
	} else if ( num < 0){
		cout << "O numero " << num << " e negativo";
	} else {
		cout << "O numero u zero";
	}
	
	return 0;
}
