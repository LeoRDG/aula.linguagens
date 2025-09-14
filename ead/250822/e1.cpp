#include <iostream>

using namespace std;

int main(){
	int n1 = 1, n2 = 1, cont = 0, val, ntemp;
	
	cout << "Digite um numero inteiro: ";
	cin >> val;
	
	while (cont++ < val){
		cout << n1 << " ";
		ntemp = n1;
		n1 = n2;
		n2 = n1 + ntemp;		
	}
	
	return 0;
} 
