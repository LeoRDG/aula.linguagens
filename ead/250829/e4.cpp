// Faça uma leitura aprofundada do texto sobre Funcões Matemáticas. 
// Em seguida, explore mais sobre as funções matemáticas de cmath, pesquisando sobre aplicações e usos dessas funções. 
// Por fim, elabore um programa em C++ que demonstre o uso de ao menos 10 funções de diferentes categorias, 
// e ao menos 3 constantes matemáticas dessa biblioteca.
// Use sem moderação os comentários no seu código para demonstrar que você compreendeu o uso dessas funções e constantes.

#include <iostream>
#include <cmath>

using namespace std;

double deg2rad (double deg) {
	// Converte angulo em graus para radianos
	return deg * M_PI / 180;
}

void gerarCirculo (int arrX[], int arrY[], int resolucao, int raio) {
	// Gera as coordenadas para desenhar um circulo em 2d

	for (int i = 0; i < resolucao; i++) {
		double angulo = deg2rad(( 360.0 / resolucao ) * i);
		
		double dx = 1 + cos(angulo); // cos() retorna o cosseno (x) de um angulo
		double dy = 1 + sin(angulo); // sin() retorna o seno (y) de um angulo

		// round() arredonda o número para o inteiro mais próximo
		int x = (int) round(raio * dx);
		int y = (int) round(raio * dy);
		
		arrX[i] = x;
		arrY[i] = y;
	}
}

void gerarEspiral (int arrX[], int arrY[], int resolucao, int raio) {
	// Gera as coordenadas para desenhar um espiral em 2d
	
	for (int i = 0; i < resolucao; i++) {
		double angulo = deg2rad( 360.0 / resolucao * i );
			
		double r1 = raio * sqrt(i / (double) resolucao); // sqrt() retorna o a raiz quadrada de um numero
		double r2 = raio * cbrt(i / (double) resolucao); // cbrt() retorna o a raiz cubica de um numero
		
		double dx = cos(angulo) * r1; // cos() retorna o cosseno (x) de um angulo
		double dy = sin(angulo) * r2; // sin() retorna o seno (y) de um angulo

		// ceil() arredonda um numero para o próximo inteiro
		int x = (int) raio + ceil(dx); 
		int y = (int) raio + ceil(dy); 

		arrX[i] = x;
		arrY[i] = y;
	}
}

void gerarAlgo(int arrX[], int arrY[], int resolucao, int raio) {
	// Gera as coordenadas para desenhar algo em 2d
	// Usei funções e constantes "aleatoriamente" para chegar ao objetivo de 10 f. e 3 c.

	for (int i = 0; i < resolucao; i++) {
		double angulo = deg2rad(( 360.0 / resolucao ) * i);

		double r2 = cos(4 * angulo);
		r2 = pow(r2, 6); // Eleva um número à uma potência
		r2 = r2 * M_E * M_PI_2 *raio; // M_E é a base dos logaritimos naturais e M_PI_2 é pi dividido por 2
		r2 = min(double(raio), r2); // min() retorna o menor valor entre 2 numeros 
		r2 = max(1.0, r2); // max() retorna o maior valor entre 2 numeros

		// floor() arredonda um numero para a sua parte inteira
 		int x = (int) raio + floor(sin(angulo) * r2);
		int y = (int) raio + floor(cos(angulo) * r2);

		arrX[i] = x;
		arrY[i] = y;
	}
}

void desenhar (int arrX[], int arrY[], int resolucao, int tamanho) {
	// "Desenha" algo na tela.
	// resolucao é o tamanho dos arrays
	// tamanho é quantas linhas/colunas o desenho terá

	for (int consoleX = 0; consoleX <= tamanho; consoleX++) {
		cout << " ";
		for (int consoleY = 0; consoleY <= tamanho; consoleY++) {
			
			int i;
			for (i = 0; i < resolucao; i++) {
				// Se a coordenada onde está o cursor for igual à alguma coordenada do desenho
				if (consoleX == arrX[i] && consoleY == arrY[i]) {		
					cout << "CD";
					break;
				}
			} 
			// Se não encontrou nada: print espaços
			if (i >= resolucao) cout << "  ";
		}
		cout << endl;
	}
	cout << "___________________________________________________________" << endl;
};

int main(){
	// Esse programa gera as coordenadas para 3 desenhos usando cmath e printa os no console
	// constantes usadas: M_E, M_PI_2, M_PI
	// funcções usadas: sin, cos, round, floor, ceil, pow, sqrt, cbrt, max, min

	int resolucao = 720;
	int raio = 15;

	int arrayX[resolucao];
	int arrayY[resolucao];

	gerarCirculo(arrayX, arrayY, resolucao, raio);
	desenhar(arrayX, arrayY, resolucao, 2*raio);

	gerarEspiral(arrayX, arrayY, resolucao, raio);
	desenhar(arrayX, arrayY, resolucao, 2*raio);

	gerarAlgo(arrayX, arrayY, resolucao, raio);
	desenhar(arrayX, arrayY, resolucao, 2*raio);

	return 0;
} 
