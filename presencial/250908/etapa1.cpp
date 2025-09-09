#include<iostream>
#include<string>

using namespace std;

string * codigos;
string * nomes;
double ** notas;
int * faltas;
double * medias; 


void registrar_aluno(int indice){
	cout << "Informe o codigo do aluno " << indice+1 << ": ";
	cin >> codigos[indice];
	
	cout << "Informe o nome do aluno " << indice+1 << ": ";
	cin >> nomes[indice];
}

void criar_notas(int qtd_alunos, int qtd_notas) {
	for(int i=0; i<qtd_alunos; i++){
		notas[i] = new double[qtd_notas];
	}
}

void criar_alunos(int qtd_alunos){
	codigos = new string[qtd_alunos];
	notas = new double*[qtd_alunos];
	nomes = new string[qtd_alunos];
	faltas = new int[qtd_alunos];
	medias = new double[qtd_alunos];
}

void registrar_notas(int indice, int qtd_notas) {
	for (int i = 0; i < qtd_notas; i++){
		cout << "informe a nota " << i+1 << " do aluno " << indice+1 << ": " ;
		cin >> notas[indice][i];
	}
}

void calcular_media(int indice, int qtd_notas) {
	double soma = 0;
	for (int i = 0; i < qtd_notas; i++){
		soma += notas[indice][i];
	}
	medias[indice] = soma / qtd_notas;
}

void registrar_faltas(int indice){
	cout << "Informe a quantidade de faltas do aluno " << indice + 1 << ": " ;
	cin >> faltas[indice];
}

void registrar_todos_alunos(int qtd_alunos) {
	for (int i = 0; i < qtd_alunos; i++){
		registrar_aluno(i);
	}
}

void registrar_todas_faltas(int qtd_alunos) {
	for (int i = 0; i < qtd_alunos; i++){
		registrar_faltas(i);
	}
}

void registrar_todas_notas(int qtd_alunos, int qtd_notas) {
	for (int i = 0; i < qtd_alunos; i++){
		registrar_notas(i, qtd_notas);
	}
}

void registrar_todas_medias(int qtd_alunos, int qtd_notas) {
	for (int i = 0; i < qtd_alunos; i++){
		calcular_media(i, qtd_notas);
	}
}

int main() {
	int qtd_alunos, qtd_notas;
	
	cout << "Informe a quantidade de alunos: ";
	cin >> qtd_alunos;
	
	cout << "Informe a quantidade de avaliacoes: ";
	cin >> qtd_notas; 
	cout << endl;
	
	criar_alunos(qtd_alunos);
	criar_notas(qtd_alunos, qtd_notas);	
	
	registrar_todos_alunos(qtd_alunos);
	registrar_todas_notas(qtd_alunos, qtd_notas);
	registrar_todas_medias(qtd_alunos, qtd_notas);
	registrar_todas_faltas(qtd_alunos);

	cout << endl;
	
	return 0;
}