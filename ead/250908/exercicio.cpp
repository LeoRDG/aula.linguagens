#include <string>
#include <iostream>

using namespace std;

string * codigo;
string * nome;
double ** notas;
int * faltas;
double * media;

void criaAlunos(int quant) {
	codigo = new string[quant];
	nome   = new string[quant];
	notas  = new double* [quant];
	faltas = new int[quant];
	media  = new double[quant];
}

void criaNotas(int alunos, int quantNotas) {
	for(int i=0; i < alunos; i++) {
		notas[i] = new double[quantNotas];
	}
}

void leituraAluno(int indice) {
	cout << "Codigo[" << indice << "]: ";
	cin >> codigo[indice];
	cout << "Aluno[" << indice << "]: ";
	cin >> nome[indice];
}

void leituraAlunos(int numAlunos) {
	for(int i=0; i<numAlunos; i++) {
		leituraAluno(i);
	}
}

void leituraAvaliacao(int numAlunos, int numAvaliacao) {
    for(int i=0; i < numAlunos; i++) {
    	cout << "Aluno: " << nome[i] << endl;
    	cout << "Nota " << numAvaliacao + 1 << ": ";
    	cin >> notas[i][numAvaliacao];
	}	
}

void leituraTodasAvaliacoes(int numAlunos, int numNotas) {
    for(int i=0; i < numNotas; i++) {
    	leituraAvaliacao(numAlunos, i);
	}	
}

void atualizaMedia(int numAlunos, int numNotas) {
	double soma;
    for(int a=0; a < numAlunos; a++) {
    	soma = 0;
    	for(int n=0; n< numNotas; n++) {
    		soma += notas[a][n];
		}
    	media[a] = soma / numNotas;
	}	
}

void leituraFalta(int indice) {
	cout << "Faltas do Aluno " << nome[indice] << ": ";
	cin >> faltas[indice];
}

void leituraFaltas(int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        leituraFalta(i);
    }
}

void imprimirRelatorio(int numAlunos) {
	printf("| %-8s| %-20s| %-8s| %-8s|\n", "ID", "Nome", "Media", "Faltas");
	for (int i = 0; i < numAlunos; i++) {
		printf("| %-8s| %-20s| %-8.2f| %-8d|\n",
		codigo[i].c_str(),
		nome[i].c_str(),
		media[i],
		faltas[i]
		);

	}
}

int main() {
        int numAlunos, numNotas;

	cout << "Quantos alunos? " ;
	cin >> numAlunos;
	cout << "Quantas avaliacoes? ";
	cin >> numNotas;

	criaAlunos(numAlunos);
	criaNotas(numAlunos, numNotas);
	leituraAlunos(numAlunos);
	leituraTodasAvaliacoes(numAlunos, numNotas);
	atualizaMedia(numAlunos, numNotas);
        leituraFaltas(numAlunos);
	cout << endl;
	imprimirRelatorio(numAlunos);
	
	return 0;
}

