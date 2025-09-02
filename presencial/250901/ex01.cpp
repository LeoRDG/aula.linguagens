// Escreva uma funcao com a seguinte assnatura
// int recupera (double origal[], double novo[], int quant, double * media)
// Ela deve verificar no array novo se o valor é maior que o correspondente em orignal
// Se for, substitui o original
// quant é a quantidade de notas em cada array
// Atualize a media com a media apos todas as substituiçoes
// Retorne quantas notas foram recuperadas

#include <iostream>

using namespace std;

double calc_media (double arr[], int tamanho) {
	double soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += arr[i];
	}
	return soma / tamanho;
}

int recupera (double original[], double novo[], int quant, double * media) {
	int cont_recuperadas = 0;
	
	for (int i = 0; i < quant; i++) {
		if ( novo[i] > original[i] ) {
			original[i] = novo[i];
			cont_recuperadas++;
		}
	}
	
	*media = calc_media(original, quant);
	
	return cont_recuperadas;
}

int main(){
	int quant = 3;
	double notas_originais[] = {6.7 , 9.0, 3.5};
	double notas_novas[]     = {7.5, 8.8, 5.5};
	double media = calc_media(notas_originais, quant);
	
	cout << "Media original: " << media << endl;
		
	int quant_recuperadas = recupera(notas_originais, notas_novas, quant, &media);
	
	cout << "Nova media: " << media << endl;
	cout << quant_recuperadas << " notas foram recuperadas" << endl;
	
	return 0;
}