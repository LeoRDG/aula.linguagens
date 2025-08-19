// Exiba na tela uma lista de valores, inciando em 0,
// aumentando gradativamente de 0.1 até chegarem a 10, inclusive.

#include <iostream>

using namespace std;

int main () {
	for (double i = 0; i <= 10; i += 0.1){
		cout << i << endl;
	}
	
	return 0;
}
