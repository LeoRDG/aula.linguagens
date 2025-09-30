// Implemente um programa que crie um arquivo com uma lista de tarefas. 
// Cada tarefa deve ter descricao, categoria(casa,trabalho,lazer,pessoal), prioridade (1 a 5)

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

	ofstream arquivo("tarefas.txt");
	
	string descricoes[] = {
    "Limpar a cozinha",
    "Finalizar relatorio",
    "Caminhar no parque",
    "Marcar consulta",
    "Lavar roupas",
    "Responder e-mails",
    "Assistir novela",
    "Fazer Exercicios",
    "Organizar armario",
    "Preparar apresentacao",
    "Sair com amigos",
    "Planejar viagem"
	};

    string categorias[] = {
    "Casa",
    "Trabalho",
    "Lazer",
    "Pessoal",
    "Casa",
    "Trabalho",
    "Lazer",
    "Pessoal",
    "Casa",
    "Trabalho",
    "Lazer",
    "Pessoal"
	};

	int prioridades[] = {3, 5, 2, 4, 2, 4, 1, 3, 2, 5, 3, 4};
	
	int largura = 21;
	int qtd = 12;
	
	arquivo << left << setw(30) << "TAREFA";
	arquivo << setw(18) << "CATEGORIA";
	arquivo << setw(12) << "PRIORIDADE" << "\n";
	
	arquivo << setw(60) << setfill('.') << "" << "\n";
	arquivo << setfill(' ');
	for (int i = 0; i < qtd ; i++ ) {
		arquivo << setw(30) << descricoes[i];
		arquivo << setw(18) << categorias[i];
		arquivo << setw(12) << prioridades[i] << "\n";
	}

	arquivo.close();
	return 0;
}