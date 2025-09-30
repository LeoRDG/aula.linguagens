#include <iostream> 
#include <iomanip> 

using namespace std;

int main() {
	string produtos[] = {"agua mineral", "refrigerante", "suco", "copo descartavel"};
	int quant[] = {120,50,60,250};
	double precounit[] = {0.69, 2.45, 5.7, 0.2};
	
	int width = 16;
	int qtd = 4;
	
	cout << setw(width) << left << "PRODUTO";
	cout << setw(width) << right << "PRECO";
	cout << setw(width) << "QUANTIDADE";
	cout << setw(width) << "PRECO TOTAL" << "\n";
	
	cout << setw(width*qtd) << setfill('.') << ""<< "\n";
	
	int soma_qtd = 0;
	double soma_preco_total = 0;
	
	for (int i = 0; i < qtd; i++) {
		cout << setfill(' ') << setprecision(2) << fixed;
		cout << setw(width) << left << produtos[i];
		cout << setw(width) << right << precounit[i];
		cout << setw(width) << quant[i];
		cout << setw(width) << quant[i]*precounit[i] << "\n";
		soma_qtd += quant[i];
		soma_preco_total += quant[i] * precounit[i];
	}
	
	cout << setw(width*qtd) << setfill('.') << "" << "\n";
	
	cout << setw(width) << setfill(' ') << left <<  "TOTAL";
	cout << setw(width) << right << "";
	cout << setw(width) << soma_qtd;
	cout << setw(width) << soma_preco_total;

	return 0;
}