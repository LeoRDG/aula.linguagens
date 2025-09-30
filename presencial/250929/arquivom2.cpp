#include <fstream> 
#include <iomanip> 

using namespace std;

int main() {
	ofstream arqProd("PRODUTOS.txt");
	
	string produtos[] = {"agua mineral", "refrigerante", "suco", "copo descartavel"};
	int quant[] = {120,50,60,250};
	double precounit[] = {0.69, 2.45, 5.7, 0.2};
	
	int width = 16;
	int qtd = 4;
	
	arqProd << setw(width) << left << "PRODUTO";
	arqProd << setw(width) << right << "PRECO";
	arqProd << setw(width) << "QUANTIDADE";
	arqProd << setw(width) << "PRECO TOTAL" << "\n";
	
	arqProd << setw(width*qtd) << setfill('.') << ""<< "\n";
	
	int soma_qtd = 0;
	double soma_preco_total = 0;
	
	for (int i = 0; i < qtd; i++) {
		arqProd << setfill(' ') << setprecision(2) << fixed;
		arqProd << setw(width) << left << produtos[i];
		arqProd << setw(width) << right << precounit[i];
		arqProd << setw(width) << quant[i];
		arqProd << setw(width) << quant[i]*precounit[i] << "\n";
		soma_qtd += quant[i];
		soma_preco_total += quant[i] * precounit[i];
	}
	
	arqProd << setw(width*qtd) << setfill('.') << "" << "\n";
	
	arqProd << setw(width) << setfill(' ') << left <<  "TOTAL";
	arqProd << setw(width) << right << "";
	arqProd << setw(width) << soma_qtd;
	arqProd << setw(width) << soma_preco_total;
	
	arqProd.close();

	return 0;
}