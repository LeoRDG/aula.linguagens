// Um analista está avaliando um processo.
// São realizadas duas avaliações, com valores entre 0 e 10, inclusive.
// Se as duas avaliações forem maiores ou iguais a 9,0, o valor final será a maior das duas.
// Se ambas forem superiores a 5,0, o resultado será a média das duas. 
// Caso alguma seja inferior ou igual a 5.0, prevalecerá a menor das duas avaliações.

#include <iostream>

using namespace std;

int main() {
    double a1, a2;
	
	cout << "Resultado da avaliacao 1: ";
    cin >> a1;
    
	cout << "Resultado da avaliacao 2: ";
    cin >> a2;
    
    if (a1 > 10 || a1 < 0 || a2 > 10 || a2 < 0) {
    	cout << "Valores invalidos";
    	return 1;
	}
    
    if (a1 >= 9 && a2 >= 9) {
		cout << "MAIOR: " << max(a1, a2);
    } else if (a1 > 5 && a2 > 5) {
		cout << "MEDIA: " << (a1 + a2) / 2.0;
	} else {
		cout << "MENOR: " << min(a1, a2);
	}

    return 0;
}