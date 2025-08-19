// No município de Miracema do Norte, 
// Arlindo Orlando está responsável por instalar novos radares de velocidade e necessita de auxílio para configurá-los.
// Dado um limite de velocidade, a ser lido externamente, 
// deve ser considerado um erro geral de qualquer equipamento de 7 km/h (subtrair da velocidade medida do veículo).
// Em seguida, analisar se a velocidade do veículo for até 10% do limite, está dentro da tolerância e não é gerada autuação; 
// se for entre 10 e 20%, a infração é MÉDIA; 
// até 50% a infração é GRAVE; 
// e acima disso ela é GRAVÍSSIMA.

#include <iostream>

using namespace std;

int main() {
	double limite, velocidade;
	int erro = 7;
	
	cout << "Informe o limite de velocidade: ";
	cin >> limite;
	
	cout << "Informe a velocidade registrada: ";
	cin >> velocidade;
	
	velocidade -= erro;
	
	if (velocidade <= (0.1 * limite)) {
		cout << "OK";
	} else if (velocidade <= (0.2 * limite)) {
		cout << "MEDIA";
		
	} else if (velocidade <= (0.5 * limite)) {
		cout << "GRAVE";

	} else {
		cout << "GRAVISSIMA";
	}
		
    return 0;
}