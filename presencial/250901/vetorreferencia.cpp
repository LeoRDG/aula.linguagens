#include <iostream>

using namespace std;

void duplica (int vetor[], int tam){
	for (int i=0; i < tam; i++) {
		vetor[i] = vetor[i] * 2;
	}
}

int main (){
	int vetor[] = {8,5,3};
	
	duplica(vetor, 3);
	
	for (int i=0; i < 3; i++) {
		cout << vetor[i] << endl;
	}
	
	return 0;
}