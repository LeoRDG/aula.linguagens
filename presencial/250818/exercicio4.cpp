// Leia 2 caraterísticas de um animal 
// Caracteristica A: 1 - mamifero,  2 - ave
// Caracteristica B: 1 - herbívoro, 2 - carnivoro
// Se for mamífero e herbívoro, é uma vaca;
// Se for mamífero e carnívoro, é uma onça;
// Se for ave e herbívoro, é uma sabiá;
// Se for ave e carnivoro, é uma gavião;

#include <iostream>

using namespace std;

int main(){
	int c1, c2;
	
	cout << "O animal e ?" << endl;
	cout << "1 - Mamifero" << endl;
	cout << "2 - Ave" << endl;
	cin >> c1;
	
	cout << "O animal e ?" << endl;
	cout << "1 - herbivoro" << endl;
	cout << "2 - carnivoro" << endl;
	cin >> c2;
	
	if (c1 == 1){
		if (c2 == 1) {
			cout << "O animal e VACA";
		} else if (c2 == 2) {
			cout << "O animal e ONCA";
		} else {
			cout << "O animal e DESCONHECIDO";
		}
		
	} else if (c1 == 2){
		if (c2 == 1) {
			cout << "O animal e SABIA";
		} else if (c2 == 2) {
			cout << "O animal e GAVIAO";
		}
		else {
			cout << "O animal e DESCONHECIDO";
		}
	} else {
			cout << "O animal e DESCONHECIDO";
	}	
	
	return 0;
}
