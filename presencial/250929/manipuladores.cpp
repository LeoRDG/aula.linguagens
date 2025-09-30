// Usando manipuladores de saida
#include <iostream> 
#include <iomanip> 

using namespace std;

int main() {
	int num = 671;
	
	cout << num << "\n";
	
	// Mudanca de base
	cout << hex << num << "\n";
	cout << oct << num << "\n";
	cout << dec << num << "\n";
	cout << hex << showbase << num << "\n";
	cout << oct << showbase << num << "\n\n";
	
	// Formatacao de numeros de ponto flutuante
	double valor = 1786.576;
	cout << valor << "\n";
	cout << setprecision(4) << valor << "\n";
	cout << scientific << valor << "\n\n";
	
	cout << fixed;
	double numeros[] = {1.75, 13.1, 14.567, 120.2, 1300.68, 890};
	for (double num : numeros) {
		cout << setw(9) << num << "\n";
	}
	cout << "\n";
	
	string frutas[] = {"uva", "banana", "figo", "laranja", "fruta-do-conde"};
	for (string fruta : frutas) {
		cout << setw(33) << left << setfill('.') << fruta << "--- \n";
	}
	cout << "\n";
	
	cout << true << "\n";
	cout << false << "\n";
	cout << boolalpha << true << "\n";
	cout << false << "\n";
	
	
	return 0;
	
	
}

