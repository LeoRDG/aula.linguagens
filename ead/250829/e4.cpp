// Faça uma leitura aprofundada do texto sobre Funcões Matemáticas. 
// Em seguida, explore mais sobre as funções matemáticas de cmath, pesquisando sobre aplicações e usos dessas funções. 
// Por fim, elabore um programa em C++ que demonstre o uso de ao menos 10 funções de diferentes categorias, 
// e ao menos 3 constantes matemáticas dessa biblioteca.
// Use sem moderação os comentários no seu código para demonstrar que você compreendeu o uso dessas funções e constantes.

#include <iostream>
#include <cmath>
using namespace std;

double deg2rad (double deg) {
	return deg * M_PI / 180;
}

int main(){
		int tam = 12;
		
		for (double i = 0; i < 360; i+=10) {
			int x = (int) (sin(deg2rad(i)) * tam + tam);
			int y = (int) (cos(deg2rad(i)) * tam + tam);
			
			cout << x << endl;
			cout << y << endl << endl;
		}
		
		
	
	return 0;
} 
